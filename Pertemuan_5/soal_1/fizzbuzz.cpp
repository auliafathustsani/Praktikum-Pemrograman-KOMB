#include <iostream>
#include <vector>
#include <string>
using namespace std;
    
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
    
int main (){
    cout << "FizzBuzz from 1 to 100:" << endl;
    vector<string> fizzBuzzResults = generateFizzBuzz(100);
    for (const string & result : fizzBuzzResults) {
        cout << result << endl;
    }
    return 0;
}

