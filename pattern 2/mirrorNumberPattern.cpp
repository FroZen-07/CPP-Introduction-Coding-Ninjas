#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		int spaces = 1;
		while (spaces <= n - i) {
			cout << ' ';
			spaces = spaces + 1;
		}

		int num = 1;
        int k = 1;
		while (num <= i) {
			cout << k;
			num++;
            k++;
		}
		cout << endl;
		i = i + 1;
	}
}
