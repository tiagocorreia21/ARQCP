.section .data
 .global A
 .global B
 .global C
 .global D

.section .text
 .global compute     # int compute()

compute:

    movl A(%rip), %eax

    movl B(%rip), %ecx

    movl C(%rip), %esi

    movl D(%rip), %edi      # divisor

    cmpl $0, %ecx
    je end

    movl $0, %edx

    mul %ecx                # A * B

    movl %eax, %r8d         # store de result of the 1º multiplication

    movl A(%rip), %eax      # restaurar o valor de A

    mul %esi                # A * C

    subl %r8d, %eax         # ((A * B) - C * A))

    div %edi                # ((A * B) - C * A)) / D

    ret

end: 
    movl $0, %eax
    ret
