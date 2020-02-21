helloworld:helloworld.o program.o
	clang++ -o helloworld helloworld.o program.o
helloworld.o:main.cpp program.h
	clang++ -c -o helloworld.o main.cpp
program.o:program.cpp program.h
	clang++ -c -o program.o program.cpp

