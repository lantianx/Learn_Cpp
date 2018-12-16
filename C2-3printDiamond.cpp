#include<pch.h>
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "ÇëÊäÈëÕûÊýn";
	cin >> n;
	for (int i = 1; i <= (2 * n - 1); i++) {
		if (i <= n) {
			int k = 1;
			int j = 1;
			while (j <= n - i) {
				cout << ' ';
				j++;
			}
			while (k <= 2 * i - 1) {
				cout << '*';
				k++;
			}
			cout << endl;
		}
		else if (i > n) {
			int k = 1;
			int j = 1;
			while (j <= i - n) {
				cout << ' ';
				j++;
			}
			while (k <= 4 * n - 2*i - 1) {
				cout << '*';
				k++;
			}
			if(i!=2*n-1)
			cout << endl;
		}
	}
 	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
