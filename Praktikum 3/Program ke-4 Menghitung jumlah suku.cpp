/* Program ke-4 */
/* Tatas Jati Wikanta */
/* NIM 20051397065 */
/* Program Menghitung Jumlah Suku */
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	int a=1,b,p;
	int jumlah,pil;
	system("color b");
	cout<<"\tProgram Menghitung Jumlah Suku"<<endl;
	cout<<"============================================"<<endl;
	cout<<"Masukan suku pertama   : ";cin>>a;
	cout<<"Masukan indeks pangkat : ";cin>>p;
	cout<<"Masukan banyak deret   : ";cin>>b;
	cout<<"\n";
	cout<<"============================================"<<endl;
	
	for(a=1;a<=b;a++)
	{
		cout<<pow(a,p)<<",";
		jumlah=jumlah+pow(a,p);
	}
	cout<<"\n";
	cout<<"Jumlah "<<b<<" deret bilangan : ";
	cout<<jumlah<<endl;
	cout<<"\n================Terima Kasih================";
	cout<<"\n   By. Tatas Jati Wikanta/NIM 2005137065";
	getch();
	
}

