CC      = gcc
CFLAGS  = -c
OFLAGS  = -o

som.o : som.c
	$(CC) $(CFLAGS) som.c

prod.o: prod.c
	$(CC) $(CFLAGS) prod.c

prog : ppal.c som.o prod.o
	$(CC) $(OFLAGS) prog ppal.c som.o prod.o