#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(const vector<int>& arr) {
    vector<int> reversedArr;
    for (int i = arr.size() - 1; i >= 0; i--) {
        reversedArr.push_back(arr[i]);
    }
    return reversedArr;
}

int main() {
    int n;
    cout << "Masukkan jumlah input: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Input :";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> reversedArr = reverseArray(arr);
    cout << "Ouput : ";
    for (int num : reversedArr) {
        cout << num << " ";
    }
    return 0;
}



