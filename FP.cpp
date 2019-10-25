//TODO

//1. PEMASUKAN
//2. PENGELUARAN
//3. CEK DATA(SORTING)
//4. CEK SALDO
//5. CARI DATA
//6. KOSONGKAN DATA 
//7. EXIT

//FITUR
//1. MENGGUNAKAN STACK
//2. SORTING BUBBLE
//3. SEARCHING
//4. POINTER (di pilihan menu)
//5. ARRAY
//6. STRUCT

#include <iostream>  
#include <conio.h>
#include <stdlib.h> 
#define max 100

using namespace std;

struct Uang{
	double jumlahUang[max];
	int tanggal[max];
	int atas;
	string keterangan[max];
}Tumpukan;

struct pengeluaran{
	double UangKeluar[max];
	int tanggalkeluar[max];
	string KETkeluar[max];
	int atas;
}T;

void Awal(){
	
	Tumpukan.atas=-1;	

}
void AwalT(){
	
	T.atas=-1;	

}

int Kosong(){
	
	if(Tumpukan.atas==-1){
		return true;
	}else{
		return false;
	}
	
}

int KosongT(){
	if(T.atas==-1){
		return true;
	}else{
		return false;
	}
	
}

int Penuh(){
	
	if(Tumpukan.atas==max-1){
		return true;
	}else{
		return false;
	}
		
}
int PenuhT(){
	
	if(T.atas==max-1){
		return true;
	}else{
		return false;
	}
		
}

void TambahData(double jumlahUangnya, int tanggalnya, string keterangannya){
	if(Kosong()==true || Penuh()==false){
		Tumpukan.atas++;
		
		Tumpukan.jumlahUang[Tumpukan.atas]=jumlahUangnya;
		Tumpukan.tanggal[Tumpukan.atas]=tanggalnya;
		Tumpukan.keterangan[Tumpukan.atas]=keterangannya;
		
		cout<<"Data Baru, Berhasil Ditambahkan Pada Tumpukan Ke - "<<Tumpukan.atas+1<<endl;
	}else{
		cout<<"Data Baru, Gagal Ditambahkan!"<<endl;	
	}
}

void DataPengeluaran(double Jumlahpengeluaranya, int tanggalpengeluaranya, string KETpengeluaranya){
	if(Kosong()==true || Penuh()==false){
		T.atas++;
		
		T.UangKeluar[T.atas]=Jumlahpengeluaranya;
		T.tanggalkeluar[T.atas]=tanggalpengeluaranya;
		T.KETkeluar[T.atas]=KETpengeluaranya;
		
		cout<<"Data Baru, Berhasil Ditambahkan Pada Tumpukan Ke - "<<T.atas+1<<endl;
	}else{
		cout<<"Data Baru, Gagal Ditambahkan!"<<endl;	
	}
}


void HapusData(){
 if (Kosong() == 0)  //mengambil data paling atas
 	{
  		cout << "Data teratas sudah terambil\n";
  		Tumpukan.atas--;
 	}
 	else  //menampilkan jika data kosong
  		cout << "Data kosong\n";
}
void HapusDataT(){
	 if (KosongT() == 0)  //mengambil data paling atas
 	{
  		cout << "Data teratas sudah terambil\n";
  		T.atas--;
 	}
 	else  //menampilkan jika data kosong
  		cout << "Data kosong\n";
}

void TampilData(){
	
	if(Kosong()==true){
		cout<<"Data Masih Kosong!"<<endl;
	}else{
		
		for(int i=Tumpukan.atas; i>=0; i--){
			cout<<"Data Ke - "<<i+1<<endl;
			cout<<"---------------------------"<<endl;
			cout<<"Jumlah Uang = "<<Tumpukan.jumlahUang[i]<<endl;
			cout<<"Tanggal = "<<Tumpukan.tanggal[i]<<endl;
			cout<<"Keterangan = "<<Tumpukan.keterangan[i]<<endl;
			cout<<"---------------------------"<<endl;
		}
		
	}
	
}

