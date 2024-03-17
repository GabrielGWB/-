#include<iostream>
#include<stdlib.h>
using namespace std;

int n, m, i, j;
long long k = 0, x;
struct pp {
	int num, sum;
	long long sit;
}a[100005];

int main() {
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		cin >> x >> j;
		a[i].num = j;
		a[i].sit = x;
		a[i].sum = j;
	}
	for (i = n - 1; i >= 0; i--) {
		j = 1;
		while (i - j >= 0) {
			if (a[i].sit - a[i - j].sit < m) {
				a[i - j].sum += a[i].num;
				j++;
			}
			else {
				break;
			}
		}
	}
	for (i = 0; i < n; i++) {
		if (a[i].sum > k)
			k = a[i].sum;
	}
	cout << k;
}