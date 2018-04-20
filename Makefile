# Project: EasyWord

CPP      = g++
CC       = gcc
WINDRES  = 
OBJ      = main.o Data.o EasyWord.o functions.o SearchStrategyImpl.o TestStrategyImpl.o UserInterface.o WordMap.o ConsoleObj.o
LINKOBJ  = main.o Data.o EasyWord.o functions.o SearchStrategyImpl.o TestStrategyImpl.o UserInterface.o WordMap.o ConsoleObj.o
LIBS     = 
INCS     = 
CXXINCS  = 
BIN      = EasyWord
CXXFLAGS = 
CFLAGS   = 
RM       = rm -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o $(BIN) $(LIBS)

main.o: main.cpp
	$(CPP) -c main.cpp -o main.o $(CXXFLAGS)

Data.o: Data.cpp
	$(CPP) -c Data.cpp -o Data.o $(CXXFLAGS)

EasyWord.o: EasyWord.cpp
	$(CPP) -c EasyWord.cpp -o EasyWord.o $(CXXFLAGS)

functions.o: functions.cpp
	$(CPP) -c functions.cpp -o functions.o $(CXXFLAGS)

SearchStrategyImpl.o: SearchStrategyImpl.cpp
	$(CPP) -c SearchStrategyImpl.cpp -o SearchStrategyImpl.o $(CXXFLAGS)

TestStrategyImpl.o: TestStrategyImpl.cpp
	$(CPP) -c TestStrategyImpl.cpp -o TestStrategyImpl.o $(CXXFLAGS)

UserInterface.o: UserInterface.cpp
	$(CPP) -c UserInterface.cpp -o UserInterface.o $(CXXFLAGS)

WordMap.o: WordMap.cpp
	$(CPP) -c WordMap.cpp -o WordMap.o $(CXXFLAGS)

ConsoleObj.o: ConsoleObj.cpp
	$(CPP) -c ConsoleObj.cpp -o ConsoleObj.o $(CXXFLAGS)

