#include <iostream>
#include "Project_UTS.h"

using namespace std;

void createlist(doublelist &l){
    first(l) = NULL;
    last(l) = NULL;
};

address createelm(food isi){
    address p = new elemen;
    info(p)= isi;
    next(p)= NULL;
    prev(p)= NULL;
    return p;
};

void inputdata(food &isi){
    cout<<endl<<"Nama Makanan Ringan: ";
    cin>>isi.nama;
    cout<<"Harga Makanan Ringan: ";
    cin>>isi.harga;
    cout<<"Stok Makanan Ringan: ";
    cin>>isi.stok;
};

void insertFirst(doublelist &l,address p){
    if(first(l)==NULL && last(l)==NULL){
        first(l) = p;
        last(l) = p;
    }else{
        next(p) = first(l);
        prev(first(l)) = p;
        first(l) = p;
    }
};

void insertLast(doublelist &l, address p){
    if(first(l)==NULL && last(l)==NULL){
        first(l) = p;
        last(l) = p;
    }else{
        prev(p) = last(l);
        next(last(l)) = p;
        last(l) = p;
    }
};

void insertAfter(doublelist &l, address p,string cari){
    address prec;
    if(first(l)==NULL && last(l)==NULL){
        first(l) = p;
        last(l) = p;
    }else{
        prec = first(l);
        while(prec->info.nama != cari && next(prec)!= NULL){
            prec = next(prec);
        }
        if(prec->info.nama==cari){
            next(p) = next(prec);
            prev(p) = prec;
            prev(next(prec)) = p;
            next(prec) = p;
        }
    }
};

void deleteFirst(doublelist &l, address p){
    if(first(l)==NULL && last(l)==NULL){
        cout<<"    Tidak ada stok makanan ringan!"<<endl;
    }else{
        p = first(l);
        if(first(l)==last(l)){
            first(l) = NULL;
            last(l) = NULL;
        }else{
            first(l) = next(p);
            next(p) = NULL;
            prev(first(l)) = NULL;
        }
    }
};

void deleteLast(doublelist &l, address p){
    if(first(l)==NULL && last(l)==NULL){
        cout<<"    Tidak ada stok makanan ringan!"<<endl;
    }else{
        p = last(l);
        if(first(l)==last(l)){
            first(l) = NULL;
            last(l) = NULL;
        }else{
            last(l) = prev(p);
            prev(p) = NULL;
            next(last(l)) = NULL;
        }
    }
};

void deleteAfter(doublelist &l, address p, string cari){
    address prec;
    if(first(l)==NULL && last(l)==NULL){
        cout<<"    Tidak ada stok makanan ringan!"<<endl;
    }else{
        p = first(l);
        if(first(l)==last(l)){
            first(l) = NULL;
            last(l) = NULL;
        }else{
            while(p->info.nama!=cari && next(p)!=NULL){
                p = next(p);
            }
            if(p->info.nama==cari){
                prec = prev(p);
                next(prec) = next(p);
                prev(next(p)) = prec;
                next(p) = NULL;
                prev(p) = NULL;
            }
        }
    }
};

void searchMin(doublelist l){
    address m = first(l);
    address p = first(l);
    do{
        if(p->info.harga < m->info.harga){
            m = p;
        }
        p = next(p);
    }while(p!=NULL);
    cout<<"Makanan Ringan Termurah : "<<m->info.nama<<endl;
    cout<<"Dengan Harga Rp. "<<m->info.harga<<endl;
    cout<<endl;
};

void searchMax(doublelist l){
    address m = first(l);
    address p = first(l);
    do{
        if(p->info.harga > m->info.harga){
            m = p;
        }
        p = next(p);
    }while(p!=NULL);
    cout<<"Makanan Ringan Termahal : "<<m->info.nama<<endl;
    cout<<"Dengan Harga Rp. "<<m->info.harga<<endl;
    cout<<endl;
};

void total(doublelist l){
    address p;
    if(first(l)==NULL && last(l)==NULL){
        cout<<"    Tidak ada stok makanan ringan!"<<endl;
    }else{
        int i = 0;
        p = first(l);
        while(p!=NULL){
            i=i+p->info.harga;
            p = next(p);
        }
        cout<<"Total Harga Makanan Ringan : Rp."<<i<<endl;
    }
    cout<<endl;
    system("pause");
};

void average(doublelist l){
    address q;
    q = first(l);
    int i = 0;
    float rata = 0;
    while(q != NULL){
        rata = rata + q->info.harga;
        i++;
        q = next(q);
    }
    cout<<"Rata-rata harga seluruh Makanan Ringan : "<<rata/i<<endl;
};

void view(doublelist l){
    if(first(l) == NULL && last(l)== NULL){
        cout<<"    Tidak ada stok makanan ringan!";
    }else{
        int i = 1;
        address p=first(l);
        while(p!=NULL){
            cout<<"+ "<<i++<<".\t "<<p->info.nama<<"\t\t "<<p->info.harga<<"\t "<<p->info.stok<<endl;
            p = next(p);
        }
    }
    cout<<endl;
};
