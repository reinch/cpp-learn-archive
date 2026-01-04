#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	float tb,bb, bb_lelaki, bb_perempuan;
	char ulang = 'y',jenKel;

	while(ulang == 'y' ||ulang == 'Y' ){
	   system("cls");   //untuk membersihkan layar
	   cout<<"=================================================="<<endl;
	   cout<<"=    PROGRAM PENGHITUNG BERAT BADAN IDEAL V.1    ="<<endl;
		cout<<"=================================================="<<endl;
		cout<<"Masukkan Tinggi Badan (dalam cm): ";
	   cin>>tb;
		cout<<"Masukkan Berat Badan (dalam Kg): ";
	   cin>>bb;
  		cout<<"Masukkan Jenis Kelamin (l / p): ";
	   cin>>jenKel;
        cout<<"=================================================="<<endl;

	   if(jenKel =='l'){
	      bb_lelaki = ((tb-100)-((tb-100)*0.1));
	      if(bb==bb_lelaki){
	         cout<<"Berat badan anda "<<bb<<" Kg telah ideal"<<endl;
			}
			else{
	         cout<<"Berat badan anda "<<bb<<" Kg belum ideal"<<endl;
			}
			cout<<"Berat badan ideal untuk Laki-laki : "<<bb_lelaki<<" Kg"<<endl;
		}
	   else{
	      bb_perempuan = ((tb-100)-((tb-100)*0.15));
	      if(bb==bb_perempuan){
	         cout<<"Berat badan anda "<<bb<<" Kg telah ideal"<<endl;
			}
			else{
	         cout<<"Berat badan anda "<<bb<<" Kg belum ideal"<<endl;
			}
			cout<<"Berat badan ideal untuk Perempuan : "<<bb_perempuan<<" Kg"<<endl;
		}

	   cout<<"Apakah ingin mengulang (y / n)? ";
	   cin>>ulang;
	}

   system("Pause");
   return 0;
}