void CekSaldo(){
	int jumlahMasuk, jumlahKeluar;
	jumlahMasuk=0; jumlahKeluar=0;
	for(int i=Tumpukan.atas; i>=0; i--){
		jumlahMasuk=jumlahMasuk+Tumpukan.jumlahUang[i];
	}
	for(int i=T.atas; i>=0; i--){
	jumlahKeluar=jumlahKeluar+T.UangKeluar[i];
	}
	cout<<"Sisa Saldo anda saat ini adalah Rp."<<jumlahMasuk-jumlahKeluar<<endl<<endl;
}

void mencari(){
	int cari, posisi, ketemu;
	ketemu=0;
	if(Kosong()==true){
		cout<<"Data Masih Kosong!"<<endl;
	}
	else{
	cout<<"Masukan tanggal yang dicari : ";cin>>cari;
		for(int i=0; i<=Tumpukan.atas; i++){
			if(Tumpukan.tanggal[i]==cari){
				ketemu=1;
				posisi=i;
				i=Tumpukan.atas;
			}
		}
		if(ketemu==0){
			cout<<"Data Tidak Ditemukan!\n";
		}
		else{
			cout<<"Data Ditemukan!\n";
			cout<<"ini data yang anda cari :\n"<<endl;
			cout<<"---------------------------"<<endl;
			cout<<"Jumlah Uang = "<<Tumpukan.jumlahUang[posisi]<<endl;
			cout<<"Tanggal = "<<Tumpukan.tanggal[posisi]<<endl;
			cout<<"Keterangan = "<<Tumpukan.keterangan[posisi]<<endl;
			cout<<"---------------------------"<<endl;
		}
	}
}

void mencariT(){
	int cari, posisi, ketemu;
	ketemu=0;
	if(Kosong()==true){
		cout<<"Data Masih Kosong!"<<endl;
	}
	else{
	cout<<"Masukan tanggal yang dicari : ";cin>>cari;
		for(int i=0; i<=T.atas; i++){
			if(T.tanggalkeluar[i]==cari){
				ketemu=1;
				posisi=i;
				i=T.atas;
			}
		}
		if(ketemu==0){
			cout<<"Data Tidak Ditemukan!\n";
		}
		else{
			cout<<"Data Ditemukan!\n";
			cout<<"ini data yang anda cari :\n"<<endl;
			cout<<"---------------------------"<<endl;
			cout<<"Jumlah Uang = "<<T.UangKeluar[posisi]<<endl;
			cout<<"Tanggal = "<<T.tanggalkeluar[posisi]<<endl;
			cout<<"Keterangan = "<<T.KETkeluar[posisi]<<endl;
			cout<<"---------------------------"<<endl;
		}
	}
}

void UrutkanDataMasuk(){
	if(Kosong()==true){
		cout<<"Data Masih Kosong!"<<endl;
	}
	else{
		int i,j,temp;
		for(i=0;i<=(Tumpukan.atas-1);i++){
			for(j=0;j<=(Tumpukan.atas-1);j++){
				if(Tumpukan.tanggal[j]>Tumpukan.tanggal[j+1]){
					temp=Tumpukan.tanggal[j];
					Tumpukan.tanggal[j]=Tumpukan.tanggal[j+1];
					Tumpukan.tanggal[j+1]=temp;
				}
			}
		}
		for(i=0;i<=Tumpukan.atas;i++){
			cout<<"---------------------------"<<endl;
			cout<<"Jumlah Uang = "<<Tumpukan.jumlahUang[i]<<endl;
			cout<<"Tanggal = "<<Tumpukan.tanggal[i]<<endl;
			cout<<"Keterangan = "<<Tumpukan.keterangan[i]<<endl;
			cout<<"---------------------------"<<endl;
		}
	}
}

