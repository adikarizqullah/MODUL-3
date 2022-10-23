#include <stdio.h>

int main()
{
    char Nama[40],NIM[40],kelasParalel[40],ttl[40],Alamat[40],Hobby[40],NoHP[40];

    printf("\tInput\n");
    printf("Nama\t\t\t:");
    gets(Nama);
    printf("NIM\t\t\t:");
    gets(NIM);
    printf("Kelas Paralel\t\t:");
    gets(kelasParalel);
    printf("Tempat/Tanggal Lahir\t:");
    gets(ttl);
    printf("Alamat\t\t\t:");
    gets(Alamat);
    printf("Hobby\t\t\t:");
    gets(Hobby);
    printf("No. HP\t\t\t:");
    gets(NoHP);

    printf("\n\tOutput\n");
    printf("Nama\t\t\t:%s\n", Nama);
    printf("NIM\t\t\t:%s\n", NIM);
    printf("Kelas Paralel\t\t:%s\n", kelasParalel);
    printf("Tempat/Tanggal Lahir\t:%s\n", ttl);
    printf("Alamat\t\t\t:%s\n", Alamat);
    printf("Hobby\t\t\t:%s\n", Hobby);
    printf("No. HP\t\t\t:%s\n",NoHP);
}
