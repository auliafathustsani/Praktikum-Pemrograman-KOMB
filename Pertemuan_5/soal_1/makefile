# Target to compile the C++ program
fizzbuzz: fizzbuzz.o
    g++ fizzbuzz.o -o fizzbuzz

# Target to compile the object file
fizzbUzz.o: fizzbuzz.cpp
    g++ -c fizzbuzz.cpp -o fizzbuzz.o

# Target to run the program
run: fizzbuzz
    ./fizzbuzz

# Target to clean up compiled files
clean :
    rm -f fizzbuzz.o fizzbuzz
