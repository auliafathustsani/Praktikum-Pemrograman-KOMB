# Target to compile the C++ program
reversearray: reversearray.o
    g++ reversearray.o -o reversearray

# Target to compile the object file
reversearray.o: reversearray.cpp
    g++ -c reversearray.cpp -o reversearray.o

# Target to run the program
run: reversearray
    ./reversearray

# Target to clean up compiled files
clean :
    rm -f reversearray.o reversearray
