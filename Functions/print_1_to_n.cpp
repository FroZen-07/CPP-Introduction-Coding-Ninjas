#include<iostream>
using namespace std;

void print(int n) {
    int i = 1;
    while(i <= n) {
        cout<<i<<endl;
        i++;
    }
}

int main () {
    int n;
    cin >> n;
    print(n);
}