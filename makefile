CXX = g++

SRC = ./src
BIN = ./bin
INCLUDE = ./include
BUILD = ./build
CXXFLAGS = -g -Wall -I./include/
SHELL = /bin/sh
.SUFFIXES: .cpp .o

TARGET = agutrot

default: main

fastlane.o:
	$(CXX) $(CXXFLAGS) -c $(INCLUDE)/fastlane.cpp -o $(BUILD)/fastlane.o
logging.o:
	$(CXX) $(CXXFLAGS) -c $(INCLUDE)/logging/logging.cpp -o $(BUILD)/logging.o
main.o: logging.o
	$(CXX) $(CXXFLAGS) -c $(SRC)/main.cpp -o $(BUILD)/main.o
main: main.o logging.o fastlane.o
	$(CXX) $(CXXFLAGS) -lglfw3 -o $(BIN)/$(TARGET) $(BUILD)/main.o $(BUILD)/logging.o