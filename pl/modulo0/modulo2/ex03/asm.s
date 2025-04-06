.section .data
 .global CONST
 .global op1
 .global op2
 CONST: .quad 20

.section .text
 .global another_sum                      # long another_sum()

another_sum:

    movzwq op1(%rip), %rdi          # put op1 in %ecx

    movzwq op2(%rip), %rdx          # put op2 int %edx

    movzwq CONST(%rip), %rsi        # out CONST in %eax

    subq %rdi, %rsi

    movq %rsi, %rax

    movq CONST(%rip), %rsi

    subq %rdx, %rsi

    addq %rsi, %rax

    movq CONST(%rip), %esi

    addq %rsi, %rax        

    ret
