CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = .
BUILD_DIR = ../build
CLANG_FORMAT = clang-format
CLANG_FORMAT_FILE = ../materials/linters/.clang-format

FORMAT_SRCS = $(wildcard $(SRC_DIR)/*.c $(SRC_DIR)/*.h $(SRC_DIR)/*/*.c $(SRC_DIR)/*/*.h)
SRCS = $(wildcard $(SRC_DIR)/*.c) $(wildcard $(SRC_DIR)/*/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRCS))
TARGET = $(BUILD_DIR)/algorithms

OBJ_DIRS = $(sort $(dir $(OBJS)))

all: format $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIRS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIRS):
	mkdir -p $@

clean:
	@rm -rf $(BUILD_DIR)/*

run:
	@$(TARGET)

format:
	@$(CLANG_FORMAT) -i --style=file:$(CLANG_FORMAT_FILE) $(FORMAT_SRCS)

check-format:
	@$(CLANG_FORMAT) --dry-run --Werror --style=file:$(CLANG_FORMAT_FILE) $(FORMAT_SRCS)

.PHONY: all clean run format check-format