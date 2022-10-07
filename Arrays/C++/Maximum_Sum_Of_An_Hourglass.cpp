/*
2428. Maximum Sum of an Hourglass
https://leetcode.com/problems/maximum-sum-of-an-hourglass/description/

You are given an m x n integer matrix grid.

We define an hourglass as a part of the matrix with the following form:


Return the maximum sum of the elements of an hourglass.

Note that an hourglass cannot be rotated and must be entirely contained within the matrix.

 

Example 1:
Input: grid = [[6,2,1,3],[4,2,1,5],[9,2,8,7],[4,1,2,9]]
Output: 30
Explanation: The cells shown above represent the hourglass with the maximum sum: 6 + 2 + 1 + 2 + 9 + 2 + 8 = 30.


Example 2:
Input: grid = [[1,2,3],[4,5,6],[7,8,9]]
Output: 35
Explanation: There is only one hourglass in the matrix, with the sum: 1 + 2 + 3 + 5 + 7 + 8 + 9 = 35.
*/
class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int ans=0,temp;
        for(int i=1;i<grid.size()-1;i++){
            for(int j=1;j<grid[i].size()-1;j++){
                temp=grid[i][j]+grid[i-1][j]+grid[i-1][j-1]+grid[i-1][j+1]+grid[i+1][j]+grid[i+1][j+1]+grid[i+1][j-1];
                ans=max(temp,ans);
                temp=0;
            }
        }
        return ans;
    }
};