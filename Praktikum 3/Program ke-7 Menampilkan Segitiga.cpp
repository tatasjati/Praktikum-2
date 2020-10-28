/* Program ke-7 */
/* Tatas Jati Wikanta */
/* NIM 20051397065 */  
/* Program Menampilkan Segitiga */  
#include<iostream>  
#include<conio.h>
using namespace std;  
int main()  
{  
	int n,i,j;
	cout<<"================================================"<<endl;
	cout<<"\tMenampilkan Segitiga dengan Angka"<<endl;
	cout<<"================================================"<<endl;  
 	cout<<""<<endl;
 	cout<<" Masukkan tinggi segitiga : ";cin>>n;
	cout<<"\n";
 
for(i=1; i<=n;i++)
 {
 for(j=1; j<=i;j++)
 {
 cout<<j;  
  }  
  cout<<" \n";  
 }  
 
 for (i=n-1;i>=1;i--)  
 {   
  for(j=1;j<=i;j++)  
  {  
   cout<<j;
  }  
    cout<<"\n";
 }
 cout<<"\n\n By. Tatas Jati Wikanta/20051397065"<<endl;  
 getch(); 
}
