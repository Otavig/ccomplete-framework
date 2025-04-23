# Identify the operating system being used
OS := $(shell uname -s)

# Defines the source files
SRC = \
    app/main.c \
    utils/searchs/searchbinary/sbint.c \
    utils/sorts/bubblesort/bisort.c \
    utils/sorts/quicksort/qisort.c \
    utils/sorts/swap.c \
    utils/display/forchar/dcfor.c \
    utils/display/forint/difor.c \
    utils/array/array.c \
    utils/array/dynamic/stack/istack.c \
    utils/sizelist/csize.c \
    utils/inputs/input_char/input_char.c \
    utils/inputs/input_int/input_int.c \
    utils/inputs/input_float/input_float.c \
    utils/typeof_input/typeof_input.c \
    utils/fgets_dynamic/fgets_dynamic.c

# Set the output binary name based on OS
ifeq ($(OS), Linux)
    OUTPUT = ./app/app
    RM = rm -f
    CLEAR = clear
else
    OUTPUT = .\app\app.exe
    RM = del /Q
    CLEAR = cls
endif

# Compiler setup
CC = gcc
CFLAGS = -Wall -Wextra -pedantic

# Default rule to build the output binary
all: $(OUTPUT)

# Rule to compile the binary from source files
$(OUTPUT): $(SRC)
	@echo "🔧 Compiling..."
	$(CC) $(SRC) $(CFLAGS) -o $(OUTPUT)
	@echo "✅ Compiled: $(OUTPUT)"

# Rule to run the compiled binary
run: $(OUTPUT)
	@echo "🚀 Running:"
	$(CLEAR) # Clears the console
	$(OUTPUT)

# Rule to clean the generated binary and other files
clean:
	@echo "🧹 Cleaning up binary..."
	$(RM) ./app/app ./app/app.exe
