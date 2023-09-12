.global sumarr_s

# a[] - a0
# len - a1
# sum - t0
# i   - t1

sumarr_array_s:
    li t0, 0            # sum = 0
    li t1, 0            # i = 0

array_loop:
    bge t1, a1, array_done    # i >= len?
    li t2, 4
    mul t3, t2, t1      # t3 = (i * 4)
    add t3, a0, t3      # t3 = arr + t3
    lw t3, (t3)         # t3 = arr[i]
    add t0, t0, t3      # sum = sum + t3
    addi t1, t1, 1
    j array_loop
array_done:
    mv a0, t0
    ret

# a[] - a0
# len - a1
# sum - t0
# i   - t1

sumarr_s:
    li t0, 0            # sum = 0
    li t1, 0            # i = 0

ptr_loop:
    bge t1, a1, ptr_done    # i >= len?
    lw t3, (a0)         # t3 = *a0
    add t0, t0, t3      # sum = sum + t3
    addi a0, a0, 4      # a0 = a0 + 4
    addi t1, t1, 1      # i = i + 1
    j ptr_loop
ptr_done:
    mv a0, t0
    ret
