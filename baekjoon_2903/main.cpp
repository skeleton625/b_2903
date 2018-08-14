#include <iostream>
#include <cmath>
using namespace std;

int i1, n1 = 1, n2 = 2;
unsigned long r;

int main() {
	cin >> i1;
	while (i1--) {
		n2 += n1;
		n1 *= 2;
	}
	r = pow(n2, 2);
	cout << r;
	return 0;
}