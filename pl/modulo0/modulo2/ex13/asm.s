.section .data
 .global length1
 .global length2
 .global height

.section .text
 .global getArea                   # int getArea()

getArea:

    movzwl length1(%rip), %eax     # dividendo

    movzwl length2(%rip), %ecx

    movzwl height(%rip), %edi      

    addl %ecx, %eax               # length1 + length2

    mull %edi                     # eax/edi ((length1 + length2) * height)

    movl $2, %ecx                 # put divisor in ecx

    divl %ecx                     # %rax / 2

    ret
