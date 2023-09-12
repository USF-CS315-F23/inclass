PROGS = call
CALL_OBJS = call.o call_c.o call_s.o

%.o: %.s
	as -g -o $@ $<

%.o: %.c
	gcc -c -g -o $@ $<

all: $(PROGS)

call: $(CALL_OBJS)
	gcc -g -o $@ $^


clean:
	rm -rf $(PROGS) $(CALL_OBJS)