void UrutkanDataKeluar(){
	if(KosongT()==true){
		cout<<"Data Masih Kosong!"<<endl;
	}
	else{
		int i,j,temp;
		for(i=0;i<=(T.atas-1);i++){
			for(j=0;j<=(T.atas-1);j++){
				if(T.tanggalkeluar[j]>T.tanggalkeluar[j+1]){
					temp=T.tanggalkeluar[j];
					T.tanggalkeluar[j]=T.tanggalkeluar[j+1];
					T.tanggalkeluar[j+1]=temp;
				}
			}
		}
		for(i=0;i<=T.atas;i++){
			cout<<"---------------------------"<<endl;
			cout<<"Jumlah Uang = "<<T.UangKeluar[i]<<endl;
			cout<<"Tanggal = "<<T.tanggalkeluar[i]<<endl;
			cout<<"Keterangan = "<<T.KETkeluar[i]<<endl;
			cout<<"---------------------------"<<endl;
		}
	}
}



int main(){
	int pilihMenu;
	int *pil;
	double uangMasuk, uangKeluar;
	int tanggalMasuk, tanggalKeluar;
	string keteranganMasuk, keteranganKeluar;
	int banyakData, pilihanCari, pilihanHapus;
	
	Awal();
	AwalT();
	
	do{
	
	cout<<"----------------------------------------\n\n";
	cout<<"\t\tUANGKU \n\n";
	cout<<"----------------------------------------\n\n";
	cout<<"1. Uang Masuk\n2. Pengeluaran\n3. Cek Data(sorting)\n4. Cek Saldo Total\n5. Cari Data\n6. Kosongkan Data Teratas\n7. Keluar\nPilih :";
	cin>>pilihMenu;cout<<endl;
	pil = &pilihMenu; //pointer tidak bisa dikasih nilai langsung
	switch(*pil){
		case 1:
			system("cls");
			cout<<"Masukan banyak data yang dimasukan :";cin>>banyakData;
			for(int i=0;i<banyakData;i++){
				cout<<"\n\nMasukkan Tanggal Masuk :";
				cin>>tanggalMasuk;
				cout<<"\nMasukkan Jumlah Uang :";
				cin>>uangMasuk;
				fflush(stdin);
				cout<<"\nKeterangan :";
				getline(cin,keteranganMasuk);
				
				TambahData(uangMasuk,tanggalMasuk,keteranganMasuk);
			}
				break;
		case 2:
			system("cls");
			cout<<"\n\nMasukkan Tanggal Uang Keluar :";
			cin>>tanggalKeluar;
			cout<<"\nMasukkan Jumlah Uang :";
			cin>>uangKeluar;
			fflush(stdin);
			cout<<"\nKeterangan :";
			getline(cin,keteranganKeluar);
				
			DataPengeluaran(uangKeluar,tanggalKeluar,keteranganKeluar);
			break;
		case 3:
			system("cls");
			cout<<"Data uang masuk dan pengeluaran setelah diurutkan (bubble sort):"<<endl;
			cout<<"\n---- Uang Masuk ----"<<endl;
			UrutkanDataMasuk();
			cout<<"\n---- Pengeluaran ----"<<endl;
			UrutkanDataKeluar();
			break;
		case 4:
			system("cls");
			CekSaldo();
			cout<<"\n"<<endl;
			break;
		case 5:
			system("cls");
			cout<<"pilih 1 jika ingin mencari uang masuk dan pilih 2 untuk mencari pengeluaran :"<<endl;
			cin>>pilihanCari;
			if(pilihanCari==1){
			mencari();
			}
			else{
				mencariT();
			}
			break;
		case 6:
			system("cls");
			cout<<"pilih 1 jika ingin menghapus data teratas uang masuk dan pilih 2 untuk menghapus data teratas pengeluaran :"<<endl;
			cin>>pilihanHapus;
			if(pilihanHapus==1){
			HapusData();
			}
			else{
				HapusDataT();
			}
			break;
		case 7:
			exit(0);
			break;
	}
	getchar();
	
}while(*pil!=7);
	
		
}
