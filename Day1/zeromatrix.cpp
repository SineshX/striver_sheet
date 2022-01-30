#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
using namespace std;
#define ll long long
#define mod 1000000007

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

void solve()
{
    vector<vector<int>> vect{
        {1, 5, 4, 0, 8},
        {6, 7, 2, 8, 8},
        {4, 2, 4, 5, 5},
        {0, 2, 5, 0, 9}};

    print2DVector(vect);
    // Number of rows;
    int m = vect.size();
    // Number of columns
    int n = vect[0].size();

    set<int> s;
    set<int> s2;
    // zero vector
    // vector<int> v(m, 0); //zero vector
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vect[i][j] == 0)
            {   //store and do it later 
                s2.insert(i);
                s.insert(j);
                
            }
        }
    }

    // make row zero
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        int j = *it;
        // cout << j << endl;
        int x = m;
        while (x--)
        {
            vect[x][j] = 0;
        }
    }
    //for given set of row
    for (it = s2.begin(); it != s2.end(); it++)
    {
        int i = *it;
        // cout << j << endl;
        // make every column
        int x = n;
        while (x--)
        {
            vect[i][x] = 0;
        }
    }


    print2DVector(vect);
}
int main()
{
    //     ios_base::sync_with_stdio(false);
    //     cin.tie(NULL);
    //     cout.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ll test = 1;
    // cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
