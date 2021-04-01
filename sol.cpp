#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	// create an 'integer_part' string variable to store the whole number part
	string integer_part = "";
	// create an 'index' variable to store the location of the decimal point ('.')
	int index = 0;
	for (int i = 0; index == 0; i++) {
		if (s[i] == '.') {
			// if the current character is equal to '.', then store the index
			index = i;
		} else {
			// otherwise, concatenate the characters in the 'integer_part' variable
			integer_part += s[i];
		}
	}
	if (integer_part[index - 1] == '9') {
		// if the last digit of the 'integer_part' is 9, then print this statement
		cout << "GOTO Vasilisa.";
	} else if (s[index + 1] >= '0' && s[index + 1] <= '4') {
		// if the last digit of the 'integer_pat' is between 0 and 4, then simply print it
		cout << integer_part;
	} else {
		// otherwise, increment the value of the last character in the 'integer_part'
		integer_part[index - 1]++;
		cout << integer_part;
	}
	cout << '\n';
	return 0;
}
