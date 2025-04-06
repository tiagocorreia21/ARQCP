# void array_sort(int* ptr, int num);
# ptr -> %rdi
# num -> %rsi

.section .text
 .global array_sort

array_sort:

    push %rbx
    movq $0, %rbx

outer_loop:

    movq $0, %rbx                   # trocas = 0
    movq $0, %rcx                   # i = 0
    movq %rsi, %rax                 # %rax = num

    subq $1, %rax                   # loop limit

inner_loop:
    
    cmp %rax, %rcx                  # i < n -1 ???
    jge check_trocas                # se i >= n -1, out of the inner loop

    movl (%rdi, %rcx, 4), %edx      # %edx = vec[i] 
    movl (%rdi, %rcx, 4), %eax      # %eax = vec[i + 1]

    cmp %eax, %edx                  # vec[i] == vec[i + 1]
    jge no_swap                     # if vec[i] >= vec[i + 1], no swap

    # swap elements
    movl %eax, (%rdi, %rcx, 4)      # vec[i] = vec[i + 1]
    movl %edx, (%rdi, %rcx, 4)      # vec[i + 1] = aux (original vec[i])

    movq $1, %rbx                   # trocas = 1
    
no_swap:
    incq %rcx
    jmp inner_loop

check_trocas:
    testq %rbx, %rbx                # trocas == 0 ???
    jnz outer_loop
    popq %rbx
    ret
