#include<iostream>
using namespace::std;

struct hitung
{
    string nama,jurusan;
    float nilaiuts,nilaiuas,nilaitugas,nilaiabsen;
};

hitung ht;

void garis ()
{
    cout<<"---------------------------------------------------\n\n";
}

double hitung ()
{
    double jumlah;
    jumlah=(ht.nilaiuts*20/100)+(ht.nilaiuas*30/100)+(ht.nilaitugas*35/100)+(ht.nilaiabsen*15/100);
    cout<<"\nJadi totalnya adalah "<<jumlah<<endl;
    cout<<"Jadi anda akan mendapatkan Grade : ";
    if (jumlah>=81)
        {
            cout<<"A";
        }
    else if (jumlah>=61)
        {
            cout<<"B";
        }
    else if (jumlah>=41)
        {
            cout<<"C";
        }
    else if (jumlah>=21)
        {
            cout<<"D";
        }
    else if (jumlah>=0)
        {
            cout<<"E";
        }
    else
        {
            cout<<"Terjadi kesalahan";
        }
    return jumlah;
}

main ()
{
    cout<<"Masukkan Nama    : ";
    cin>>ht.nama;
    cout<<"Masukkan jurusan : ";
    cin>>ht.jurusan;
    cout<<endl;
    garis ();
    cout<<"Masukkan nilai UTS   : ";
    cin>>ht.nilaiuts;
    cout<<"Masukkan nilai UAS   : ";
    cin>>ht.nilaiuas;
    cout<<"Masukan nilai Tugas  : ";
    cin>>ht.nilaitugas;
    cout<<"Masukkan nilai Absen : ";
    cin>>ht.nilaiabsen;
    garis ();
    hitung ();
}







