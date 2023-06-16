#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,b,flag=0;
    cin>>n>>b;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]&a[j])==b)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    cin >> TC;
    cin.ignore();
    while (TC--) solve();
}