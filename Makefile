CC=gcc
OBJ = fixUserID.o

%.o: %.c
	$(CC) -c -o $@ $<

fixUserID: $(OBJ)
	gcc -o $@ $^
