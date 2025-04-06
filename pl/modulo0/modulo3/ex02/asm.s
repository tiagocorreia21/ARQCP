# void str_copy_roman(char* ptr1, char* ptr2)
# ptr1 -> %rdi
# ptr2 -> %rsi

.section .text
 .global str_copy_roman   

str_copy_roman: 
    movl $0, %eax

ciclo: 

    movl (%rdi), %ecx     # put the char of the first string in the other

    movl %ecx, (%rsi) 

    cmpb $'u', (%rsi)     # verifies if the char is 'u'

    je change_u_to_v      # jumps if char is equal to 'u'

    incq %rdi             # increments pointer ptr1 
    incq %rsi             # increments pointer ptr2

    cmpb $0, (%rdi)       # verifies if current char is null

    jz end                # if the char is null, finish

    jmp ciclo             # jumps to the beggining of the loop
    
change_u_to_v:

    movl $'v', (%rsi)     # changes the 'u' to an 'v'

    incq %rdi             # increments pointer ptr1
    incq %rsi             # increments pointer ptr2

    jmp ciclo             # jumps to the beggining of the loop

end:
    ret
