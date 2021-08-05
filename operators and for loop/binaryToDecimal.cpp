#include<iostream>
using namespace std;

int main() {
	long int n;
    cin>>n;
    
    int sum = 0;
    int pow = 1;

    while(n > 0){
        int r = n % 10;
        n = n / 10;
        sum += r * pow;
        pow = pow * 2;
    }
    cout<<sum<<endl;
    
    
    return 0;
	
}
