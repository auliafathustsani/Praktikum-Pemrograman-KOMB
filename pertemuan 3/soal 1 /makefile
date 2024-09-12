all: code1

code1: code1.cpp
	g++ -o code1 code1.cpp

dump: code1
	objdump -d code1 > code1.asm

clean: 
	rm -f code1 code1.asm

rum: code1
	./code1
