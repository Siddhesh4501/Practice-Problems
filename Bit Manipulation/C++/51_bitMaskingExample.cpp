#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    /// 1-based indexing

    vector<int> masks(n+1, 0);
    for(int i=1; i<=n; i++){
        int numDays;  //position of days for the worker
        cin>>numDays;

        int day; //day on which worker will be working
        for(int j=0; j<numDays; j++){
            cin>>day;
            masks[i] = masks[i] | (1<<day);
        }
    }

    int maxCommonDays=INT_MIN, currCommon;
    int worker1, worker2;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j){ continue; }
            currCommon=0;
            int commonDayMap = masks[i]&masks[j];
            currCommon = __builtin_popcount(commonDayMap);
            if(currCommon > maxCommonDays){
                worker1=i;
                worker2=j;
                maxCommonDays = currCommon;
            }
        }
    }

    cout<<worker1 <<" " <<worker2 <<endl;
    cout<<maxCommonDays;

    return 0;
}






// #include<bits/stdc++.h>
// using namespace std;

// void printMask(int n){
//     for(int i=31; i>=0; i--){
//         cout<<((n >> i) & 1);
//     }
//     cout<<endl;
// }


// int main(){
//     int n, mask, day;
//     cin>>n;
//     vector<int> masks(n, 0);
//     for(int i=0; i<n; i++){
//         int num_workers;
//         cin>>num_workers;
//         mask = 0;
//         for(int j=0; j<num_workers; j++){
//             cin>>day;
//             mask = (mask | (1<<day));
//         }
//         masks[i] = mask;
//     }

//     // for(int i=0; i<n; i++){
//     //     printMask(masks[i]);
//     // }
       

//     int maxDays=0, p1=-1, p2=-1;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             int intersection = masks[i]&masks[j];
//             int common_days = __builtin_popcount(intersection);
//             // cout<<i <<" " <<j <<" " <<common_days <<endl;
//             if(common_days > maxDays){
//                 maxDays = common_days;
//                 p1=i;
//                 p2=j;
//             }
//         }
//     }

//     cout<<"MaxDays common: " <<maxDays <<" between Person:" <<(p1+1) <<" & Person:" <<(p2+1) <<endl;
    
       

//     return 0;
// }