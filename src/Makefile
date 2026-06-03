CC=gcc

CFLAGS= -Wall
CFLAGS_DEBUG= -Wall -Wextra -g
LDFLAGS = -lraylib

TARGET=kaiser
TARGET_DEBUG=kaiser-dbg

SRCS=kaiser.c main.c
OBJS=kaiser.o main.o

TARGET_DIR=releases

$(shell mkdir -p ../$(TARGET_DIR))

.PHONY: clean

all: $(TARGET)

$(TARGET):
	$(CC) $(CFLAGS) $(SRCS) -o ../releases/$(TARGET) $(LDFLAGS)

$(TARGET_DEBUG):
	$(CC) $(CFLAGS_DEBUG) $(SRCS) -o ../releases/$(TARGET_DEBUG) $(LDFLAGS)

clean:
	rm -f *.o ../releases/*
