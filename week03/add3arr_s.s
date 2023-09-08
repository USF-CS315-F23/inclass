.global add3arr_s

# a0 - int arr[] (address)

# t0 - int sum

add3arr_s:
    lw t0, (a0)
    addi a0, a0, 4
    lw t1, (a0)
    add t0, t0, t1
    addi a0, a0, 4
    lw t1, (a0)
    add t0, t0, t1
    mv a0, t0
    ret
