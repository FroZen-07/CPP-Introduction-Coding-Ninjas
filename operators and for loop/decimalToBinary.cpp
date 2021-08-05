#include<iostream>
using namespace std;

int main() {
	long int n;
    cin>>n;
    
    long int sum = 0;
    int pow = 1;

    while(n > 0){
        int r = n % 2;
        n = n / 2;
        sum += r * pow;
        pow = pow * 10;
    }
    cout<<sum<<endl;
    
    
    return 0;
	
}
