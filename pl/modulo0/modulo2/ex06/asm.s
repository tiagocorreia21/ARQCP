.section .data
 .global op1
 .global op2

.section .text
 .global exchangeBytes      # short exchangeBytes()

exchangeBytes:

    movl op1(%rip), %ecx     # ecx = op1

    movl op2(%rip), %edx     # edx = op2 

    movb %cl, %ah            # copies the least significant 8 bits to result

    addb %ah, %ah            # doble de value of the most significant bits

    movb %dh, %al            # copies the most significant 8 bits to result
 
    ret
