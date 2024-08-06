all: build build/out

build:
	@if [ ! -d "build" ]; \
	then \
		mkdir build; \
	fi

build/out:
	@g++ -std=c++11 -o build/out main.cpp

clean:
	@rm -rf build

run: clean all
	@./build/out