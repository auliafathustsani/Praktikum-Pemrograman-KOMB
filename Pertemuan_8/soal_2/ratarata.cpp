#include <iostream>
using namespace std;

double rekursifratarata(int array[], int n) {
    if (n == 1) {
        return array[0];
    } else {
    	return ((array[n - 1] + (n - 1) * rekursifratarata(array, n - 1)) / n);
	}
}

int main() {
    int n = 5;
    int array[]= {11,13,15,17,21};

    double ratarata = rekursifratarata(array, n);
    cout << "Rata-rata: " << ratarata << endl;
     if (ratarata == 15.4 ) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }

    return 0;
}
