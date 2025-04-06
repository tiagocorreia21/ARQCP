# int exists(int* ptr, int num, int x);
# ptr -> %rdi
# num -> %rsi
# x ->  %rdx

.section .text
 .global exists

exists:
    movl $0, %eax    
    movl $0, %ecx             # count

ciclo: 
 
    cmpl $0, %esi             # num == 0 ???
    je end
 
    cmpq %rdx, (%rdi)         # -> %rdi == x ???
    je inc_count

    cmpl $2, %ecx             # count == 2 ???
    je duplicate_found

    addq $4, %rdi             # ptr++

    decl %esi                 # num--

    jmp ciclo

inc_count:

    incl %ecx                 # count++

    addq $4, %rdi             # ptr++

    decl %esi                 # num--

    jmp ciclo

duplicate_found:

    movl $1, %eax
    ret

end:
    ret
