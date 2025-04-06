.section .data
 .global s1
 .global s2

.section .text
 .global crossSubBytes    # short crossSubBytes()

crossSubBytes:

    movl s1(%rip), %ecx   # put the value of s1 in %ecx

    movl s2(%rip), %edx   # put the value of s2 in %edx

    movb %ch, %ah         # put the most significant 8 bits in %ah

    subb %dl, %ah         # (ah = ah - dl)

    movb %cl, %al         # put the least significant 8 bits in %al

    subb %dh, %al         # (al = al - ch)

    ret
