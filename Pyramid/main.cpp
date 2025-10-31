#include <iostream>

using namespace std;

int main() {
	int height;
	cout << "height: ";
	cin >> height;
	//for (int row = 1; row <= height; ++row)
	//{
	//	for (int col = 1; col <= row; ++col)
	//	{
	//		cout << '*';
	//	}
	//	cout << endl;
	//}
	for (int row = 1; row <= height; ++row) {
		// Print leading spaces
		for (int col = 0; col < height - row; ++col) {
			cout << " ";
		}
		// Print stars
		for (int col = 0; col < (2 * row - 1); ++col) {
			cout << char(219);
		}
		cout << endl;
	}
	return 0;
}