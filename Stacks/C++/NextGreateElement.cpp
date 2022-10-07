/*
problem statement find the next greater element in the array 
sample input:
5
1 8 9 10 7
output:
8 9 10 -1 -1

NEXT SMALLER ELEMENTS
5
1 8 9 10 7
output:
-1 7 7 7 -1



*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// next greate element 
vector<int> NGE(vector<int> arr)
{
    vector<int> ans;
    stack<int>st;
     for(int i=arr.size()-1;i>=0;i--)
     {
        if(st.empty()) ans.push_back(-1);
        else 
        {
            while(!st.empty() and st.top()<=arr[i]) st.pop();
            if(!st.empty()) ans.push_back(st.top());
            else ans.push_back(-1);
        }
        st.push(arr[i]);
     }
     reverse(ans.begin(),ans.end());
     for(auto it:ans) cout<<it<<" ";
     return ans;

}
// next smaller element
vector<int> NSE(vector<int>arr){
     vector<int> ans;
    stack<int>st;
     for(int i=arr.size()-1;i>=0;i--)
     {
        if(st.empty()) ans.push_back(-1);
        else 
        {
            while(!st.empty() and st.top()>=arr[i]) st.pop();
            if(!st.empty()) ans.push_back(st.top());
            else ans.push_back(-1);
        }
        st.push(arr[i]);
     }
     reverse(ans.begin(),ans.end());
     for(auto it:ans) cout<<it<<" ";
     return ans;

}
int main() {
    int n;
    cin>>n;
    // enter the size of the array
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }   
    NGE(arr); //next greate element funtion 
    cout<<endl;
   NSE(arr); // next smaller element funtion

     
 return 0; }