#include <iostream>
#include <fstream>
#include <string>
usung namespace std;


string sum(int n) {
    string result;
	int n;
	cout<<"Input : ";
	cin>>n;
	
	int sum { 0 };
	for (int i { 1 }; i <= n; ++i ){
		sum += i ;
	}

	cout << "Output : Sum = " << sum;

	return result;
}

int main() {
    std::ifstream testFile("test.txt");
    int input;
    std::string expected_output;

    if (!testFile) {
        std::cerr << "Error: Could not open test.txt" << std::endl;
        return 1;
    }

    int test_num = 1;
    while (testFile >> input && std::getline(testFile >> std::ws, expected_output)) {
        std::string output = sum(input);
        if (output == expected_output) {
            std::cout << "Test " << test_num << " passed!" << std::endl;
        } else {
            std::cout << "Test " << test_num << " failed. Expected: \"" 
                      << expected_output << "\", Got: \"" << output << "\"" << std::endl;
        }
        test_num++;
    }

    testFile.close();
    return 0;
}
