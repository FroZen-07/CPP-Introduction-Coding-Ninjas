#include <iostream>
using namespace std;

int main() {
	int a = 0;
    int b = 1;
    int n;
    cin>>n;
    int f;

    for(int i = 1; i <= n; i++){
        f = a + b;
        a = b;
        b = f;
    }

    cout<<a<<endl;

    return 0;
}
