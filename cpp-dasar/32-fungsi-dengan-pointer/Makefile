all: build build/out

build:
	@if [ ! -d "build" ]; then \
		echo "Creating build directory..."; \
		mkdir build; \
	else \
		echo "build directory already exists."; \
	fi

build/out:
	@echo "Compiling main.cpp..."
	@g++ -o build/out main.cpp

clean:
	@echo "Cleaning build artifact..."
	@rm -rf build

run:
	@./build/out