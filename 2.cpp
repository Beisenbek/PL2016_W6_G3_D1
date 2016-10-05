#include <iostream>

using namespace std;

int main(){

	int x;
	cin >> x;

	for(int d = 1;x >= d;d++){
		if(x%d == 0){
			cout << d << endl;
		}
	}

	return 0;
}