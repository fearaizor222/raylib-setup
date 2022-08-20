output: main.o
	g++ main.o -o output -I ./include/ -L ./lib/ -lraylib -lopengl32 -lgdi32 -lwinmm
	
main.o: main.cpp
	g++ -c main.cpp

clean:
	del /s *.o output.exe
