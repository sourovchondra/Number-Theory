#include <bits/stdc++.h>
using namespace std;
#define el '\n'

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mem(a,b) memset(a,b,sizeof(a))

const int mx=2e5+123;
int cnt[mx];

int main()
{
    int lim;cin>>lim;
    for(int i=1;i<=lim;i++)
    {
        for(int j=i;j<=lim;j+=i)
        {
            cnt[j]++;
        }
    }
    for(int i=1;i<=lim;i++)
        cout<<i<<' '<<cnt[i]<<el;

    
    return 0;
        
}


    
    

    