.section .data
 .global A
 .global B

.section .text
 .global isMultiple

isMultiple:

    movzwl B(%rip), %edi     # put the value of b in %rdi

    test %edi, %edi
    je not_multiple

    movzwl A(%rip), %eax     # colocar o dividendo no %rax

    movl $0, %edx

    divl %edi                # %rax / %rdi 

    cmp $0, %edx             # verifica se o resto da divisão é 0
    je ifMultipleTrue        # salta para ifMultipleTrue caso o %rdx = 0

    ret

ifMultipleTrue: 

    movq $1, %rax           # se o resto == 0, 1 é colocado no %rax
    ret

not_multiple:
    
    movl $0, %eax
    ret
