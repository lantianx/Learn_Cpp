#include "pch.h"
#include <iostream>
#include<string>
using namespace std;

int main()
{
	string bin;
	cin >> bin;
	int dec = 0;
	int bin_length = bin.length();
	for (int i = 0; i < bin_length; i++) {
		dec += (bin[i] == '1') ? (1 << bin_length - i - 1) : 0;
	}
	cout << dec;
	return 0;
}