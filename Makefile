all: create_dirs build/divisors build/perfect-number build/prime src/euler/java/EulerPanel.class

# Euler number
src/euler/java/EulerPanel.class:
	javac src/euler/java/EulerPanel.java
	javac src/euler/java/EulerApp.java

# Perfect numbers
build/perfect-number: build/perfect-number.o
	$(CC) $< -o $@
build/perfect-number.o: src/perfect-number/perfect-number.c
	$(CC) -c $< -o $@

# Divisors
build/divisors: build/divisors.o
	$(CC) $< -o $@
build/divisors.o: src/divisors-c/divisors.c
	$(CC) -c $< -o $@

# Prime
build/prime: build/prime.o
	$(CC) $< -o $@
build/prime.o: src/prime-c/prime.c
	$(CC) -c $< -o $@

create_dirs:
	mkdir -p build

clean:
	rm -f build/*
	rm -f src/euler/java/*.class

