#include <iostream>

using namespace std;

int main(){

	int x;
	cin >> x;

	int d = 1;
	
	do{
		if(x%d == 0){
			cout << d << endl;
		}
		d++;
	}while(x >= d);

	return 0;
}