# Target to compile the C++ program
soal_12 : soal_12.o
	g++ soal_12.o -o soal_12

# Target to compile the object file
soal_12.o : soal_12.cpp
	g++ -c soal_12.cpp -o soal_12.o

# Target to run the program
run : soal_12
	./soal_12

# Target to clean up compiled files
clean :
	rm -f soal_12.o soal_12
