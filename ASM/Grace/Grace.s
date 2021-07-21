.data
prog: .asciz ".data%2$cprog: .asciz %3$c%1$s%3$c%2$cname: .asciz %3$cGrace_kid.s%3$c%2$cmode: .asciz %3$cw+%3$c%2$c%2$c.text%2$c.global main%2$c.macro CREATE_FILE ; lea name(%rip), %rdi ; lea mode(%rip), %rsi ; call fopen ; mov %rax, %rdi ; .endm%2$c.macro WRITE_FILE ; lea prog(%rip), %rsi ; lea prog(%rip), %rdx ; mov $10, %rcx ; mov $34, %r8 ; call fprintf ; .endm%2$c.macro FT ; main: ; CREATE_FILE ; push %rdi ; WRITE_FILE ; pop %rdi ; call fclose ; .endm%2$c%2$c# Regarde maman, sans le main !%2$cFT%2$c"
name: .asciz "Grace_kid.s"
mode: .asciz "w+"

.text
.global main
.macro CREATE_FILE ; lea name(%rip), %rdi ; lea mode(%rip), %rsi ; call fopen ; mov %rax, %rdi ; .endm
.macro WRITE_FILE ; lea prog(%rip), %rsi ; lea prog(%rip), %rdx ; mov $10, %rcx ; mov $34, %r8 ; call fprintf ; .endm
.macro FT ; main: ; CREATE_FILE ; push %rdi ; WRITE_FILE ; pop %rdi ; call fclose ; .endm

# Regarde maman, sans le main !
FT
