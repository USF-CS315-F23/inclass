PROGS = call add4f arr
CALL_OBJS = call.o call_c.o call_s.o
ADD4F_OBJS = add4f.o add4f_c.o add4f_s.o	
ARR_OBJS = arr.o arr_c.o arr_s.o


%.o: %.s
	as -g -o $@ $<

%.o: %.c
	gcc -c -g -o $@ $<

all: $(PROGS)

call: $(CALL_OBJS)
	gcc -g -o $@ $^

add4f: $(ADD4F_OBJS)
	gcc -g -o $@ $^

arr: $(ARR_OBJS)
	gcc -g -o $@ $^
	
clean:
	rm -rf $(PROGS) $(CALL_OBJS) $(ADD4F_OBJ) $(ARR_OBJS)
