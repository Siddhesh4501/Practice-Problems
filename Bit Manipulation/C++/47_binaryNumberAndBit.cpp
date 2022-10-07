#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<INT_MAX <<endl;
    // int a = (1 << 32) - 1;  //:*  this calculation is giving errors bcoz, (1 << 32) is 33 bits long, and can't be stored in Mall for long time.  

    //? Variables like INT are Signed by default, so MSB bit is used for storing the Sign 

    int a = (1LL << 32) - 1;    //? will cause overflow bcoz in 'int' dataType only 31 bits can be used for storing as MSB bit is reserved for Sign
    cout<<a <<endl;
    
    unsigned int b = (1ll << 32)-1;
    cout<<b <<endl;

    

    return 0;
}