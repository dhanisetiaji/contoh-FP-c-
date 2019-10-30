#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define r 0.5

using namespace std;



int dat1,dat2;

void dataku(){
	typedef struct simpul{
	float a;
	float t;
	float result;
	struct simpul *next_simpul;
	}data;
	data *simpul1, *simpul2, *simpul3, *temp;
	
	simpul1=(data *)malloc(sizeof(data));
	simpul2=(data *)malloc(sizeof(data));
	simpul1->a=5;
	simpul2->a=10;
	simpul1->t=20;
	simpul2->t=25;
	simpul1->result=r*simpul1->a*simpul1->t;
	simpul2->result=r*simpul2->a*simpul2->t;
	
	simpul1->next_simpul = simpul2;
	simpul2->next_simpul = simpul3;
	simpul2->next_simpul = NULL;
}

void Tdata(){
	dataku();
	cout<<"Masukan alas : ";
	cin>>dat1;
	cout<<"\nMasukan tinggi : ";
	cin>>dat2;
	simpul3=(data *)malloc(sizeof(data));
	simpul3->a=alas;
	simpul3->t=tinggi;
	simpul3->result=r*simpul3->a*simpul3->t;
	simpul2->next_simpul=simpul3;
	return 1;
}

void hapus(){
	tambahdata();
}

main(){
	dataku();
	menu:
	system ("CLS");
	
	int pil;
	cout<<"\tTUGAS LINKEDLIST STRUKTUR DATA\n1. Hasil Soal Nomer 1\n2. Hasil Soal Nomer 2\nMasukan Pilihan : ";
	cin>>pil;
	if(pil==1){
		system ("CLS");
		cout<<"catatan : rumus Luas Segitiga adalah 1/2 alas x tinggi\n\n";
		cout<<"=== Kondisi Awal Simpul ==\n";
		cout<<"--------------------------\n";
		for(temp=simpul1;temp!=NULL;temp=temp->next_simpul){
			cout<<"Hasil Segitiga dari alas "<<temp->a<<" x tinggi "<<temp->t<<" adalah "<<temp->result;
			cout<<"\n";
		}
		
	
		cout<<"\n== Kondisi Simpul (data bertambah) ==\n";
		cout<<"----------------------------------------\n";
		simpul3=(data *)malloc(sizeof(data));
		simpul3->a=15;
		simpul3->t=30;
		simpul3->result=r*simpul3->a*simpul3->t;
		simpul2->next_simpul=simpul3;
		
		for(temp=simpul1;temp!=NULL;temp=temp->next_simpul){
			cout<<"Hasil Segitiga dari alas "<<temp->a<<" x tinggi "<<temp->t<<" adalah "<<temp->result;
			cout<<"\n";
		}
		
		cout<<"\n=== Kondisi Simpul (data berkurang) ===";
		cout<<"\n\tMenghapus simpul ke 2\n";
		cout<<"----------------------------------------\n";
		simpul1->next_simpul=simpul3;
		free(simpul2);
		
		for(temp=simpul1;temp!=NULL;temp=temp->next_simpul){
			cout<<"Hasil Segitiga dari alas "<<temp->a<<" x tinggi "<<temp->t<<" adalah "<<temp->result;
			cout<<"\n";
		}
		
		string mn;
		cout<<"\nPress F to back =";
		cin>>mn;
		if(mn=="F" || mn=="f"){
			goto menu;
		}
	} //END OF NUMBER 1
	else if(pil==2){
		system ("CLS");
		menu2:
		int pl,dat1,dat2;
		cout<<"1.Data Saat Ini\n2.Tambahkan Data\n3.Hapus Data\nMasukan Pilihan anda :";
		cin>>pl;
		if(pl==1){
			cout<<"catatan : rumus Luas Segitiga adalah 1/2 alas x tinggi\n\n";
			cout<<"=== Kondisi Awal Simpul ==\n";
			cout<<"--------------------------\n";
			for(temp=simpul1;temp!=NULL;temp=temp->next_simpul){
				cout<<"Hasil Segitiga dari alas "<<temp->a<<" x tinggi "<<temp->t<<" adalah "<<temp->result;
				cout<<"\n";
			}
			string mn1;
			cout<<"\nPress F to back =";
			cin>>mn1;
			if(mn1=="F" || mn1=="f"){
				goto menu2;
			}
			
			cout<<"\n"<<endl;	
		}
		else if(pl==2){
			
			for(temp=simpul1;temp!=NULL;temp=temp->next_simpul){
				cout<<"Hasil Segitiga dari alas "<<temp->a<<" x tinggi "<<temp->t<<" adalah "<<temp->result;
				cout<<"\n";
			}
			
			string mn1;
			cout<<"\nPress F to back =";
			cin>>mn1;
			if(mn1=="F" || mn1=="f"){
				goto menu2;
			}
			cout<<"\n"<<endl;	
		}
		else if(pl==3){
			cout<<""
			
		}
		
	}
	else{
		cout<<"Pilihan anda tidak ada";
	}


	
	
	
	return 0;
}
