/** \author Allann Jones */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

short is_prime(long long number) {
    long long number_current = 2;

    while (number_current < number) {
        if (number % number_current == 0) {
            return 0;
        }

        number_current++;
    }

    return 1;
}

short is_perfect(long long prime_number) {
    long long number = pow(2, prime_number - 1) * (pow(2, prime_number) - 1);

    if (is_prime(number)) {
        return 1;
    }

    return 0;
}

long long get_perfect_number_from_prime(prime_number) {
    return pow(2, prime_number - 1) * (pow(2, prime_number) - 1);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 0;
    }

    long long argument = atol(argv[1]);

    printf("Number: %lld\n\n", argument);

    for (long long i = 2; i < argument; i++) {
        long long mercene = pow(2, i) - 1;
        if (is_prime(mercene)) {
            printf("mercene prime from %lld is %lld\n", i, mercene);

            long long perfect_number = get_perfect_number_from_prime(i);

            printf("perfect number of prime %lld is %lld\n", i, perfect_number);

            printf("\n");
        }
    }

    return 0;
}
