#include <iostream>

using namespace std;

int main() {
	int n;
	bool prima = true;

	cout << "input : ";
	cin >> n;

	for (int i = 2;i * i <= n; i++) {
		if (n % i == 0) {
			prima = false;
			break;
		}
	}

	if (prima) {
		cout << n << " is prime number\n";
	}
	else {
		cout << n << " is not prime number\n";
	}

}