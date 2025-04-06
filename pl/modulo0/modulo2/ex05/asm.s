.section .data
 .global s1

.section .text
 .global swapBytes                  # short swapBytes()

swapBytes:

    movl s1(%rip), %ecx            # put the value of s1 in %eax

    movb %cl, %ah                  # put the last 8 bits in %ah

    movb %ch, %al                  # put the first 8 bits in %al

    ret
