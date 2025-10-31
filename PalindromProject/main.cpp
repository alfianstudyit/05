#include <iostream>
#include <string>
using namespace std;

int main() {
	string nama;

	cout << "input : ";
	cin >> nama;

	bool palindrome = true;

	for (int i = 0; i < nama.length() / 2; i++) {
		if (nama[i] != nama[nama.length() - 1 - i]) {
			palindrome = false;
			break;
		}
	}

	if (palindrome) {
		cout << nama << " adalah palindrome\n";
	}
	else
		cout << nama << " bukan palindrome\n";

	return 0;
}

