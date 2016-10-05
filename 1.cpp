#include <iostream>

using namespace std;

int main(){

	int x;
	cin >> x;

	int d = 1;
	
	while(x >= d){
		if(x%d == 0){
			cout << d << endl;
		}
		d++;
	}

	return 0;
}