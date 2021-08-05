#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){

        int space = 1;
        while(space <= (n-i)){
            cout<<" ";
            space++;
        }
        int j = 1;
        while(j <= ((2*i) - 1)){
            cout<<"*";
            j++;
        }
        cout<<endl;

    }
	return 0;
}