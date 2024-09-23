#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c, diskriminan;
    float x1, x2;
    
    cout << "Bentuk persamaan kuadrat : ax^2 + bx + c = 0" <<endl;
    cout << "Masukkan nilai a :";
    cin >> a;
    cout << "Masukkan nilai b :";
    cin >> b;
    cout << "Masukkan nilai c :";
    cin >> c;
    
    cout <<endl;
    
    diskriminan = (b*b)-(4*a*c);
    cout << "Diskriminan = " <<diskriminan;

    if (a==0) {
        cout << "\n" << "Bukan persamaan kuadrat" <<endl;
    } else if (diskriminan>0){
            x1 = (-b + sqrt(diskriminan)) / (2*a);
            x2 = (-b - sqrt(diskriminan)) / (2*a);
            cout << "(Akar real dan berbeda)" << endl;
            cout << "x1 = " << x1 << endl;
        	cout << "x2 = " << x2 << endl;
        }
    else if (diskriminan==0){
            x1 = x2 = (-b/2*a);
            cout << "(Akar real dan sama)" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    else if (diskriminan<0){
            cout << "(Akar tidak real / imajiner)";
        }
    return 0;
}
