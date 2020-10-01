#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <vector>
#include <set>
#include <queue>
#include <unordered_set>
#include <list>
#include<stdio.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fori(i,init,end) for(ll i=init;i<end;i++)
#define ford(i,init,end) for(ll i=init;i>=end;i--)
using namespace std;
ll powerfun(ll base,ll power)
{
    ll ans;
    if(power==1)
        return base;
    if(power&1)
        ans=base*powerfun(base*base,power/2);
    else
        ans=powerfun(base*base,power/2);
    return ans;
}

void Solveit()
{
    ll n;
    cout<<"enter the value of n";
    cin>>n;
}

int main()
{
    fastio;
    ll t;
    cin>>t;
    while(t--)
    {
        Solveit();
    }
    return 0;
}
