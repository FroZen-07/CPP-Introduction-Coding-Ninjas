#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    int rev = 0;
    if(n == 0){
        cout<< n;
    }
    else{
        while(n > 0){
        int r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
        while(rev % 10 == 0){
            rev =  rev / 10;
        }
			cout<< rev;
    } 
    
    
    return 0;
	
}
