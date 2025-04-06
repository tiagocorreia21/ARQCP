.section .data
 .global op1
 .global op2

.section .text
 .global verify_flags          # char verify_flags()

verify_flags:

    movw op1(%rip), %cx        # %ecx = op1

    movw op2(%rip), %dx        # %edx = op2

    addw %cx, %dx              # %edx += %ecx (op1 + op2) 

    jc end                     # jump if cf activates
    jo end                     # jump if of activates

    movl $0, %eax              # put 0 in return value

    ret

end:

    movl $1, %eax              # put 1 in return value

    ret
