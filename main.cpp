#include <iostream>
#include "Project_UTS.h"

using namespace std;

int main(int argc, char *argv[])
{
    doublelist l;
    createlist(l);
    int pil;
    food isi;
    address p;
    string cari;
    bool stop=false;
    while(!stop){
        system("cls");
        cout<<endl<<"+-------- Toko Makanan Ringan --------+"<<endl;
        cout<<"+ No \t Nama Makanan \t Harga \t Stok +"<<endl;
        view(l);
        cout<<"\n1. Input Makanan Ringan"<<endl;
        cout<<"2. Sisipkan Makanan Ringan"<<endl;
        cout<<"3. Hapus Makanan Ringan"<<endl;
        cout<<"4. Harga Makanan Ringan Termurah dan Termahal"<<endl;
        cout<<"5. Total Harga Makanan Ringan"<<endl;
        cout<<"6. Rata-rata Harga Makanan Ringan"<<endl;
        cout<<"7. Exit"<<endl<<endl;
        cout<<"Masukkan pilihan : ";
        cin>>pil;
        if(pil==1){
            cout<<"\n1. Input Makanan Ringan di awal"<<endl;
            cout<<"2. Input Makanan Ringan di akhir"<<endl;
            cout<<"Masukkan pilihan : ";
            cin>>pil;
            if(pil==1){
                inputdata(isi);
                p = createelm(isi);
                insertFirst(l,p);
                cout<<"Berhasil";
            }else if(pil==2){
                inputdata(isi);
                p = createelm(isi);
                insertLast(l,p);
                cout<<"Berhasil";
            }else{
                cout<<"Pilihan Tidak Ada!";
            }
        }else if(pil==2){
            inputdata(isi);
            cout<<"Masukkan Setelah Produk :";
            cin>>cari;
            p = createelm(isi);
            insertAfter(l,p,cari);
            cout<<"Berhasil";
        }else if(pil==3){
            cout<<"\n1. Hapus Makanan Ringan di awal"<<endl;
            cout<<"2. Hapus Makanan Ringan di akhir"<<endl;
            cout<<"3. Cari Makanan Ringan yang ingin dihapus"<<endl;
            cout<<"Masukkan pilihan : ";
            cin>>pil;
            if(pil==1){
                deleteFirst(l,p);
                cout<<"Berhasil";
            }else if(pil==2){
                deleteLast(l,p);
                cout<<"Berhasil";
            }else if(pil==3){
                cout<<"Nama Makanan Ringan yang ingin dihapus : ";
                cin>>cari;
                deleteAfter(l,p,cari);
                cout<<"Berhasil";
            }else{
                cout<<"Pilihan Tidak Ada!";
            }
        }else if (pil==4){
            searchMin(l);
            searchMax(l);
            system("pause");
        }else if (pil==5){
            total(l);
        }else if (pil==6){
            average(l);
            system("pause");
        }else{
            break;
        }
    }
}
