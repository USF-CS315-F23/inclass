.global arr_get_s
.global arr_set_s

# a0 - int arr[]
# a1 - int i

arr_get_s:
    li t0, 4
    mul t1, a1, t0   # t1 = i * 4
    add t1, a0, t1   # t1 = a0 + (i * 4)
    lw a0, (t1)
    ret

# a0 - int arr[]
# a1 - int i
# a2 - int v

arr_set_s:
    li t0, 4
    mul t1, a1, t0   # t1 = i * 4
    add t1, a0, t1   # t1 = a0 + (i * 4)
    sw a2, (t1)
    ret
