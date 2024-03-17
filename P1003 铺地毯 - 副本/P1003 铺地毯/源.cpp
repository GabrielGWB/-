#include<iostream>
using namespace std;
int** p, i, j;
int main() {
	p = (int**)malloc(sizeof(int) * 100000);
	for (i = 0; i < 100000; i++) {
		p[i] = (int*)malloc(sizeof(int) * 100000);
		for (j = 0; j < 100000; j++) {
			p[i][j] = 0;
		}
	}

	int n,
}
