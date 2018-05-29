RM = rm -rf

CC=g++

INC1=./include/Programa-1
INC2=./include/Programa-2
INC3=./include/Programa-3
SRC=./src
OBJ=./build
BIN=./bin
DOC=./doc

CPPFLAGS = -Wall -pedantic -std=c++11

.PHONY: all clean

all: dir Programa-1 Programa-2 Programa-3

debug: CPPFLAGS += -g -O0
debug: dir Programa1 Programa2 Programa3

Programa-1: $(OBJ)/main1.o
	@echo "-------------------------------"
	@echo "Compilando Programa 1"
	$(CC) $(CPPFLAGS) -o $(BIN)/$@ $^
	@echo "Binario criado em ./bin/Programa-1"

$(OBJ)/main1.o: $(SRC)/Programa-1/main1.cpp
	@$(CC) -c $(CPPFLAGS) -I$(INC1) -o $@ $<

Programa-2: $(OBJ)/main2.o
	@echo "-------------------------------"
	@echo "Compilando Programa 2"
	$(CC) $(CPPFLAGS) -o $(BIN)/$@ $^
	@echo "Binario criado em ./bin/Programa-2"

$(OBJ)/main2.o: $(SRC)/Programa-2/main2.cpp
	@$(CC) -c $(CPPFLAGS) -I$(INC2) -o $@ $<

Programa-3: $(OBJ)/main3.o
	@echo "-------------------------------"
	@echo "Compilando Programa 3"
	$(CC) $(CPPFLAGS) -o $(BIN)/showprimos $^
	@echo "Binario criado em ./bin/showprimos"

$(OBJ)/main3.o: $(SRC)/Programa-3/main3.cpp
	@$(CC) -c $(CPPFLAGS) -I$(INC3) -o $@ $<

dir:
	mkdir -p bin build

clean:
	$(RM) $(BIN)/* $(OBJ)/* *.o *.out
