all: create_dirs build/divisors

build/divisors: build/divisors.o

build/divisors.o: divisors.c

create_dirs:
	mkdir -p build

clean:
	rm -f build/divisors build/*.o

