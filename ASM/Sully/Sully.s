# This is the data
.data
s: .asciz "bottom text %d ayy"

.text
.global main
main:
	# And this is the code !
	lea s(%rip), %rdi
	mov $42, %rsi
	call sprintf
	xor %rax, %rax
	ret
