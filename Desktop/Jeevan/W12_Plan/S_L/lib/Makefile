libdisplay.so: shared_file.o
	mkdir -p so_files
	mv libdisplay.so ./so_files/
shared_file.o: libdisplay.so
		gcc -shared -o libdisplay.so S1.c S2.c S3.c S4.c
		file libdisplay.so
clean: 
	-rm -f *.o
	rm  -f libdisplay.so
	rm -f -r so_files

