.section .data
 .global op3, op4
 .global op1
 .global op2
op3: .quad 3
op4: .quad 4

.section .text
 .global yet_another_sum      # long yet_another_sum()

yet_another_sum:

    movzwq op1(%rip), %rdi      # place op1 in %edi

    movzwq op2(%rip), %rcx      # put the value of op2 in %ecx

    movq op3(%rip), %rdx      # put the value of op3 in %edx

    movq op4(%rip), %rax      # put the value of op4 in %esi

    addq %rdx, %rax           # op4 + op3

    subq %rcx, %rax           # result - op2

    subq %rcx, %rax           # result - op2

    addq %rdi, %rax           # result + op1

    subq %rsi, %rax           # result - op4

    ret
