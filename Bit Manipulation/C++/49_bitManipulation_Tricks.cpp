#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i=10; i>=0; i--){
        cout<<((num>>i) & 1);
    }
    cout<<endl;
}

int main(){

    //:/    ODD/ EVEN check     
    // for(int i=0; i<8; i++){
    //     printBinary(i);
    //     if(i&1){
    //         cout<<"Odd" <<endl;
    //     }else{
    //         cout<<"EVEN" <<endl;
    //     }
    // }
    //* as clearly observable that ODD no.s have their LSB as '1', while EVEN's have LSB as '0'


        //:/ # Multiply / Divide by 2^i      (pow(2,i))
        /// >>to Multiply a no. by 2^i, instead we can use:
        ///     (n << i);
        /// >>to Divide a no. by 2^i, instead we can use:
        ///     (n >> i);

        // int n=5, i=1;
        // cout<<"Divide(>>): " <<(n >> i) <<endl;
        // cout<<"Multiply(<<): " <<(n << i) <<endl;


        //:/    Upper - Lower Case conversion    
        // for(char c='a'; c<='e'; c++){
        //     cout<<c <<": ";
        //     printBinary(int(c));
            
        //     char d = c - ('a' - 'A');
        //     cout<<d <<": ";
        //     printBinary(int(d));
        // }
        //* as clearly observable that, 5TH bit is SET in case of LowerCase and  its UNSET in case of UpperCase, so we can Toggle to change the case
        // char A='A';

        // //?to set Lower case, we use
        // char a;
        // // a = A | (1<<5);
        // a = A | ' ';
        // cout<<a <<endl;
        
        // //?to set Upper case, we use
        // A='a';
        // // a = A & (~(1<<5));
        // // a = A & ~' ';
        // a = A & '_';
        // cout<<a <<endl;
        //:? also (1<<5) is equivalent to Space char (' '), so in above, we could use space char as well
        //:?    also NOTE that (~' ') is equivalent to ('_') UnderScore     


        //:/    Clear LSB   
        // int n=59;
        // printBinary(n);
        // int i = 4;
        // int b = (n & ~((1<<(i+1))-1));
        // printBinary(b);
        

        //:/    Clear MSB   
        // int n=59;
        // printBinary(n);
        // int i = 3;
        // int b = (n & ((1<<(i+1))-1));
        // printBinary(b);


        //:/    Check POWER of 2    
        int n;
        // n = 32;
        n = 31;
        if(n & (n-1)){
            cout<<"Not power of 2" <<endl;
        }
        else{
            cout<<"Power of 2" <<endl;
        }


    return 0;
}