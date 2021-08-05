#include <iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    int choice;
    cin>>choice;
    int sum = 0;
    int pdt = 1;

    for(int i = 1; i <= n; i++){
        if(choice == 1){
            sum += i;
        } else if(choice == 2){
            pdt *= i;
        }
    }
        if(choice == 1){
            cout<<sum<<endl;
        } else if(choice == 2){
            cout<<pdt<<endl;
        }else {
            cout<<"-1"<<endl;
        }


    return 0;
}
