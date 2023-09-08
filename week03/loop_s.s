.global loop_s

# a0 - int n
#
# t0 - int i
# t1 - int sum

loop_s:
    li t0, 0
    li t1, 0

loop:
    bge t0, a0, done
    add t1, t1, t0
    addi t0, t0, 1
    j loop
done:
    mv a0, t1
    ret
