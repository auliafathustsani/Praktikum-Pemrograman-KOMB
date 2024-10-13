# Target to compile the C++ program
ReverseArray: ReverseArray.o
    g++ ReverseArray.o -o ReverseArray

# Target to compile the object file
ReverseArray.o: ReverseArray.cpp
    g++ -c ReverseArray.cpp -o ReverseArray.o

# Target to run the program
run: ReverseArray
    ./ReverseArray

# Target to clean up compiled files
clean :
    rm -f ReverseArray.o ReverseArray
