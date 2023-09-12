.global min_s

# min_s returns the smaller of a0 and a1 

# a0 - int a
# a1 - int b

min_s:
    bge a0, a1, else
    # mv a0, a0 (not needed)
    j done
else:
    mv a0, a1
done:
    ret
