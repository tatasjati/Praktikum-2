/* Program ke-5 */
/* Tatas Jati Wikanta */
/* NIM 20051397065 */
/* Program Menghitung Jumlah Deret */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=0,b,c,jumlah=0,i,n;
	system("color b");
	cout<<"\tMenghitung Jumlah Deret"<<endl;
	cout<<"========================================="<<endl;
	cout<<"\n";
	cout<<" Masukan bilangan awal     : ";cin>>a;
	cout<<" Masukan beda              : ";cin>>b;
	cout<<" Masukan jumlah deret ke-n : ";cin>>n;
	cout<<"========================================="<<endl;
	cout<<"\n";
	cout<<" Deret ke-"<<n<<" : ";
	cout<<a<<",";
	jumlah=jumlah+a;
	
	for(i=0;i<n-1;i++)
	{
		c=a+b;
		a=c;
		cout<<c<<",";
		jumlah=jumlah+c;	
	}
	cout<<"\n";
	cout<<" Jumlah deret ke-"<<n<<" : ";
	cout<<jumlah<<endl;
	cout<<"========================================="<<endl;
	cout<<" By. Tatas Jati Wikanta/NIM 20051397065"<<endl;
	getch();
}
