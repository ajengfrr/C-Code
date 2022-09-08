#include <stdio.h>
#include <conio.h>
//Pendeklarasian tipe data baru struct Mahasiswa
typedef struct Mahasiswa{
char NIM[9];
char nama[30];
float ipk;
};
void main(){
//Buat variabel mhs bertipe data Mahasiswa
Mahasiswa mhs;
clrscr();
printf("NIM = ");scanf("%s",mhs.NIM);
printf("Nama = ");scanf("%s",mhs.nama);
printf("IPK = ");scanf("%f",&mhs.ipk);
printf("Data Anda : \n");
printf("NIM : %s\n",mhs.NIM);
printf("Nama : %s\n",mhs.nama);
printf("IPK : %f\n",mhs.ipk);
getch();
}
