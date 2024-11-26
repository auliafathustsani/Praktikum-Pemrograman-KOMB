#include <iostream>
using namespace std;

int faktorial (int n){
	if (n==0||n==1){
		return 1;
	}else{
		return (n*faktorial(n-1));
	}
}

int main (){
	
	int n= 10 ;
	int hasil;
    
    cout << "masukkan nilai n : " << n << endl;
	
	cout << "faktorial ke- " << n << " adalah "<< faktorial(n) <<endl;
	
	int expected_output = 3628800 ;  
    if (faktorial(n) == expected_output) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
	return 0;
}
