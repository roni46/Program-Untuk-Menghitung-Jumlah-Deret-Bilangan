#include <iostream>
#include<stdio.h>
#include <conio.h>



using namespace std;



int main(){
printf("PROGRAM MENGHITUNG JUMLAH DERET\n");
printf("BY M Achmad Sahroni NIM 311620782\n");
printf("KAMPUS PELITA BANGSA. TEKNIK INFORMATIKA\n\n");

int a=0, b, c, jumlah=0, i, n;



cout<<"Masukan Jumlah Deret Bilangan\n";

cout<<"Masukan Bilangan Awal = ";

cin>>a;

cout<<"Masukan Beda = ";

cin>>b;

cout<<"Masukan Jumlah Sampai Deret Ke-n = ";

cin>>n;



cout<<"Deret ke - "<<n<<" : ";

cout<<a<<",";

jumlah=jumlah+a;

for(i=0; i<n-1; i++){

    c=a+b;

    a=c;

    cout<<c<<",";

    jumlah=jumlah+c;



}



cout <<"\n Jumlah Deret Ke - "<<n<<" = ";

cout <<jumlah;



getch();

return 0;

}

