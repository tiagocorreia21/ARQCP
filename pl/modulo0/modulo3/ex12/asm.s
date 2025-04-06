# unsigned char vec_zero(int* ptr, int num);
# ptr -> %rdi
# num -> %rsi

.section .text
 .global vec_zero

vec_zero:
 
    movb $0, %al         # count

ciclo:

    cmpl $0, %esi        # num == 0 ???
    je end

    cmpl $50, (%rdi)     # -> %rdi == 0 ???
    jge found

    addq $4, %rdi        # ptr++

    decl %esi            # num--

    jmp ciclo

found:

    movl $0, (%rdi)      # -> %rdi == 0

    addq $4, %rdi        # ptr++

    decl %esi            # num--

    addb $1, %al         # count++

    jmp ciclo

end:
    ret
