CC=gcc
OBJS= main.cc
TARGET = a.out

.SUFFIXES: .cpp .out .cc


all : main.cc
	$(CC) -o $@ -O3 $(OBJS) -I ../include/ -lstdc++ -lm

run : all
	./all

clean : all
	rm -rf all
