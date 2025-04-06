# int test_even(int x)
# x -> %rdi

.section .text
 .global test_even

test_even:

    movl $2, %ecx

    divl %ecx

    cmp $0, %rdx
    je even_num

    movl $0, %eax

    ret

even_num:

    movl $1, %eax
    ret
