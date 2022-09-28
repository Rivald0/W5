
#include <stdio.h>


int main()
{

    int nilai_awal;
    int batas_akhir;
    int jumlah = 0;
    int mod = 2;

    printf("Masukkan Nilai Awal:  ");
    scanf("%d", &nilai_awal);
    printf("Masukkan Batas Akhir:  ");
    scanf("%d", &batas_akhir);

    printf("Jumlah bilangan genap dari %d sampai %d adalah = ", nilai_awal, batas_akhir);
    
    while(nilai_awal < batas_akhir){
        if( nilai_awal % mod == 0 ){
            jumlah = jumlah + nilai_awal;
        }
        nilai_awal++; 
    }
    printf("%d\n", jumlah);
    return 0;

}