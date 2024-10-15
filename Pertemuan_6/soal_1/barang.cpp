#include <iostream>
#include <string>
using namespace std;

struct barang{
    int kode;
    string nama;
    float harga;
    int jumlah;
};

int main() {
    
    int n, totaljumlah=0;
	float totalharga=0.0, ratarataharga;
    barang barang [50];
    
    cout<<"Masukkan banyak jenis barang : ";
    cin>>n;
    cout<<endl;
    
    for (int i=0; i<n; i++){
        cout<<"Kode Barang : ";
        cin>>barang[i].kode;
        
        cout<<"Nama Barang : ";
        cin>>barang[i].nama;
        
        cout<<"Harga Barang : ";
        cin>>barang[i].harga;
        
        cout<<"Jumlah Barang : ";
        cin>>barang[i].jumlah;
        cout<<endl;
        
        totaljumlah+=barang[i].jumlah;
        totalharga+=barang[i].harga*barang[i].jumlah;
    }
    cout<<endl;
    
    ratarataharga=totalharga/totaljumlah;
    
    cout<<"Jumlah semua barang :"<<totaljumlah<<endl;
    cout<<"Harga rata-rata barang :"<<ratarataharga<<endl;
    
    return 0;
}
