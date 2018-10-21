CC          = gcc
CFLAGS      = -g
RM          = rm -rf
LDFLAGS     = -dynamiclib
TARGET      = libhello.dylib
SOURCES     = $(wildcard *.c)
HEADERS     = $(wildcard *.h)
OBJECTS     = $(SOURCES:.c=.o)

default: all
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJECTS)
	mkdir out
	mv *.o ./out/
	mkdir release
	mv $(TARGET) ./release/
	cp hello.h ./release/

clean:
	$(RM) ./release
	$(RM) ./out
