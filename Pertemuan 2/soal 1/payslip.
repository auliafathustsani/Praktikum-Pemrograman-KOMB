#include <iostream>
using namespace std;
int main()
{
    string nama;
    double persen_pajak = 0.2;
    int gaji_kotor, pajak, cicilan, asuransi, gaji_bersih;
    
    cout << "Masukkan Nama : ";
    getline (cin,nama);
    
    cout << "Masukkan Gaji Kotor :Rp ";
    cin >>gaji_kotor;
    
    pajak = persen_pajak*gaji_kotor;
    cout << "Masukkan Pajak (20%) :Rp " <<pajak<<endl;
    
    cout << "Masukkan Cicilan :Rp ";
    cin >>cicilan;
    
    cout << "Masukkan Asuransi :Rp ";
    cin >>asuransi;
    
    gaji_bersih = gaji_kotor - (pajak + cicilan + asuransi);
    cout << "Masukkanan Gaji Bersih :Rp " <<gaji_bersih<<endl;
    
    cout <<" "<<endl;
    cout << "Payslip for Employee" <<endl;
    cout << "--------------------" <<endl;
    cout << "Nama :" <<nama<< endl;
    cout << "Gaji Kotor :Rp " <<gaji_kotor<< endl;
    cout << "Pajak (20%) :Rp " <<pajak<< endl;
    cout << "Cicilan :Rp " <<cicilan<< endl;
    cout << "Asuransi :Rp " <<asuransi<< endl;
    cout << "Gaji Bersih :Rp " <<gaji_bersih<< endl;

    return 0;
}
