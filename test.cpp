#include<iostream>

using namespace std;

int main() {
	int result{ 0 };
	
	cout << "Enter your result to know your Grade\n";
	cin >> result;
	
	if (result > 50)
		cout << "PASS\n";
	else
		cout << "FAIL\n";


	return 0;

}