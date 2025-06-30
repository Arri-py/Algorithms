CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = src
BUILD_DIR = ../build

SRCS = $(wildcard $(SRC_DIR)/*.c) $(wildcard $(SRC_DIR)/*/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRCS))
TARGET = $(BUILD_DIR)/al

OBJ_DIRS = $(sort $(dir $(OBJS)))

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIRS)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIRS):
	mkdir -p $@

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean