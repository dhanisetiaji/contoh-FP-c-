#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

/**

PROGRAM SEDERHANA
UNTUK MENGHITUNG
PENGURANGAN DAN PENJUMLAHAN
MATRIKS

**/

main (){
	menu1:
	system ("cls");
	int matA[4][4];
	int matB[4][4];
		cout<<"===== Program Menghitung Matriks ======";
		cout<<"\nInputkan matriks pertama\n";
		for (int i=1;i<4;i++) {
			//baris
			for(int k=1;k<4;k++){//kolom
				cout<<"[baris] "<<"["<<i<<"] "<<"[kolom] ke- "<<"["<<k<<"]"<<"\t:";
				cin>>matA[i][k];
			}
		cout<<"\n";	
		}
		cout<<"Inputkan matriks Kedua\n";
		for (int i=1;i<4;i++) {//baris
			for(int k=1;k<4;k++){//kolom
				cout<<"[baris] "<<"["<<i<<"] "<<"[kolom] ke- "<<"["<<k<<"]"<<"\t:";
				cin>>matB[i][k];
			}
		cout<<"\n";	
		}
		int cek1;
		cout<<"=== CEK MATRIKS ANDA ==="<<endl;
		cout<<"\n[\tMatrik A\t]\n"<<endl;
		for(int i=1;i<4;i++){
			//baris
			for(int k=1;k<4;k++){
				cout<<matA[i][k]<<"\t";
			}
			cout<<"\n"<<endl;
		}
		cout<<"\n\n[\tMatrik B\t]\n"<<endl;
		for(int i=1;i<4;i++){
			//baris
			for(int k=1;k<4;k++){
				cout<<matB[i][k]<<"\t";
			}
			cout<<"\n"<<endl;
		}
		cout<<"\nApakah data sudah benar?"<<endl;
		cout<<"1. sudah"<<"\n2. ulang"<<endl;
		cout<<"Pilih\t:";cin>>cek1;
		if(cek1==2){
			goto menu1
		;}
		else{
			goto menu2
		;}
	menu2:
		
		int cek2;
		cout<<"\nPilih salah satu program untuk menghitung matriks"<<endl;
		cout<<"1.Penjumlahan"<<"\n2.Pengurangan";
		cout<<"\nPilih :";cin>>cek2;
		if (cek2==1){
			system ("cls");
			cout<<"\nHASIL PENJUMLAHAN"<<endl;
			for(int i=1;i<4;i++){
				for (int k=1;k<4;k++){
					cout<<matA[i][k]+matB[i][k]<<"\t";
				}
				cout<<"\n";
			}
			
		}
		else {
			system ("cls");
			cout<<"\nHASIL PENGURANGAN"<<endl;
			for(int i=1;i<4;i++){
				for (int k=1;k<4;k++){
					cout<<matA[i][k]-matB[i][k]<<"\t";
				}
				cout<<"\n";
			}
			
		}
	int cek3;
	cout<<"\n\n Ulangi?"<<"\n1. Awal"<<"\n2. Menghitung"<<"\n3. Keluar"<<endl;
	cout<<"Pilih :";cin>>cek3;
	if(cek3==1){
		goto menu1;
	}
	else if(cek3==2){
		goto menu2
	;}
	else{
		goto keluar;
	}	
keluar:		
return 0;		
}
