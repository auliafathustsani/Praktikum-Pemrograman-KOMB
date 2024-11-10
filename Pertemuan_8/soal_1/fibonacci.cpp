#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n==0 || n==1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n = 5;
    int expected_output = fibonacci(n);
    cout << "Fibonacci ke-" << n << " adalah " << expected_output;

	if (expected_output == 5){
		cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
	}
	
	return 0;
}
