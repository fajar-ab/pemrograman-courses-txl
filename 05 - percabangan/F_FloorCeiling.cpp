#include <iostream>
#include <cmath>

using namespace std;

int main() {

	float n;
	cin >> n;

	if (n == trunc(n)){
		cout << n << " " << n << endl;
	} else {
		if (n >= 0) {
			cout << trunc(n)  << " " << trunc(n) + 1 << endl;
		} else {
			cout << trunc(n) - 1  << " " << trunc(n) << endl;
		}
	}

	return 0;
}