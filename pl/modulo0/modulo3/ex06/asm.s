# int encrypt(char* ptr)
# ptr -> %rdi

.section .text
 .global encrypt

encrypt:
    movl $0, %eax         # count

ciclo:
     
    cmpb $0, (%rdi)       # == '\0' ???
    je end

    cmpb $' ', (%rdi)     # == ' ' ???
    je space_char

    cmpb $'a', (%rdi)     # == 'a' ???
    je a_char

    addb $1, (%rdi)       # (> rdi)++

    addq $1, %rdi         # ptr++

    incl %eax             # count++

    jmp ciclo

space_char:

    addq $1, %rdi        # ptr++
    jmp ciclo

a_char:

    addq $1, %rdi        # ptr++
    jmp ciclo
end:
    ret
