//TO DO

//1. INPUT WAKTU DATANG ( PLAT NOMER, JENIS KENDARAAN, WAKTU DATANG)
//2. WAKTU KELUAR INCLUDE SEARCHING BERDASARKAN PLAT NOMER( PLAT NOMER, JENISJUMLAH BAYAR )
//3. CEK DATA
//4. CEK DATA SORTING BERDASARKAN WAKTU
//5. Kosongkan Data
//6. EXIT


//FITUR
//1. MENGGUNAKAN STACK
//2. SORTING BUBBLE
//3. SEARCHING Squantial
//4. POINTER (di pilihan menu)
//5. ARRAY
//6. STRUCT

#include <iostream>  
#include <conio.h>
#include <stdlib.h> 
#define max 100

using namespace std;

//Struct
struct data{
	string Plat[max];
	string Jenis[max];
	int Datang[max];
	int Atas;
}Tdata;

struct dataK{
	int Pergi[max];
	double Total[max];
	int Atas;
}Tdatak;

void Awal(){
	Tdata.Atas =-1;
	Tdatak.Atas=-1;
}

int Kosong(){
	if(Tdata.Atas==-1){
		return true;
	}else{
		return false;
	}	
}


int Penuh(){
	if(Tdata.Atas==max-1){
		return true;
	}else{
		return false;
	}
}

void TambahDataDatang(string plat, string jenis, int datang){
	if(Kosong()==true || Penuh()==false){
		Tdata.Atas++;
		
		Tdata.Plat[Tdata.Atas]=plat;
		Tdata.Jenis[Tdata.Atas]=jenis;
		Tdata.Datang[Tdata.Atas]=datang;
		cout<<"Data Baru, Berhasil Ditambahkan Pada Tumpukan Ke - "<<Tdata.Atas<<endl;
	}else{
		cout<<"Data Baru, Gagal Ditambahkan!"<<endl;
	}
}


void HapusData(){
 if (Kosong() == 0)  //mengambil data paling atas
 	{
  		cout << "Data teratas dari stack sudah terambil\n";
  		Tdata.Atas--;
  		Tdatak.Atas--;
 	}
 	else  //menampilkan jika data kosong
  		cout << "Data kosong\n";
}

void UrutkanDataMasuk(){
	if(Kosong()==true){
		cout<<"Data Masih Kosong!"<<endl;
	}
	else{
		int i,j,temp;
		for(i=0;i<=(Tdata.Atas-1);i++){
			for(j=0;j<=(Tdata.Atas-1);j++){
				if(Tdata.Datang[j]>Tdata.Datang[j+1]){
					temp=Tdata.Datang[j];
					Tdata.Datang[j]=Tdata.Datang[j+1];
					Tdata.Datang[j+1]=temp;
				}
			}
		}
		for(i=1;i<=Tdata.Atas;i++){
			cout<<"---------------------------"<<endl;
			cout<<"Plat Nomer = "<<Tdata.Plat[i]<<endl;
			cout<<"Jenis Kendaraan = "<<Tdata.Jenis[i]<<endl;
			cout<<"Waktu Datang = "<<Tdata.Datang[i]<<endl;
			cout<<"Waktu Keluar = "<<Tdatak.Pergi[i]<<endl;
			cout<<"Total = "<<Tdatak.Total[i]<<endl;
			cout<<"---------------------------"<<endl;
		}
	}
}

void Total(){
	int cari, posisi, ketemu, pergi1, lama;
	double total1, bayar, Tkembalian;
	ketemu=0;
	if(Kosong()==true){
		cout<<"Data Masih Kosong!"<<endl;
	}
	else{
	cout<<"Masukan jam masuk yang dicari : ";cin>>cari;
		for(int i=0; i<=Tdata.Atas; i++){
			if(Tdata.Datang[i]==cari){
				ketemu=1;
				posisi=i;
				i=Tdata.Atas;
			}
		}
		if(ketemu==0){
			cout<<"Data Tidak Ditemukan!\n";
		}
		else{
			cout<<"Data Ditemukan!\n";
			cout<<"ini data yang anda cari :\n"<<endl;
			cout<<"---------------------------"<<endl;
			cout<<"Plat Nomer = "<<Tdata.Plat[posisi]<<endl;
			cout<<"JENIS KENDARAAN = "<<Tdata.Jenis[posisi]<<endl;
			cout<<"Waktu Datang = "<<Tdata.Datang[posisi]<<endl;
			cout<<"---------------------------"<<endl;
			cout<<"Input Waktu Keluar : ";cin>>pergi1;
			lama=pergi1-Tdata.Datang[posisi];
			
			if(lama<2){
				total1=2000;
			}else {
				total1=4000+2000*(lama-2);
			}
			cout<<"Rp."<<total1<<endl;
			}
			Tdatak.Pergi[posisi]=pergi1;
			Tdatak.Total[posisi]=total1;
			cout<<"input bayar = Rp.";cin>>bayar;
			Tkembalian = bayar-total1;
			cout<<"Kembalian = Rp."<<Tkembalian<<endl;
		}
	}

int main(){
	int PilihMenu;
	int *pil;
	string jenis,plat;
	int datang;
	
	do{
		cout<<"\n-----------------------------------\n"<<endl;
		cout<<"\t APP PARKIR SEDERHANA \n"<<endl;
		cout<<"-----------------------------------"<<endl;
		cout<<"Ketentuan:\nParkir Perjam = Rp.2000\n"<<endl;
		cout<<"1. Input Masuk\n2. Input Keluar+Bayar\n3. Cek Data(sorting)\n4. Kosongkan Data\n5. Exit"<<endl;
		cout<<"Pilih :";cin>>PilihMenu;
		pil = &PilihMenu; //pointer tidak bisa dikasih nilai langsung
		switch (*pil){
			case 1:
				system("cls");
				cout<<"Plat Nomer : ";cin>>plat;
				fflush(stdin);
				cout<<"\nJenis Kendaraan : ";getline(cin,jenis);;
				cout<<"\nWaktu Datang : ";cin>>datang;
				
				TambahDataDatang(plat, jenis, datang);
				break;
			case 2:
				system("cls");
				Total();
				break;
			case 3:
				system("cls");
				UrutkanDataMasuk();
				break;
			case 4:
				HapusData();
				break;
			case 5:
				exit(0);
				break;
		}
		getchar();
		
	}while(*pil!=5);
}
