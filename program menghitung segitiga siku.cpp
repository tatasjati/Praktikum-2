/* Praktikum 2 */
/* Program Menghitung Segitiga Siku-siku */
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int menu,pilihan;
	float a,t,c,luas,keliling;
	system("color b");
	cout<<"|============================================|"<<endl;
	cout<<"|   PROGRAM MENGHITUNG SEGITIGA SIKU-SIKU    |"<<endl;
	cout<<"|============================================|"<<endl;
	cout<<" Pilihan Menu  \n";
	cout<<" 1. Menghitung Panjang Sisi Miring\n";
	cout<<" 2. Menghitung Luas\n";
	cout<<" 3. Menghitung Keliling\n";
	cout<<" 4. Exit Program\n";
	cout<<" Pilih Menu (1/2/3/4) : ";cin>>pilihan;
	cout<<endl;
	
	switch(pilihan)
	{
		case 1 :
			cout<<" Menghitung Panjang Sisi Miring"<<endl;
			cout<<" Masukan sisi pertama/alas : "; cin>>a;
			cout<<" Masukan sisi kedua/tinggi : "; cin>>t;
			c = sqrt((a*a)+(t*t));
			cout<<" Panjang sisi miring       : "<<c<<endl;
			cout<<"\n|============================================|"<<endl;
			cout<<"|===============< Terimakasih >==============|"<<endl;
			cout<<"|=< By. Tatas Jati Wikanta/NIM 20051397065 >=|"<<endl;
			cout<<"|============================================|"<<endl;
			return 0;
			
		case 2 :
			cout<<" Menghitung Luas"<<endl;
			cout<<" Masukan alas   : "; cin>>a;
			cout<<" Masukan tinggi : "; cin>>t;
			luas = (0.5*a*t);
			cout<<" Luas Segitiga  : "<<luas<<endl;
			cout<<"\n|============================================|"<<endl;
			cout<<"|===============< Terimakasih >==============|"<<endl;
			cout<<"|=< By. Tatas Jati Wikanta/NIM 20051397065 >=|"<<endl;
			cout<<"|============================================|"<<endl;
			return 0;
			
		case 3 :
			cout<<" Menghitung Keliling"<<endl;
			cout<<" Masukan alas        : ";cin>>a;
			cout<<" Masukan tinggi      : ";cin>>t;
			cout<<" Masukan sisi miring : ";cin>>c;
			keliling = (a+t+c);
			cout<<" Keliling Segitiga   : "<<keliling<<endl;
			cout<<"\n|============================================|"<<endl;
			cout<<"|===============< Terimakasih >==============|"<<endl;
			cout<<"|=< By. Tatas Jati Wikanta/NIM 20051397065 >=|"<<endl;
			cout<<"|============================================|"<<endl;
			return 0;
			
		case 4 :
			exit(0);
	}
	return 0;
}
