.section .data
 .global op1
 .global op2
 .global op3

.section .text
 .global sum3ints

sum3ints:

    movslq op1(%rip), %rax

    movslq op2(%rip), %rcx

    movslq op3(%rip), %rdx

    addq %rcx, %rax           # op1 + op2

    addq %rdx, %rax           # op1 + op2 + op3

    ret
