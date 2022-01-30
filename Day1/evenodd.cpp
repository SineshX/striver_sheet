#include<iostream>
using namespace std;

int main()
{
    int n = 2;
    if((n&1))
    {
        cout<<"even"<<endl;
    }else{
        cout<<"odd"<<endl;
    }
    cout<<endl;
    return 0;
}