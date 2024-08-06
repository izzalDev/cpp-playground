all: build build/out

build:
	@if [ ! -d "build" ]; \
	then \
		mkdir "build"; \
	fi

build/out:
	@g++ -o build/out main.cpp

clean:
	@rm -rf build

run: clean all
	@./build/out