# int vec_greater12(int* ptr, int num)
# ptr -> %rdi
# num -> %rsi
# eax -> contador

.section .text
 .global vec_greater12

vec_greater12:

    movl $0, %eax        # contador = 0

ciclo:

    cmpl $0, %esi       # num == 0
    jz end

    cmpl $12, (%rdi)    # > 12???

    jle next            # jumps if < 12

    incl %eax           # contador++

next:

    addq $4, %rdi       # ptr++
  
    decl %esi           # num--

    jmp ciclo

end:
    ret
