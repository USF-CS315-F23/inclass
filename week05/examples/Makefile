PROGS = endian hello_s twos strlen strcpy bits

ENDIAN_OBJS = endian.o
HELLOS_OBJS = hello_s.o
TWOS_OBJS   = twos.o
STRLEN_OBJS = strlen.o strlen_c.o strlen_s.o
STRCPY_OBJS = strcpy.o strcpy_c.o strcpy_s.o
BITS_OBJS   = bits.o

OBJS = $(ENDIAN_OBJS) $(HELLOS_OBJS) $(TWOS_OBJS) \
       $(STRLEN_OBJS) $(STRCPY_OBJS) $(BITS_OBJS)

%.o: %.s
	as -g -o $@ $<

%.o: %.c
	gcc -c -g -o $@ $<

all: $(PROGS)

endian: $(ENDIAN_OBJS)
	gcc -g -o $@ $^

hello_s: $(HELLOS_OBJS)
	gcc -g -o $@ $^

twos: $(TWOS_OBJS)
	gcc -g -o $@ $^

strlen: $(STRLEN_OBJS)
	gcc -g -o $@ $^

strcpy: $(STRCPY_OBJS)
	gcc -g -o $@ $^

bits: $(BITS_OBJS)
	gcc -g -o $@ $^

clean:
	rm -rf $(PROGS) $(OBJS)
