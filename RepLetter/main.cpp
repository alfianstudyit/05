#include <iostream>
#include <string>

using namespace std;

int main() {
	string sentence;
	const string vowels = "aeiouAEIOU";

	cout << "Enter a sentence : ";
	getline(cin, sentence);

	for (int i = 0; i < sentence.length(); ++i)
	{
		for (int j = 0; j < vowels.length(); ++j)
		{
			if (sentence[i] == vowels[j])
			{
				sentence[i] = '*';
				break;
			}
		}
	}

	cout << "Modified sentence: " << sentence << endl;

	system("pause");
}