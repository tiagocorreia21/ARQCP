# int* vec_search(int* ptr, int num, int x);
# ptr -> %rdi
# num -> %rsi
# x -> %rdx

.section .text
 .global vec_search

vec_search:

    cmp $0, %rsi              # (%rdi) == 0 ???
    je end

    cmpl %edx, (%rdi)          # (%rdi) == x ???
    je x_found

    addq $4, %rdi             # ptr++

    decq %rsi                 # num--

    jmp vec_search

x_found:
    movq %rdi, %rax           # %rax = &rdi
    ret

end:
    movl $0, %eax            # x not found -> %eax = 0 
    ret
