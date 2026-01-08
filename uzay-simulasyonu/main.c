#include <stdio.h>
#include <math.h>

#define GEZEGEN_SAYISI 8

/* Gezegen isimleri */
const char *gezegenler[GEZEGEN_SAYISI] = {
    "Merkur", "Venus", "Dunya", "Mars",
    "Jupiter", "Saturn", "Uranus", "Neptun"
};

/* Yerçekimi ivmeleri (m/s^2) */
double g_gezegen[GEZEGEN_SAYISI] = {
    3.7, 8.87, 9.81, 3.71,
    24.79, 10.44, 8.69, 11.15
};

/* Ternary ile mutlak deger */
double mutlak(double x) {
    return (x < 0) ? -x : x;
}

/* Negatif kontrol ve uyarý */
double duzelt(double x) {
    if (x < 0)
        printf("Uyari: Negatif deger girildi, mutlak degeri alindi.\n");
    return mutlak(x);
}

/* 1. Serbest Dusme */
void serbestDusme(double *g) {
    double t;
    printf("Sureyi giriniz (s): ");
    scanf("%lf", &t);
    t = duzelt(t);

    for (int i = 0; i < GEZEGEN_SAYISI; i++) {
        double h = 0.5 * (*(g + i)) * t * t;
        printf("%s icin alinan yol: %.2f m\n", gezegenler[i], h);
    }
}

/* 2. Yukari Atis */
void yukariAtis(double *g) {
    double v0;
    printf("Ilk hizi giriniz (m/s): ");
    scanf("%lf", &v0);
    v0 = duzelt(v0);

    for (int i = 0; i < GEZEGEN_SAYISI; i++) {
        double hmax = (v0 * v0) / (2 * (*(g + i)));
        printf("%s icin maksimum yukseklik: %.2f m\n", gezegenler[i], hmax);
    }
}

/* 3. Agirlik */
void agirlik(double *g) {
    double m;
    printf("Kutleyi giriniz (kg): ");
    scanf("%lf", &m);
    m = duzelt(m);

    for (int i = 0; i < GEZEGEN_SAYISI; i++) {
        double G = m * (*(g + i));
        printf("%s icin agirlik: %.2f N\n", gezegenler[i], G);
    }
}

/* 4. Potansiyel Enerji */
void potansiyelEnerji(double *g) {
    double m, h;
    printf("Kutle (kg): ");
    scanf("%lf", &m);
    printf("Yukseklik (m): ");
    scanf("%lf", &h);

    m = duzelt(m);
    h = duzelt(h);

    for (int i = 0; i < GEZEGEN_SAYISI; i++) {
        double Ep = m * (*(g + i)) * h;
        printf("%s icin potansiyel enerji: %.2f J\n", gezegenler[i], Ep);
    }
}

/* 5. Hidrostatik Basinc */
void hidrostatikBasinc(double *g) {
    double rho, h;
    printf("Sivi yogunlugu (kg/m^3): ");
    scanf("%lf", &rho);
    printf("Derinlik (m): ");
    scanf("%lf", &h);

    rho = duzelt(rho);
    h   = duzelt(h);

    for (int i = 0; i < GEZEGEN_SAYISI; i++) {
        double P = rho * (*(g + i)) * h;
        printf("%s icin hidrostatik basinc: %.2f Pa\n", gezegenler[i], P);
    }
}

/* 6. Arsimet Kaldirma Kuvveti */
void arsimet(double *g) {
    double rho, V;
    printf("Sivi yogunlugu (kg/m^3): ");
    scanf("%lf", &rho);
    printf("Batan hacim (m^3): ");
    scanf("%lf", &V);

    rho = duzelt(rho);
    V   = duzelt(V);

    for (int i = 0; i < GEZEGEN_SAYISI; i++) {
        double Fk = rho * (*(g + i)) * V;
        printf("%s icin kaldirma kuvveti: %.2f N\n", gezegenler[i], Fk);
    }
}

/* 7. Basit Sarkac */
void sarkac(double *g) {
    double L;
    printf("Ip uzunlugu (m): ");
    scanf("%lf", &L);
    L = duzelt(L);

    for (int i = 0; i < GEZEGEN_SAYISI; i++) {
        double T = 2 * M_PI * sqrt(L / (*(g + i)));
        printf("%s icin sarkac periyodu: %.2f s\n", gezegenler[i], T);
    }
}

/* 8. Sabit Ip Gerilmesi */
void ipGerilmesi(double *g) {
    double m;
    printf("Kutle (kg): ");
    scanf("%lf", &m);
    m = duzelt(m);

    for (int i = 0; i < GEZEGEN_SAYISI; i++) {
        double T = m * (*(g + i));
        printf("%s icin ip gerilmesi: %.2f N\n", gezegenler[i], T);
    }
}

/* 9. Asansor */
void asansor(double *g) {
    double m, a;
    printf("Kutle (kg): ");
    scanf("%lf", &m);
    printf("Asansor ivmesi (m/s^2): ");
    scanf("%lf", &a);

    m = duzelt(m);
    a = duzelt(a);

    for (int i = 0; i < GEZEGEN_SAYISI; i++) {
        double N = m * ((*(g + i)) + a);
        printf("%s icin hissedilen agirlik: %.2f N\n", gezegenler[i], N);
    }
}

/* MAIN */
int main() {
    int secim;
    char isim[50];

    printf("Bilim insaninin adini giriniz: ");
    scanf("%s", isim);

    do {
        printf("\n--- DENEY MENUSU (%s) ---\n", isim);
        printf("1- Serbest Dusme\n");
        printf("2- Yukari Atis\n");
        printf("3- Agirlik\n");
        printf("4- Potansiyel Enerji\n");
        printf("5- Hidrostatik Basinc\n");
        printf("6- Arsimet\n");
        printf("7- Basit Sarkac\n");
        printf("8- Ip Gerilmesi\n");
        printf("9- Asansor\n");
        printf("-1- Cikis\n");
        printf("Seciminiz: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1: serbestDusme(g_gezegen); break;
            case 2: yukariAtis(g_gezegen); break;
            case 3: agirlik(g_gezegen); break;
            case 4: potansiyelEnerji(g_gezegen); break;
            case 5: hidrostatikBasinc(g_gezegen); break;
            case 6: arsimet(g_gezegen); break;
            case 7: sarkac(g_gezegen); break;
            case 8: ipGerilmesi(g_gezegen); break;
            case 9: asansor(g_gezegen); break;
            case -1: printf("Program sonlandirildi.\n"); break;
            default: printf("Gecersiz secim! Tekrar deneyiniz.\n");
        }

    } while (secim != -1);

    return 0;
}







