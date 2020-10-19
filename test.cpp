#include<iostream>

using namespace std;

int main() {

	int result{ 0 };
	cout << "Enter your result to know your Grade\n";
	cin >> result;

	char gender{};
	cout << "Enter your Gender 'M' for Male 'F' for Female \n";
	cin >> gender;

	if (result > 50)
		cout << "PASS\n";
	else
		cout << "FAIL\n";

	if (gender == 'F')
		cout << "You Are Femallle\n";
	else 
		cout << "You Are Male\n";


	return 0;

}