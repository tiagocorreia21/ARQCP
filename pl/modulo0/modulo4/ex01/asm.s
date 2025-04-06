# long d_square(int x)
# x -> %rdi

.section .text
 .global d_square

d_square:

    movslq %edi, %rdi      # extend 0

    movq %rdi, %rax        # place multiplier

    imulq %rdi             # power

    shlq $1, %rax          # left shift -> result * 2

    ret
