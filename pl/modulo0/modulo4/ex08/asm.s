# int calc(int a, int *b, int c)
# a -> %edi
# b -> %esi
# c -> %edx

.section .text
 .global calc

calc:

    # prologue
    pushq %rbp            # save rbp
    movq %rsp, %rbp       # copy current stack pointer to %rbp

    subq $4, %rsp         # reserve 4 bytes for local variable

    sarl $2, %edi         # a * 2 * 2

    addl (%rsi), %edi     # z = (a * 4) + (*b)

    movl %edi, -4(%rbp)   # place result in stack (4 bytes)

    movslq %edx, %rdx

    subl $6, %edx         # c - 6

    movl -4(%rbp), %eax   # place multiplier

    imul %rdx             # z * (c-6)

    # epilogue
    movq %rbp, %rsp       # restore %rsp  
    popq %rbp             # restore %rbp

    ret
