#include <iostream>
using namespace std;

int main() {
	char c;
    int ca = 0;
    int cd = 0;
    int cc = 0;
    c = cin.get();
    
    while(c != '$'){
        if(c >= 'a' && c <= 'z'){
            ca++;
        }
        else if(c >= '0' && c <= '9'){
            cd++;
        }
        else if (c == ' ' || c == '\t' || c == '\n'){
            cc++;
        }
        c = cin.get();

    }    

    cout<<ca<<" "<<cd<<" "<<cc<<endl;

    return 0;
}
