#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sumEven = 0;
    int sumOdd = 0;
    while(n > 0){
        int rem = n % 10;
        n = n / 10;
        if(rem % 2 == 0){
            sumEven += rem;
        }else {
            sumOdd += rem;
        }
    }

    cout<<sumEven<<" "<<sumOdd<<endl;

	return 0;
}