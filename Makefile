CC=gcc
CFLAGS=-Wall -g

main: main.o bibfis.o nave.o projetil.o planeta.o xwc.o
	${CC} ${CFLAGS} -o main $^ -lm -lX11 -lXpm

bibfis.o: bibfis.c
nave.o: nave.c
projetil.o: projetil.c
planeta.o: planeta.c
xwc.o: xwc.c

clean:
	rm *.o
	rm main
