#include <iostream>
using namespace std;
int main() 
{
    int a, b, c;

    cout << "Inputkan bilangan 1 : ";
    cin >> a;
    cout << "Inputkan bilangan 2 : ";
    cin >> b;
    cout << "Inputkan bilangan 3 : ";
    cin >> c;
    
    switch (a > b) {
      case 1 :
       switch(a > c){
            case 1 :
               cout << "Bilangan terbesar adalah = " << a;
               break;
            case 0 :
               cout << "Bilangan terbesar adalah = " << c;
               break;
        }
        break;
      case 0 :
        switch(b > c){
            case 1 :
               cout << "Bilangan terbesar adalah = " << b;
               break;
            case 0 :
               cout << "Bilangan terbesar adalah = " << c;
               break;
        }
        break;
    }
    return 0;
}
