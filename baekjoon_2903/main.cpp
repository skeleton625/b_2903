#include <iostream>
using namespace std;

int i1;

int main() {
	cin >> i1;
	cout << i1 * (i1 = ((1 << i1) + 1) );
	// bit 로 한칸씩 밀 때마다 2를 곱해준다 ( 이진수 이므로)
	return 0;
}