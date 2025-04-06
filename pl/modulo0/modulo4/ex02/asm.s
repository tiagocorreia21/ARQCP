# long sum2_n(int n)
# n -> %rdi

.section .text
 .global sum2_n

sum2_n:

    movq $0, %rsi           # sum

    movslq %edi, %rdi       # convert to 64 bits

ciclo:

    cmpq $0, %rdi           # n == 0 ???
    jle zero

    cmpq $1, %rdi           # n == 1 ???
    je power
    
    addq %rdi, %rsi         # sum += n

    decq %rdi               # n--

    jmp ciclo

power:

    addq $1, %rsi          # sum++ -> last power

    movq %rsi, %rax        # place multiplier

    imulq %rsi             # sum * sum
    
    ret

zero:

    movl $0, %eax         # 0 - failure

    ret
