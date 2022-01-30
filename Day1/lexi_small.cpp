#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    // result
    string result = "";
    //case 1
    if(k == 1)
    {
        if(n==1)
        {
            cout<<"a"<<endl;
        }else{
            cout<<-1<<endl;
        }
        return;
    }

    //case 2
    if(k > n)
    {
        cout<<-1<<endl;
        return;
    }

    //rest of the cases
    char trn = 'a';

    for(int i = 0; i <  n - (k-2) ; i++)
    {
        result = result + trn;
        //alternet 
        if(trn == 'a')
        {
            trn = 'b';
        }else{
            trn = 'a';
        }
    }
    
    trn = 'c';
    //rest of the length // to add all the compulsury char from alphabet
    for(int i = n - (k-2); i < n; i++)
    {
        result = result + trn;
        trn++;
    }
    
    cout<<result<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;

    cin>>test;

    while(test--)
    {
        solve();
    }
    return 0;
}
