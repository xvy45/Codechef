#include <iostream>
using namespace std;

int main() {
	// your code goes here

	string a, b;
	cin >> a >> b;

	int p1, p2;
	cin >> p1 >> p2;

	if(p1 > p2) {
	    cout << a <<'\n';
	}
	else if(p1 < p2) {
	    cout << b <<'\n';
	}
	else {
	    cout <<"equal" <<'\n';
	}

}

