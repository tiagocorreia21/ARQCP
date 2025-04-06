.section .data
 .global A
 .global B
 .global C
 .global D

.section .text
 .global sum_and_subtract    # long sum_and_subtract()

sum_and_subtract:

    movzwq A(%rip), %rcx      # %ecx = a

    movzwq B(%rip), %rdx      # %edx = b

    movzwq C(%rip), %rax      # %eax = c

    movzwq D(%rip), %rdi      # %edi = d

    subq %rcx, %rax           # %eax -= %ecx (C - A)

    addq %rdi, %rax         # %eax += %edi (C - A + D)

    subq %rdx, %rax         # %eax -= %edx (C - A + D - B)

    ret
