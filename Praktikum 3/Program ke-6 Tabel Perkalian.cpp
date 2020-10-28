/* Program ke-6 */
/* Tatas Jati Wikanta */
/* NIM 20051397065 */
/* Program Tabel Perkalian */
#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int n;
    system("color b");
	cout<<"\t\t\t  TABEL PERKALIAN\n"<<endl;
	cout<<"====================================================================="<<endl;
    cout <<"Batas Perkalian : ";
    cin >> n;
    cout<<endl;
    cout<<"  X"<<setw(4)<<(char)179;
    for(int a=1; a<n+1; ++a)
    {
        cout<<setw(6)<<a;
    }
    cout<<endl;
    for(int z=1; z<70; ++z)
    {
        cout<<(char)196;
    }
    cout<<endl;
    
	for(int b=1; b<n+1; b++)
    {cout<< b<<setw(6)<<(char)179;
        
		for(int c=1; c<n+1; ++c)
        {
            cout<<setw(6)<<b*c;
        }
        cout<<endl;
    }
    for(int o=1; o<70; ++o)
    {
        cout<<(char)196;
    }
    cout<<endl;
	cout<<" By. Tatas Jati Wikanta/20051397065";
}  
