#include <iostream>
using namespace std;

int main() {
	int x;
    cin>>x;
    int n;
    int count = 1;
    int i = 1;
    while(count <= x){
        n = 3 * i + 2;
        i++;

        if(n % 4 == 0){
            continue;
        }else {
            cout<< n <<" ";
            count++;
        }
        
    }


        
    
    

    return 0;
}
