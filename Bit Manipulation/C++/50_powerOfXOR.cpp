#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=4, b=6;

    a = a^b;
    b = b^a;     //equivalent to:   b = b^(a^b)    and we know b^b will be zero, so a^0 will ultimately be 'a'
    a = a^b;     //equivalent to:   a = (a^b)^a     //? since b's value in previous step was changed to a 

    cout<<"a: " <<a <<"\nb: " <<b <<endl;

    

    return 0;
}