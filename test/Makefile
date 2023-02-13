#CC=clang
CC=cc
#CFLAGS=-c -Wall -g -O1
CFLAGS=-c -Wall

SRC_DIR=.
LIB_DIR=../lib
INC_DIR=../include
SRCS=$(shell find $(SRC_DIR) -type f -name "*.c" -print)
HEADERS=$(shell find $(SRC_DIR) -type f -name "*.h" -print)
LIBS=-lfixspec -lofix
OBJS=$(SRCS:.c=.o)
TARGET=run_tests

all: $(TARGET)

clean:
	$(RM) $(OBJS)
	$(RM) $(TARGET)
	$(RM) -rf server_storage
	$(RM) -rf client_storage

$(LIB_DIR):
	mkdir -p $@

$(INC_DIR):
	mkdir -p $@

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS) -L$(LIB_DIR) $(LIBS)

%.o : %.c  $(HEADERS)
	$(CC) -O3 -I. -I$(INC_DIR) $(CFLAGS) -o $@ $<

test: $(TARGET)
	$(TARGET)
