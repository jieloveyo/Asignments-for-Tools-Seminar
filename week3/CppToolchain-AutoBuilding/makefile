run : display1.o display2.o display3.o mesh.o
	g++ display1.o mesh.o -o display1  -lGL -lglut -lGLU -L./lib/ -lstest
	g++ display2.o mesh.o -o display2  -lGL -lglut -lGLU -L./lib/ -lstest
	g++ display3.o mesh.o -o display3  -lGL -lglut -lGLU -L./lib/ -lstest

mesh.o : mesh.cpp
	g++ -c -I include/ mesh.cpp -o mesh.o

display1.o display2.o display3.o : display.cpp
	g++ -w -c -D TEST3 -I include/ display.cpp -o display3.o
	g++ -w -c -D TEST2 -I include/ display.cpp -o display2.o
	g++ -w -c -D TEST1 -I include/ display.cpp -o display1.o
clean:
	rm *.o
	rm display1
	rm display2
	rm display3


