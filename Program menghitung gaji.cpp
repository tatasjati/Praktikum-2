/* Praktikum 2 */
/* Program menghitung gaji karyawan mingguan */
#include <iostream>

using namespace std;
int main ()
{
	system("color b");
	char nama[15],golongan;
	int jam;
	int gaji,lembur,glembur;
	cout<<"|==========================================|\n";
	cout<<"|PROGRAM MENGHUTUNG GAJI KARYAWAN MINGGUAN |\n";
	cout<<"|==========================================|\n";
	cout<<" Nama Karyawan      : "; cin>>nama;
	cout<<" Golongan (A/B/C/D) : "; cin>>golongan;
	cout<<" Jumlah Jam Kerja   : "; cin>>jam;
	cout<<" ==========================================\n";
	glembur = 4000;
	
	switch(golongan)
	{
		case'A' :
			{
			gaji = 5000;
			break;
		}
		case 'B' :
			{
			gaji = 7000;
			break;
		}
		case 'C' :
			{
			gaji = 8000;
			break;
		}
		case 'D' :
			{
			gaji = 10000;
			break;
			default :
				cout<<"Golongan tdk tersedia!"<<endl;
				gaji=0;
				lembur=0;
		}
	}
	if (jam<=48){
		cout<<" Nama Karyawan      : "<<nama<<endl;
		cout<<" Total Gaji         : "<<gaji*jam <<endl;
	}
	else {
		lembur = jam-48;
		cout<<" Nama Karyawan      : "<<nama<<endl;
		cout<<" Total Gaji         : "<<48*gaji+lembur*glembur <<endl;
	}
	cout<<"|==========================================|\n";
	cout<<"|==============< Terimakasih >=============|\n";
	cout<<"|  By. Tatas Jati Wikanta/NIM 20051397065  |\n";
	cout<<"|==========================================|\n"<<endl;
 } 
 
