#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// deklarasi fungsi
void input();
void cariTanggal(int Tanggal, int bulan, int tahun);
void caribulan(int bulan, int tahun);
void caritahun(int tahun);
// input data pengeluaran kedalam file yang dibuat menggunakan perulangan
int main()
{
    int pilihan;
    int tahun, bulan, Tanggal;

    do
    {
        printf("\n=============== SELAMAT DATANG ===============\n\n");
        printf("+  1. Input Pengeluaran                      +\n");
        printf("+  2. Cari Pengeluaran Per Tanggal           +\n");
        printf("+  3. Cari Pengeluaran Per Bulan             +\n");
        printf("+  4. Cari Pengeluaran Per Tahun             +\n");
        printf("+  5. Keluar                                 +\n");
        printf("==============================================\n");
        printf("Pilihan : ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            printf("\n----- Masukkan Data Pengeluaran -----\n\n");
            input();
            getchar();
            system("PAUSE");
            break;
        case 2:
            printf("\n----- Pengeluaran Per Tanggal -----\n\n");
            printf("Masukkan tahun : ");
            scanf("%d", &tahun);
            printf("Masukkan bulan : ");
            scanf("%d", &bulan);
            printf("Masukkan Tanggal : ");
            scanf("%d", &Tanggal);
            cariTanggal(Tanggal, bulan, tahun);
            getchar();
            system("PAUSE");
            break;
        case 3:

            printf("----- Pengeluaran Per Bulan -----\n");
            printf("Masukkan tahun : ");
            scanf("%d", &tahun);
            printf("Masukkan bulan : ");
            scanf("%d", &bulan);
            caribulan(bulan, tahun);
            getchar();
            system("PAUSE");
            break;
        case 4:
            printf("----- Pengeluaran Per Tahun -----\n");
            printf("Masukkan tahun : ");
            scanf("%d", &tahun);
            caritahun(tahun);
            getchar();
            system("PAUSE");
            break;
        case 5:
            return 0;
            break;
        default:
            printf("Pilihan tidak ada\n");
            break;
        }
    } while (pilihan != 4);
    return 0;
}

// fungsi untuk menginput data pengeluaran
void input()
{
    FILE *fp;
    int Tanggal, bulan, tahun, uang;
    fp = fopen("Expenditure.txt", "a+");
    printf("Masukkan tahun : ");
    scanf("%d", &tahun);
    printf("Masukkan bulan : ");
    scanf("%d", &bulan);
    printf("Masukkan Tanggal : ");
    scanf("%d", &Tanggal);
    printf("Masukkan uang : ");
    scanf("%d", &uang);
    fprintf(fp, "%d %d %d %d\n", Tanggal, bulan, tahun, uang);
    fclose(fp);
}

void cariTanggal(int Tanggal, int bulan, int tahun)
{
    FILE *fp;
    int Tanggal2, bulan2, tahun2, uang2;
    int total = 0;
    fp = fopen("Expenditure.txt", "r+");
    while (fscanf(fp, "%d %d %d %d", &Tanggal2, &bulan2, &tahun2, &uang2) != EOF)
    {
        if (Tanggal == Tanggal2 && bulan == bulan2 && tahun == tahun2)
        {
            total += uang2;
        }
    }
    printf("\nTotal pengeluaran selama %d %d %d adalah Sebesar Rp.%d\n", Tanggal, bulan, tahun, total);
    fclose(fp);
}
void caribulan(int bulan, int tahun)
{
    FILE *fp;
    int Tanggal2, bulan2, tahun2, uang2;
    int total = 0;
    fp = fopen("Expenditure.txt", "r+");
    while (fscanf(fp, "%d %d %d %d", &Tanggal2, &bulan2, &tahun2, &uang2) != EOF)
    {
        if (bulan == bulan2 && tahun == tahun2)
        {
            total += uang2;
        }
    }
    printf("\nTotal pengeluaran selama %d %d adalah Sebesar Rp.%d\n", bulan, tahun, total);
    fclose(fp);
}
void caritahun(int tahun)
{
    FILE *fp;
    int Tanggal2, bulan2, tahun2, uang2;
    int total = 0;
    fp = fopen("Expenditure.txt", "r+");
    while (fscanf(fp, "%d %d %d %d", &Tanggal2, &bulan2, &tahun2, &uang2) != EOF)
    {
        if (tahun == tahun2)
        {
            total += uang2;
        }
    }
    printf("\nTotal pengeluaran selama %d adalah Sebesar Rp.%d\n", tahun, total);
    fclose(fp);
}