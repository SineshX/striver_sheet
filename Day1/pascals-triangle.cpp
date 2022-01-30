#include <iostream>
#include <vector>
using namespace std;

void print2DVector(vector<vector<int>> vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> vect(numRows);

    for (int i = 0; i < numRows; i++)
    {
        vect[i].resize(i + 1);
        vect[i][0] = vect[i][i] = 1;
        int  k = i/2;
        for (int j = 1; j <= k; j++)
        {
            vect[i][j] = vect[i - 1][j - 1] + vect[i - 1][j];
            // + mirror me update
            vect[i][i-j] = vect[i - 1][j - 1] + vect[i - 1][j];
        }
        
    }

    return vect;
}

int main()
{
    print2DVector(generate(5));
}
