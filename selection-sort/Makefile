CC := g++
CFLAGS := -Wall -std=c++11
TARGET := main
SRC_DIR := src
OBJ_DIR := obj
BIN_DIR := bin

SOURCES := $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SOURCES))

$(BIN_DIR)/$(TARGET): $(OBJECTS)
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

run: $(BIN_DIR)/$(TARGET)
	@./$(BIN_DIR)/$(TARGET)

clean:
	@rm -rf $(OBJ_DIR)/* $(BIN_DIR)/*

info:
	@echo "Sources : $(SOURCES)"
	@echo "Objects : $(OBJECTS)"
	@echo "Target : $(BIN_DIR)/$(TARGET)"

.PHONY: run clean info
