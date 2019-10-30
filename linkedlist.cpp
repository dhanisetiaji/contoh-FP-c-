#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#define r 0.5

using namespace std;

typedef struct simpul{
	float a;
	float t;
	float result;
	struct simpul *next_simpul;
}data;

int main(){
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
	
	cout<<"catatan : rumus Luas Segitiga adalah 1/2 alas x tinggi\n";
	cout<<"=== Kondisi Awal Simpul ==\n";
	cout<<"--------------------------\n";
	temp=simpul1;
	cout<<"Hasil Segitiga dari alas "<<temp->a<<" x tinggi "<<temp->t<<" adalah "<<temp->result;
	cout<<"\n";
	
	temp=simpul1->next_simpul;
	cout<<"Hasil Segitiga dari alas "<<temp->a<<" x tinggi "<<temp->t<<" adalah "<<temp->result;
	cout<<"\n";
	

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
	
	cout<<"\n== Kondisi Simpul (data berkurang) ===";
	cout<<"\n\tMenghapus simpul ke 2\n";
	cout<<"----------------------------------------\n";
	simpul1->next_simpul=simpul3;
	free(simpul2);
	
	for(temp=simpul1;temp!=NULL;temp=temp->next_simpul){
		cout<<"Hasil Segitiga dari alas "<<temp->a<<" x tinggi "<<temp->t<<" adalah "<<temp->result;
		cout<<"\n";
	}
	return 0;
}
