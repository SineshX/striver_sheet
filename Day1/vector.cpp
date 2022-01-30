#include<iostream>
#include<vector>
using namespace std;

int main()
{   
    vector<vector<int>> vect;
    
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }   
        cout << endl;
    }
    cout<<endl;
    return 0;
}