#include <stdio.h>
#include <math.h>


double hipotenus(double kenar1, double kenar2);


int main() {
    double a_kenari, b_kenari, sonuc;

    printf("Test inputs: ");
    scanf("%lf %lf", &a_kenari, &b_kenari);

    sonuc = hipotenus(a_kenari, b_kenari);

    printf("Test output: %.1lf\n", sonuc);

    return 0;
}

double hipotenus(double kenar1, double kenar2) {
    return sqrt(kenar1 * kenar1 + kenar2 * kenar2);
}
