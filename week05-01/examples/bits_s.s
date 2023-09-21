.global and_s
.global or_s
.global not_s
.global sll_s

and_s:
    and a0, a0, a1
    ret

or_s:
    or a0, a0, a1
    ret

not_s:
    li t0, -1
    xor a0, a0, t0
    ret

sll_s:
    sll a0, a0, a1
    ret
 
