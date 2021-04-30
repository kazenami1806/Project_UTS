#ifndef PROJECT_UTS_H_INCLUDED
#define PROJECT_UTS_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#define first(A) A.first
#define last(A) A.last
#define info(A) A->info
#define next(A) A->next
#define prev(A) A->prev

using namespace std;
typedef struct elemen* address;

struct food{
    string nama;
    int harga,stok;
};

struct elemen{
    food info;
    address next;
    address prev;
};

struct doublelist{
    address first;
    address last;
};

void createlist(doublelist &l);
address createelm(food isi);
void inputdata(food &isi);
void insertFirst(doublelist &l,address p);
void insertLast(doublelist &l, address p);
void insertAfter(doublelist &l, address p,string cari);
void deleteFirst(doublelist &l, address p);
void deleteLast(doublelist &l, address p);
void deleteAfter (doublelist &l, address p,string cari);
void searchMax(doublelist l);
void searchMin(doublelist l);
void total(doublelist l);
void average(doublelist l);
void view(doublelist l);

#endif // PROJECT_UTS_H_INCLUDED
