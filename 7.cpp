#include <iostream>

using namespace std;

int main(){

	int x;
	cin >> x;
	

	if(x == 0){
		cout << 0;
	}
	else if(x == 1){
		cout << 1;
	}else{

		int value = 1;
		int p = 1;
		int p2 = 1;
		int index = 2;
		while(x > value){
			value = p + p2;
			index++;
			p2 = p;
			p = value;
		}

		if(value == x){
				cout << index << endl;
				return 0;
		}
		else{
			cout << -1;
		}
	}

	return 0;
}
/*
0 1 2 3 4 5 6 7
0 1 1 2 3 5 8 13
*/

