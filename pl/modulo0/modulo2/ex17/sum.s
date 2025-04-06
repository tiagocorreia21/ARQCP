.section .data
 .global num1
 .global num2

.section .text
 .global add

sum:

    movl num1(%rip), %eax

    movl num2(%rip), %edi

    addl %edi, %eax

    ret
