#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x, n;
    cin>>x>>n;
    
    int i = 1;
    int pdt = 1;
    while(i <= n){
        pdt *= x;
        i++;
    }
    cout<<pdt<<endl;
    

	return 0;
}