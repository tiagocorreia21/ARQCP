# int decrypt(char* ptr)
# ptr -> %rdi

.section .text
 .global decrypt

decrypt:
 
    movl $0, %eax         # count

ciclo:

    cmpb $0, (%rdi)
    je end

    cmpb $'a', (%rdi)      # == 'a' ???
    je next

    cmpb $' ', (%rdi)       # == '' ???
    je next

    subb $1, (%rdi)       # decrement value pointed to by %rdi

    addq $1, %rdi         # ptr++

    incl %eax             # count++

    jmp ciclo

next:

    addq $1, %rdi         # ptr++
    jmp ciclo

end:
    ret
