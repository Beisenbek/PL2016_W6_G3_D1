#include <iostream>

using namespace std;

int main(){

	int x;
	cin >> x;

	string s = "";
	do{
		int d = x % 10;
		char c = char(d + 48);
		s = c + s;
		x = x / 10;
	}while(x > 0);

	cout << s << endl;

	cout << s[1] << endl;

	return 0;
}

