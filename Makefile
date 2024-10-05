CC = gcc
CXX = g++
CFLAGS = -Wall -Wextra -std=c11
CXXFLAGS = -Wall -Wextra -std=c++11
TARGET = program

INC = -I./include

C_SRCS = $(shell find . -name '*.c')
CPP_SRCS = $(shell find . -name '*.cpp')
VALG = $(shell find . -name 'vgcore.*')

C_OBJS = $(C_SRCS:.c=.o)
CPP_OBJS = $(CPP_SRCS:.cpp=.o)

$(TARGET): $(C_OBJS) $(CPP_OBJS)
	$(CXX) $(INC) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(TARGET) $(C_OBJS) $(CPP_OBJS) $(VALG)

%.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@
