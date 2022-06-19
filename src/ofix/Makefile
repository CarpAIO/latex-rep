#CC=clang
CC=cc
#CFLAGS=-c -Wall -g -O1
CFLAGS=-c -Wall

SRC_DIR=.
LIB_DIR=../../lib
INC_DIR=../../include
SRCS=$(shell find $(SRC_DIR) -type f -name "*.c" -print)
HEADERS=$(shell find $(SRC_DIR) -type f -name "*.h" \! -name private.h -print)
OBJS=$(SRCS:.c=.o)
TARGET=$(LIB_DIR)/libofix.a

all: $(LIB_DIR) $(INC_DIR) $(TARGET)
	rsync -tupRE $(HEADERS) $(INC_DIR)/ofix

clean:
	$(RM) $(OBJS)
	$(RM) $(TARGET)

$(LIB_DIR):
	mkdir -p $@

$(INC_DIR):
	mkdir -p $@

$(TARGET): $(OBJS)
	ar -rcs $@ $(OBJS)

%.o : %.c  $(HEADERS)
	$(CC) -O3 -I. -I$(INC_DIR) $(CFLAGS) -o $@ $<
