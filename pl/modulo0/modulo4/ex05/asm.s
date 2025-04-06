# long inc_and_cube(short *vi, int v2);
# v1 -> %rdi
# v2 -> %rsi

.section .text
 .global inc_and_cube

inc_and_cube:

    incw (%rdi)           # *v1 + 1

    movslq %esi, %rsi     # convert v2 to 64 bits

    movq %rsi, %rax       # place multiplier

    imulq %rsi            # v2 * v2
  
    imulq %rsi            # v2 * v2 * v2

    ret
