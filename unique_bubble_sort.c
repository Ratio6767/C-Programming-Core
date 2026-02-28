#include <stdio.h>

int main() {
    int sayilar[10];
    int tekilSayilar[10];
    int i, j, k = 0;
    int gecici;

    // Tek printf ile bütün sayıları iste
    printf("Lütfen 10 ile 100 arasinda 10 sayi giriniz (aralarinda bosluk birakarak):\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &sayilar[i]);
    }

    // Tekrar edenleri ayıkla
    for (i = 0; i < 10; i++) {
        if (sayilar[i] < 10 || sayilar[i] > 100) {
            printf("Geçersiz sayi (%d). 10-100 arasinda olmalidir.\n", sayilar[i]);
            continue;
        }
        int tekrarVar = 0;
        for (j = 0; j < k; j++) {
            if (tekilSayilar[j] == sayilar[i]) {
                tekrarVar = 1;
                break;
            }
        }
        if (!tekrarVar) {
            tekilSayilar[k] = sayilar[i];
            k++;
        }
    }

    // Bubble Sort ile küçükten büyüğe sırala
    for (i = 0; i < k - 1; i++) {
        for (j = 0; j < k - i - 1; j++) {
            if (tekilSayilar[j] > tekilSayilar[j + 1]) {
                gecici = tekilSayilar[j];
                tekilSayilar[j] = tekilSayilar[j + 1];
                tekilSayilar[j + 1] = gecici;
            }
        }
    }

    // Sonuçları yazdır
    printf("\nTekrarsiz ve siralanmis sayilar:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", tekilSayilar[i]);
    }

    return 0;
}
