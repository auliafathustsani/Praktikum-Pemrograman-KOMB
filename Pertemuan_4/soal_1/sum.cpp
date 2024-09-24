#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Input : ";
	cin>>n;
	
	int sum { 0 };
	for (int i { 1 }; i <= n; ++i ){
		sum += i ;
	}

	cout << "Output : Sum = " << sum;

	return 0;
}
