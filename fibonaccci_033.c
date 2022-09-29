/*  Nama:   Rivaldo Y.G Butarbutar
    NIM:    13321033
    Prodi:  D3TK2   */

#include <stdio.h>

int main()
{
    int n;
    int Fn; 
    int Fn1 = 1; 
    int Fn2 = 0;  

    printf("Masukkan Nilai n:   ");
    scanf("%d", &n);

    printf("Deret Fibonacci dari %d adalah:\n", n);
    
    for(int i = 1; i<= n; i++){
        Fn = Fn1 + Fn2; 
        Fn1 = Fn2;
        Fn2 = Fn;
        printf("%d, ", Fn);
    }
    return 0;

}
