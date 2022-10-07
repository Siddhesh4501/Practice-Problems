// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stack>
#include <climits>
using namespace std;

int histogram(vector<int> &heights)
{
    int n = heights.size();
    vector<int> nsl(n), psl(n);

    stack<int> s;

    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && heights[s.top()] >= heights[i])
        {
            s.pop();
        }
        nsl[i] = s.empty() ? n : s.top();
        s.push(i);
    }

    while (!s.empty())
    {
        s.pop();
    }

    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && heights[s.top()] >= heights[i])
        {
            s.pop();
        }
        psl[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }

    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, (nsl[i] - psl[i] - 1) * (heights[i]));
    }

    return ans;
}

int maximalRectangle(vector<vector<char>> &matrix)
{

    int n = matrix.size();

    if (n == 0)
    {
        return 0;
    }

    int m = matrix[0].size();

    int dup[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == '0')
            {
                dup[i][j] = 0;
            }
            else
            {
                dup[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            continue;

        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == '1')
            {
                dup[i][j] = 1 + dup[i - 1][j];
            }
            else
            {
                dup[i][j] = 0;
            }
        }
    }

    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        vector<int> each_row;
        for (int j = 0; j < m; j++)
        {
            each_row.push_back(dup[i][j]);
        }

        ans = max(ans, histogram(each_row));
    }

    return ans;
}
int main()
{
    vector<vector<char>> matrix{{'1', '0', '1', '0', '0'},
                                {'1', '0', '1', '1', '1'},
                                {'1', '1', '1', '1', '1'},
                                {'1', '0', '0', '1', '0'}};

    cout << "ANSWER: " << maximalRectangle(matrix);
    return 0;
}

/*
Output: 
ANSWER: 6
*/