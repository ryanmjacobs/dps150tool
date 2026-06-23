CC      ?= gcc
CFLAGS  ?= -Wall -Wextra -O2 -pthread
LDFLAGS ?=
TARGET   = dps150tool
SRCS     = dps150tool.c
OBJS     = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): usage.h $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJS) -lpthread

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
