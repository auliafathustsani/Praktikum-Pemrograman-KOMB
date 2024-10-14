#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to generate FizzBuzz results and store them in a vector
vector<string> generateFizzBuzz(int n) {
    vector<string> result;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            result.push_back("FizzBuzz");
        } else if (i % 3 == 0) {
            result.push_back("Fizz");
        } else if (i % 5 == 0) {
            result.push_back("Buzz");
        } else {
            result.push_back(to_string(i));
        }
    }
    return result;
}

// Function to reverse a vector of integers
vector<int> reverseArray(const vector<int>& arr) {
    vector<int> reversedArr;
    for (int i = arr.size() - 1; i >= 0; i--) {
        reversedArr.push_back(arr[i]);
    }
    return reversedArr;
}

int main() {
    // Problem 1: FizzBuzz
    cout << "FizzBuzz from 1 to 100:" << endl;
    vector<string> fizzBuzzResults = generateFizzBuzz(100);
    for (const string& result : fizzBuzzResults) {
        cout << result << endl;
    }
    cout <<endl;
    
    // Problem 2: Reverse an Array
    vector<int> originalArray = {1, 2, 3, 4, 5};
    cout << "Input : ";
    for (int num : originalArray) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> reversedArray = reverseArray(originalArray);
    cout << "Output : ";
    for (int num : reversedArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

