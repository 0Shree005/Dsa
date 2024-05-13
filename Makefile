# Variable declarations
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = program

SRCS = main.c Binary_Search/binarySearch.c

# Build Rules
$(TARGET) : $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)
