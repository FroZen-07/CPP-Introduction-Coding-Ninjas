#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    int i = 1;
    for(; i*i < n; i++){
        continue;
    }
    
    if(i*i == n){
        cout<<i<<endl;
    }else {
        cout<<i-1<<endl;
    }
    
	
}
