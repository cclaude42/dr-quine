.data

i: .long 5
prog: .asciz ".data%6$c%6$ci: .long %9$d%6$cprog: .asciz %7$c%1$s%7$c%6$cname: .asciz %7$c%2$s%7$c%6$cmode: .asciz %7$cw+%7$c%6$ccomp: .asciz %7$c%3$s%7$c%6$cexec: .asciz %7$c%4$s%7$c%6$caddr: .space 60%6$c%6$c.text%6$c.global main%6$c%6$c# Fill %rdi with sprintf string%6$c.macro RDI_STR str%6$c%5$cpush %r12%6$c%5$clea addr(%rip), %rdi%6$c%5$clea %8$cstr(%rip), %rsi%6$c%5$cmov i, %rdx%6$c%5$cxor %rax, %rax%6$c%5$ccall sprintf%6$c%5$clea addr(%rip), %rdi%6$c%5$cpop %r12%6$c.endm%6$c%6$cmain:%6$c%5$ccmpw $5, i%6$c%5$cjne start%6$c%5$cRDI_STR name%6$c%5$cmov $0, %rsi%6$c%5$ccall access%6$c%5$ccmp $0, %rax%6$c%5$cje start%6$c%5$cincw i%6$cstart:%6$c%5$cdecw i%6$c# Create file%6$c%5$cRDI_STR name%6$c%5$clea mode(%rip), %rsi%6$c%5$ccall fopen%6$c%5$cpush %rax%6$c# Write to file%6$c%5$cmov %rax, %rdi%6$c%5$clea prog(%rip), %rsi%6$c%5$clea prog(%rip), %rdx%6$c%5$clea name(%rip), %rcx%6$c%5$clea comp(%rip), %r8%6$c%5$clea exec(%rip), %r9%6$c%5$cpush i%6$c%5$cpush $92%6$c%5$cpush $34%6$c%5$cpush $10%6$c%5$cpush $9%6$c%5$cxor %rax, %rax%6$c%5$ccall fprintf%6$c%5$cpop %rax%6$c%5$cpop %rax%6$c%5$cpop %rax%6$c%5$cpop %rax%6$c%5$cpop %rax%6$c# Close FILE *%6$c%5$cpop %rdi%6$c%5$ccall fclose%6$c# Compile and execute%6$c %5$cRDI_STR comp%6$c %5$cpush %r12%6$c%5$ccall system%6$c%5$cpop %r12%6$c %5$ccmpw $0, i%6$c %5$cjz end%6$c%5$cRDI_STR exec%6$c%5$cpush %r12%6$c%5$ccall system%6$c%5$cpop %r12%6$cend:%6$c%5$cxor %rax, %rax%6$c%5$cret%6$c"
name: .asciz "Sully_%1$d.s"
mode: .asciz "w+"
comp: .asciz "clang -Wall -Wextra -Werror -o Sully_%1$d Sully_%1$d.s"
exec: .asciz "./Sully_%1$d"
addr: .space 60

.text
.global main

# Fill %rdi with sprintf string
.macro RDI_STR str
	push %r12
	lea addr(%rip), %rdi
	lea \str(%rip), %rsi
	mov i, %rdx
	xor %rax, %rax
	call sprintf
	lea addr(%rip), %rdi
	pop %r12
.endm

main:
	cmpw $5, i
	jne start
	RDI_STR name
	mov $0, %rsi
	call access
	cmp $0, %rax
	je start
	incw i
start:
	decw i
# Create file
	RDI_STR name
	lea mode(%rip), %rsi
	call fopen
	push %rax
# Write to file
	mov %rax, %rdi
	lea prog(%rip), %rsi
	lea prog(%rip), %rdx
	lea name(%rip), %rcx
	lea comp(%rip), %r8
	lea exec(%rip), %r9
	push i
	push $92
	push $34
	push $10
	push $9
	xor %rax, %rax
	call fprintf
	pop %rax
	pop %rax
	pop %rax
	pop %rax
	pop %rax
# Close FILE *
	pop %rdi
	call fclose
# Compile and execute
 	RDI_STR comp
 	push %r12
	call system
	pop %r12
 	cmpw $0, i
 	jz end
	RDI_STR exec
	push %r12
	call system
	pop %r12
end:
	xor %rax, %rax
	ret
