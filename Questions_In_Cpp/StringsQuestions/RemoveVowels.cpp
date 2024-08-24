#include <iostream>
#include <vector>
#include <regex>
using namespace std;

string removeVowels (string str)
{
    regex r("[aeiouAEIOU]");
    return regex_replace(str, r, "");
}

string remVowel(string str)
{
	vector<char> vowels = {'a', 'e', 'i', 'o', 'u','A', 'E', 'I', 'O', 'U'};

	for (int i = 0; i < str.length(); i++)
	{
		if (find(vowels.begin(), vowels.end(),str[i]) != vowels.end())
		{
			str = str.replace(i, 1, "");
			i -= 1;
		}
	}
	return str;
}

int main()
{
	string str = "this is the vowel";

	// First Method
	cout << remVowel(str) << endl;

	// Second Method
	cout << removeVowels(str) << endl;

	return 0;
}