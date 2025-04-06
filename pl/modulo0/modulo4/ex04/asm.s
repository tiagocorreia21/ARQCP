# int sum_sub(int num1, int num2, int *ptrsub)
# num1 -> %rdi
# num2 -> %rsi
# ptrsub -> %rdx

.section .text
 .global sum_sub

sum_sub:

    movl %edi, %eax         # result = num1

    addl %esi, %eax         # result + num2

    movl %edi, %ecx         # sub

    subl %esi, %ecx         # num1 - num2

    movl %ecx, (%rdx)       # *(ptrsub) = sub

    ret
