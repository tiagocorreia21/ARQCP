.section .data
 .global num1
 .global num2

.section .text
 .global subtract

subtract:

    movl num1(%rip), %eax

    movl num2(%rip), %edi

    subl %edi, %eax

    ret
