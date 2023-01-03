#include <iostream>
using namespace std;
long long sumoffactorial(int n) {
	long long factorial = 1;
	long long sum = 0;
	for (int i = 1; i <= n; i++) {
		factorial *= i;
		sum += factorial;
	
	}
	return sum;
}
int main() {
	int n;
	cout << "Nhap mot so bat ky";
	cin >> n;
	cout << sumoffactorial(n);
	return 0;
}
