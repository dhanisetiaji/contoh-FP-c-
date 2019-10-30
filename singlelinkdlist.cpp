#include <iostream>

using namespace std;


struct node{
	string nama;
	int usia;
	node *next;
};

int main(){
	node *head, *iterator;
	node *d1 = new node;
	node *d2 = new node;
	node *d3 = new node;
	
	d1->nama="Ninik";
	d2->nama="Windha";
	d3->nama="Bayu";
	
	d1->usia=35;
	d2->usia=20;
	d3->usia=37;
	
	head=d1;
	d1->next = d2;
	d2->next = d3;
	d3->next = NULL;
	
	for(iterator=head;iterator!=NULL;iterator=iterator->next){
		cout<<"Nama = "<<iterator->nama<<" Usia = "<<iterator->usia<<"\n";
	}
	delete d1;
	delete d2;
	delete d3;
}
