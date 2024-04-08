.DEFAULT_GOAL := elliptical
hfcal.o : hfcal.c
	gcc -c hfcal.c -I./include -o hfcal.o

elliptical.o : elliptical.c
	gcc -c elliptical.c -I include -o elliptical.o

libhfcal.a : hfcal.o
	ar -rcs libs/libhfcal.a hfcal.o

elliptical : elliptical.o libhfcal.a
	gcc elliptical.o -Llibs -lhfcal -o elliptical

clean:
	find . -not -type d -perm +0100 -delete
	rm *.o libs/*.a 
