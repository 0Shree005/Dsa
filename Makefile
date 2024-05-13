# Variable declarations
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = program

SRCS = main.c Searching/Binary_Search/binarySearch.c Sorting/Merge_Sort/mergeSort.c

# Build Rules
$(TARGET) : $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)
