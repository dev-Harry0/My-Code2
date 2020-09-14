#include <bits/stdc++.h>
using namespace std;
#define forn(i,l,n) for(int i = int(l);i<int(n);i++)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<string>v(k);
        vector<string>v1(k);

        string s;
        forn(i,0,k){
        v[i]="";
        v1[i]="";
        }
        cin>>s;
        sort(s.begin(),s.end());
        if(k==1)
        {
            cout<<s<<endl;
            continue;
        }
        if(k==n)
        {
            cout<<s[n-1]<<endl;
            continue;
        }
        forn(i,0,k)
        {
            v[i]+=s[i];
            v1[i]+=s[i];
        }
        forn(i,k,n){
        v[0]+=s[i];
        v1[i%k]+=s[i];
        }
        sort(v.begin(), v.end());
        sort(v1.begin(), v1.end());
        cout<<min(v[k-1],v1[k-1])<<endl;
    }
}