CC=gcc

CFLAGS= -Wall
CFLAGS_DEBUG= -Wall -Wextra -g
LDFLAGS = -lraylib

TARGET=kaiser
TARGET_DEBUG=kaiser-dbg

SRCS= main.c draw.c update.c init.c
OBJS= main.o draw.o update.o init.o

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
