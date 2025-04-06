.section .data
 .global length1, length2, height
length1: .int 2
length2: .int 2
height: .int 4

.section .text
 .global getArea                  # int getArea()

getArea:

    movzwl length1(%rip), %eax          # dividendo

    movzwl length2(%rip), %ecx

    movzwl height(%rip), %edi      

    addl %ecx, %eax               # length1 + length2

    mull %edi                     # eax/edi ((length1 + length2) * height)

    movl $2, %ecx                 # put divisor in ecx

    divl %ecx                     # %rax / 2

    ret
