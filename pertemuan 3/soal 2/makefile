all: code2

code2: code2.cpp
	g++ -o code2 code.cpp

dump: code2
	objdump -d code2 > code2.asm

clean: 
	rm -f code2 code2.asm

run: code2
	./code2
