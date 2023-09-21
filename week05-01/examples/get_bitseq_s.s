.global get_bitseq_s

# a0 - uint32_t num
# a1 - int start
# a2 - int end

# t0 - uint32_t val
# t1 - int len
# t3 - uint32_t mask

get_bitseq_s:

    sub t1, a2, a1    # t1 = a2 (end) - a1 (start)
    addi t1, t1, 1    # t1 (val) = t1 + 1
    srl t0, a0, a1

    li t5, 32
    bne t1, t5, else
    li t3, 0xFFFFFFFFF
    j done    
else:
    li t3, 1
    sll t3, t3, t1
    addi t3, t3, -1
done:
    and a0, t0, t3
    ret
    
    


