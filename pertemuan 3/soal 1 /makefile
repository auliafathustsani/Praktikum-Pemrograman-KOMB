# Target to compile the C++ program
code1 : code1.o
	g ++ code1.o -o code1

# Target to compile the object file
code1.o : code1.cpp
	g ++ -c code1.cpp -o code1.o

# Target to run the program
run : code1
	./code1

# Target to clean up compiled files
clean :
	rm -f code1.o code1
