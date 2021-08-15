#include<iostream>
#include<math.h>
using namespace std;

int factorial(int n) {
    int fact = 1;
    int i =1;
    while(i <= n) {
        fact *= i;
        i++;
    }
    return fact;
}

int main () {
    int n, r;
    cin>>n>>r;

    cout << factorial(n) / (factorial(r) * factorial(n-r)) << endl;



    // int fact_n = 1; 
    // int i= 1;
    // while( i <= n) {
    //     fact_n *= i;
    //     i++;
    // }

    // int fact_r = 1; 
    // i= 1;
    // while( i <= r) {
    //     fact_r *= i;
    //     i++;
    // }

    // int fact_n_r = 1; 
    // i= 1;
    // while( i <= n-r) {
    //     fact_n_r *= i;
    //     i++;
    // }
    

    // int ncr = fact_n / (fact_r * fact_n_r);
    // cout<<ncr<<endl;

    
    return 0;
}