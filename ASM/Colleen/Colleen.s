# This is the data
.data
s: .asciz "# This is the data%2$c.data%2$cs: .asciz %3$c%1$s%3$c%2$c%2$c.text%2$c.global main%2$cmain:%2$c%4$c# And this is the code !%2$c%4$clea s(%rip), %rdi%2$c%4$clea s(%rip), %rsi%2$c%4$cmov $10, %rdx%2$c%4$cmov $34, %rcx%2$c%4$cmov $9, %r8%2$c%4$cxor %rax, %rax%2$c%4$ccall printf%2$c%4$ccall func%2$c%4$cret%2$c%2$cfunc:%2$c%4$cxor %rax, %rax%2$c%4$cret%2$c"

.text
.global main
main:
	# And this is the code !
	lea s(%rip), %rdi
	lea s(%rip), %rsi
	mov $10, %rdx
	mov $34, %rcx
	mov $9, %r8
	xor %rax, %rax
	call printf
	call func
	ret

func:
	xor %rax, %rax
	ret
