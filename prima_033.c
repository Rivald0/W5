#include <stdio.h>

int main()
{
    int bilangan;
    int batas;
    int a = 0;
    int b;

    printf("Masukkan Sebuah angka: ");
    scanf("%d", &bilangan);

    b = bilangan/2;

    for (batas = 2; batas < b; ++
    batas)
    {
        if (bilangan % batas == 0)
        {
            a = 1;
        break;
        }
    }
    if (bilangan == 1) {
        printf("1 bukan bilangan prima");
    } 
    else if (a == 0)
    {
        printf("%d Merupakan bilangan Prima", bilangan);
    }
    else{
        printf("%d Merupakan bilangan Komposite", bilangan);
    }
}