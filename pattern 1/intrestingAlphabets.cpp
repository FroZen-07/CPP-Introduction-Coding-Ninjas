#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        char startChar = 'A' + n - i;
        for(int j = 1; j <= i; j++){
            char ch = startChar + j - 1;
            cout<<ch;
        }
        cout<<endl;
    }
	return 0;
}