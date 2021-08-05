#include<iostream>
using namespace std;

int main(){
    int s, w, e;
    cin>>s>>e>>w;
    int i = s;

    while(i <= e){
        int c = ((i - 32)*5)/9;
        cout<<i<<"\t"<<c<<endl;
        i = i + w;
    }



	return 0;
}