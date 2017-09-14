library_path=/home/jeev/Desktop/Jeevan/W12_Plan/S_L/lib/
so_file_path=/home/jeev/Desktop/Jeevan/W12_Plan/S_L/lib/so_files/
main: main.o
	gcc -L$(so_file_path) -Wall main.o -o main -ldisplay
main.o: Main.c
	gcc -I$(library_path) -Wall -c Main.c -o main.o -ldisplay
clean: 
	-rm -f *.o
	rm -f main


