#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int sum(0),ost(0);
	bool id = false;
	int a[3] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
		ost += a[i] % 3;
	}
	if (ost % 3 == 0) 
		for (int i = 0; i < 3; i++)
			sum += a[i] / 3;
	else {
		for (int i = 0; i < 3; i++)
			sum += a[i];
		sum /= 3;
	}
	cout << sum;
	return 0;
}