.section .data
 .global num

.section .text
 .global check_num

check_num:

    movl num(%rip), %edi

    

