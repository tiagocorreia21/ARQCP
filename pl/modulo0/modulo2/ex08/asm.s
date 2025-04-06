.section .data
 .global s1, s2
s1: .short 1
s2: .short 2

.section .text
 .global crossSubBytes    # short crossSubBytes()

crossSubBytes:

    lea s1(%rip), %rcx

    lea s2(%rip), %rdx

    movw (%rcx), %cx

    movw (%rdx), %dx

    movb %ch, %ah

    subb %dl, %ah

    movb %cl, %al

    subb %dh, %al

    ret
