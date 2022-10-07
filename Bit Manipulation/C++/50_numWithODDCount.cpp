#include<bits/stdc++.h>
using namespace std;

/***
 *  Given array of a integers. All integers
 *  are present in Even count except one.
 *  Find that one integer which has ODD Count
 *  in O(N) Time and O(1) Space complexity
 * 
 *  N < 10^5
 *  a[i] < 10^5
 * 
**/

//:?    we can solve this problem using hashing, in O(N) Time complexity in this way, but not in O(1), Space Complexity    


int main(){
    //:/    the concept used is all integers with even count, upon XORing will become zero except the one with Odd count, and it will be left    
    
    int n, val, res=0;
    cin>>n;

    while(n--){
        cin>>val;
        res = res^val;
    }
    
    cout<<"Odd count no. is: " <<res <<endl;


    return 0;
}