all: build build/out

build:
	@if [ ! -d "build" ]; then \
		echo "Creating build directory..."; \
		mkdir build; \
	else \
		echo "Build directory already exists."; \
	fi

build/out: main.cpp
	@echo "Compiling main.cpp"
	@g++ -o build/out main.cpp

clean:
	@echo "Cleaning build artifacts..."
	@rm -rf build

run: build build/out
	@./build/out