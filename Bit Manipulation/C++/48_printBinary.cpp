#include<bits/stdc++.h>
using namespace std;

//:?    this function() will convert the Decimal Number to Binary       
void printBinary(int num){
    for(int i=10; i>=0; i--){
        cout<<((num>>i) & 1);
    }    
    cout<<endl;
}

int main(){
    int n=9;
    printBinary(n);

    //:?    checking for iTH bit    
    int i = 0;
    if((n & (1<<i)) != 0){
        cout<<"Set Bit" <<endl;
    }else{
        cout<<"Unset Bit" <<endl;
    }


    //:?    Setting iTH bit    
    // #   to SET a bit at iTH position we use '|'
    //     ex:     100000
    //          |  000100    (can be obtained by: 1<<2  || 1<<n)
    //            --------
    //             100100
            
    // printBinary(n | (1<<1));

    n = 25;
    cout<<n <<endl;
    printBinary(n);
    // printBinary(~n);

    //? will set the 2nd bit
    printBinary(n | (1<<2));

    //? will unset the 3rd bit
    printBinary(n & (~(1<<3)));
    
    //? to toggle the 0th bit
    printBinary(n ^ (1<<0));



    //:?    to count no. of SET bits, we check each bit using a loop     
    //* i'm running a loop from i=31 to i=0, because, int is of 32 bits in general
    int count = 0;
    for(int i=31; i>=0; i--){
        if(n & (1<<i)){ count++; }
    }
    cout<<"Set bit count: " <<count <<endl;
        
    //? theres also inbuilt function for the count
    cout<<__builtin_popcount(n) <<endl; //? will work only with INT

    //?this will also work with long long
    cout<<__builtin_popcountll((1ll << 35) - 1) <<endl;

    

    return 0;
}