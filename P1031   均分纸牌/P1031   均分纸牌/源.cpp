#include<iostream>
using namespace std;
int a[105], n, i, k=0, sum = 0;
int os(int n, int sum, int a[]) {
	int p = sum / n;
	for (i = 0; i < n; i++) {
		if (a[i] + a[i + 1] > 2 * p&&(!(a[i]>p&&a[i+1]>p)))
		{
			k++;
			i++;
		}
		else {
			k += 2;
			i++;
		}
	}
	return k;
}
int main() {
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	k = os(n, sum, a);
	cout << k;
}