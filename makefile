CXX = g++

SRC = ./src
BIN = ./bin
INCLUDE = ./include
BUILD = ./build
CXXFLAGS = -g -Wall 
SHELL = /bin/sh
.SUFFIXES: .cpp .o

TARGET = agutrot

default: main

fastlane.o:
	$(CXX) $(CXXFLAGS) -c $(INCLUDE)/fastlane.cpp -o $(BUILD)/fastlane.o -I$(INCLUDE)
logging.o:
	$(CXX) $(CXXFLAGS) -c $(INCLUDE)/logging/logging.cpp -o $(BUILD)/logging.o -I$(INCLUDE)
main.o: logging.o
	$(CXX) $(CXXFLAGS) -c $(SRC)/main.cpp -o $(BUILD)/main.o -I$(INCLUDE)
main: main.o logging.o fastlane.o
	$(CXX) $(CXXFLAGS) -o $(BIN)/$(TARGET) $(BUILD)/main.o $(BUILD)/logging.o