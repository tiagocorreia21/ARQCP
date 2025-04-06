# int five_count (char* str)

.global five_count

five_count:

    # rdi = str
    # eax = count

    movl $0, %eax         # Inicialize eax with 0

ciclo: 

    cmpb $0, (%rdi)      # verifies if the char is null

    jz end               # if the char is null, finish 

    cmpb $'5', (%rdi)   # verifica se o apontado pelo rdi é '5'

    jne next            

    incl %eax           # se o apontado pelo rdi for 5, o count é incrementado

next: 

    incq %rdi           # incrementa o apontador da string

    jmp ciclo           

end:
    ret   
     