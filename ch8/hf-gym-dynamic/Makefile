.DEFAULT_GOAL := elliptical
hfcal.o : hfcal.c
	gcc -c hfcal.c -I./include -fPIC -o hfcal.o

elliptical.o : elliptical.c
	gcc -c elliptical.c -I include -o elliptical.o

libhfcal.dylib : hfcal.o
	# ar -rcs libs/libhfcal.a hfcal.o
	# gcc -dynamiclib hfcal.o -o libs/libhfcal.dylib
	gcc -shared hfcal.o -o libs/libhfcal.dylib

elliptical : elliptical.o libhfcal.dylib
	gcc elliptical.o -Llibs -lhfcal -o elliptical

clean:
	find . -not -type d -perm +0100 -delete
	-rm *.o libs/*
