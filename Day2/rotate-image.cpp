#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

#define ll long long
#define mod 1000000007

// pasete class solution

class Solution
{
public:
    void print2DVector(vector<vector<int>> vect)
    { // Number of rows;
        int m = vect.size();
        // Number of columns
        int n = vect[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                cout << vect[i][j] << " ";
            cout << endl;
        }
    }
    void rotate(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        if( m < 2) return;

        // vector<vector<int>> ans(m,n);
    // no of rotation
        for (int i = 0; i < m/2; i++)
        {
            for (int j = i; j < n-i-1; j++ )
            {
                // perform rotation 
                // 4 rotation 
                int temp = matrix[j][n-i-1];
                matrix[j][n-i-1] = matrix[i][j];


                int temp2 = matrix[n-i-1][n-j-1];
                matrix[n-i-1][n-j-1] = temp;

                temp = matrix[n-j-1][i];
                matrix[n-j-1][i] = temp2;

                matrix[i][j] = temp;



            }
        }

    }
};

int main()
{
    /* vector<vector<int>> matrix{{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}}; */

    vector<vector<int>> matrix{
        {5,1,9,11},
        {2,4,8,10},
        {13,3,6,7},
        {15,14,12,16} 
    };

    Solution s;
    s.rotate(matrix);
     s.print2DVector(matrix);
    
    return 0;
}
