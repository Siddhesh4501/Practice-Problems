#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int> &nums){
    int n = nums.size();
    int subsetCnt = (1<<n);   //no. of subsets: pow(2,n);
    //:/    all subsets possible be like: 
        // 000 
        // 001
        // 010
        // 011
        // 100
        // 101
        // 110
        // 111
        //:* so for each subset iteration we can select the nums[i] if that Bit is On 
    vector<vector<int>> subsetsRes;
    for(int mask=0; mask<subsetCnt; mask++){
        vector<int> subset;
        for(int i=0; i<n; i++){
            if((mask & (1<<i)) != 0){     //means Bit is set at iTH
                subset.push_back(nums[i]);
            }
        }
        subsetsRes.push_back(subset);
    }
    cout<<"Size: " <<subsetsRes.size() <<endl;
    //:?   Time Complexity:  O(n * (2^n))    
    return subsetsRes;
}


int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>> v[i];
    }

    auto all_subsets = subsets(v);

    for(auto subset: all_subsets){
        for(int ele: subset){
            cout<<ele <<" ";
        }
        cout<<endl;
    }

    
    

    return 0;
}