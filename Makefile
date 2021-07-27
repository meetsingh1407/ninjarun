CC=g++
CFLAGS=-I.
LFLAGS=-lglut -lGLU -lGL
TARGET=main

all: 
	$(CC) -o $(TARGET) $(TARGET).cpp $(LFLAGS)

run: 
	./$(TARGET)

clean:
	rm -f $(TARGET)
