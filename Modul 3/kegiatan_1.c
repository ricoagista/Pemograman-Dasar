#include <stdio.h>

enum JenisFilm {
    pamali = 30000,
    setan = 35000,
    danur = 40000
};

enum JenisTiket {
    Reguler = 30000,
    VIP = 50000,
    VVIP = 80000
};

int main() {
    enum JenisFilm Film;
    enum JenisTiket Tiket;
    char respond;
    int HargaTotal = 0;

    printf("=========== BIOSKOP INFORMATIKA ===========\n");
    printf("Pilih Film Yang Akan Anda Tonton :\n");
    printf("1.Pamali         | Rp.%d |\n", Film = pamali);
    printf("2.Setan          | Rp.%d |\n", Film = setan);
    printf("3.DANUR          | Rp.%d |\n", Film = danur);
    printf("-------------------------------------------\n");
    
    int PilihanFlm;
    printf("Silahkan Tekan 1/2/3 :");
    scanf("%d", &PilihanFlm);

    switch (PilihanFlm) {
        case 1:
            HargaTotal += Film = pamali;
            break;
        case 2:
            HargaTotal += Film = setan;
            break;
        case 3:
            HargaTotal += Film = danur;
            break;
        default:
            HargaTotal += 0;
            printf("Mohon Maaf Anda Hanya Bisa Memilih Yang Ada di Pilihan Saja\n");
            break;
    }

    printf("\n--------------------------------\n");
    printf("Silahkan Pilih Jenis Tiket Yang Anda Mau :\n");
    printf("1.Reguler | Rp.%d |\n", Tiket = Reguler);
    printf("2.VIP     | Rp.%d |\n", Tiket = VIP);
    printf("3.VVIP    | Rp.%d |\n", Tiket = VVIP);
    printf("--------------------------------\n");
    
    int PilihanTiket;
    printf("Silahkan Tekan 1/2/3 :");
    scanf("%d", &PilihanTiket);

    switch (PilihanTiket) {
        case 1:
            HargaTotal += Tiket = Reguler;
            break;
        case 2:
            HargaTotal += Tiket = VIP;
           
        case 3:
            HargaTotal += Tiket = VVIP;
            break;
        default:
            HargaTotal += 0;
            printf("Mohon Maaf Anda Hanya Bisa Memilih Yang Ada di Pilihan Saja\n");
            break;
    }

    printf("\nApakah Anda Punya Kartu Member [Y/N]\n");
    scanf(" %c", &respond);
    
    int potonganHarga = 0;
    if (respond == 'y' || respond == 'Y') {
        potonganHarga = HargaTotal * 10 / 100;
        printf("Diskon : %d\n", potonganHarga);
        HargaTotal -= potonganHarga;
    } else {
        printf("Anda tidak mendapatkan diskon.\n");
    }

    int nominalBayar;
    printf("\nTotal yang harus dibayar : %d\n", HargaTotal);
    printf("Input nominal untuk membayar: ");
    scanf(" %d", &nominalBayar);
    
    int kembalian = (nominalBayar - HargaTotal);

    if (kembalian == 0) {
        printf("\nUang Pas\n");
    } else if (kembalian > 0) {
        printf("\nKembalian Anda: %d\n", kembalian);
    } else {
        printf("\nUang anda kurang!!\n");
    }

    printf("\nAlamat memori variabel total : %p\n", (void*)&HargaTotal);
    printf("Terima Kasih!\n");

    return 0;
}
