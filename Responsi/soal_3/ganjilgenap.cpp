#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector <int> array = {2,3,4,5,1,9,7,2,6};
	
    int genap = 0, ganjil = 0;
    for (int i = 0; i < array.size(); ++i) {
        if (array[i] % 2 == 0) {
            ++genap; 
        } else {
            ++ganjil; 
	    }
    }
	cout << "Jumlah bilangan genap: " << genap << endl;
    cout << "Jumlah bilangan ganjil: " << ganjil << endl;
    
    int expected_genap = 4; 
    int expected_ganjil = 5;  
    if (genap == expected_genap && ganjil == expected_ganjil) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
    
    return 0;
}

