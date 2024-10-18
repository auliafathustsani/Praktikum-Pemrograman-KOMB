#include <iostream>
#include <string>
using namespace std;

struct barang{
    string kode;
    string nama;
    float harga;
    int jumlah;
};

int main() {
    
    int n=3; 
    int totaljumlah=0;
	  float totalharga=0.0, ratarataharga;
	
    barang barang [50]={
        {101, "Beras", 15000.0, 5},
	      {201, "Minyak", 14000.0, 4},
	      {301, "Garam", 5000.0, 7}
    };
    
    for (int i=0; i < n; i++){
        totaljumlah += barang[i].jumlah;
        totalharga += barang[i].harga*barang[i].jumlah;
    }
	
    ratarataharga=totalharga/totaljumlah;
    
    int expected_jumlah = 16;
    float expected_ratarata = 10375.0;
    
    cout<<"Jumlah semua barang :"<<totaljumlah<<endl;
    cout<<"Harga rata-rata barang :"<<ratarataharga<<endl;
    
     if (totaljumlah == expected_jumlah && ratarataharga == expected_ratarata) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
    
    return 0;
}
