#include <stdio.h>


long int power(long int base, long int exponent);


int main() {
    long int base, exponent, sonuc;

    printf("Test inputs: ");
    scanf("%ld %ld", &base, &exponent);



    sonuc = power(base, exponent);

    printf("Test output: %ld\n", sonuc);

    return 0;
}

long int power(long int base, long int exponent) {
    if (exponent == 1) {
        return base;
    }
    return base * power(base, exponent - 1);
    
}
