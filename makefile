programmingproj2: main.o register.o
	g++ -o programmingproj2 main.o register.o -g
main.o: main.cpp register.h
	g++ -c main.cpp -g
register.o: register.cpp register.h
	g++ -c register.cpp -g
clean:
	rm *.o programmingproj2
