#include <stdio.h>

int main() {
    int tgl_lahir, bulan;
    char *zodiak;

    printf("Masukkan tanggal lahir (1-31): ");
    scanf("%d", &tgl_lahir);

    printf("Masukkan bulan lahir (1-12): ");
    scanf("%d", &bulan);

    // Validasi input tanggal dan bulan
    if (tgl_lahir < 1 || tgl_lahir > 31 || bulan < 1 || bulan > 12) {
        printf("Tanggal atau bulan yang Anda masukkan tidak valid.\n");
        return 1;
    }

    // Menentukan zodiak berdasarkan tanggal dan bulan
    if ((bulan == 3 && tgl_lahir >= 21) || (bulan == 4 && tgl_lahir <= 19)) {
        zodiak = "Aries";
    } else if ((bulan == 4 && tgl_lahir >= 20) || (bulan == 5 && tgl_lahir <= 20)) {
        zodiak = "Taurus";
    } else if ((bulan == 5 && tgl_lahir >= 21) || (bulan == 6 && tgl_lahir <= 20)) {
        zodiak = "Gemini";
    } else if ((bulan == 6 && tgl_lahir >= 21) || (bulan == 7 && tgl_lahir <= 22)) {
        zodiak = "Cancer";
    } else if ((bulan == 7 && tgl_lahir >= 23) || (bulan == 8 && tgl_lahir <= 22)) {
        zodiak = "Leo";
    } else if ((bulan == 8 && tgl_lahir >= 23) || (bulan == 9 && tgl_lahir <= 22)) {
        zodiak = "Virgo";
    } else if ((bulan == 9 && tgl_lahir >= 23) || (bulan == 10 && tgl_lahir <= 22)) {
        zodiak = "Libra";
    } else if ((bulan == 10 && tgl_lahir >= 23) || (bulan == 11 && tgl_lahir <= 21)) {
        zodiak = "Scorpio";
    } else if ((bulan == 11 && tgl_lahir >= 22) || (bulan == 12 && tgl_lahir <= 21)) {
        zodiak = "Sagittarius";
    } else if ((bulan == 12 && tgl_lahir >= 22) || (bulan == 1 && tgl_lahir <= 19)) {
        zodiak = "Capricorn";
    } else if ((bulan == 1 && tgl_lahir >= 20) || (bulan == 2 && tgl_lahir <= 18)) {
        zodiak = "Aquarius";
    } else {
        zodiak = "Pisces";
    }

    printf("Zodiak Anda adalah: %s\n", zodiak);

    return 0;
}