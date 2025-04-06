# int set_bit(long *ptr, char pos)
# ptr -> %rdi
# pos -> %rsi

.section .text
 .global set_bit

set_bit:

    movb %sil, %cl

    movq (%rdi), %rcx

    sarq %cl, %rcx

    cmpq $0, (%rdi)
    je place_one

    movl $0, %eax
    
    ret

place_one:

    movq $1, (%rdi)

    movl $1, %eax

    ret
