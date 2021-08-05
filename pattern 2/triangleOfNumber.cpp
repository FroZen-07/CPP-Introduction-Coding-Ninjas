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

		int j = 1;
        int k = i;
		while (j <= i) {
			cout << k;
            k++;
			j++;
		}

        k = 2 * i - 2;
        
        while(k >= i){
            cout<<k;
            k--;
           
        }



        cout<<endl;
        i++;

	
	}
}
