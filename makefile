COMPLIES = g++
FLAGS = -Wall -Werror -ansi -pedantic
PATHA = ./src/main.cpp
PATHB = ./bin/rshell

all:
	 mkdir -p ./bin
	 $(COMPLIES) $(FLAGS) $(PATHA) -o $(PATHB)

rshell:
	  mkdir -p ./bin
	  $(COMPLIES) $(FLAGS) $(PATHA) -o $(PATHB)

clean:
	  rm -rf ./bin	
