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
 
class tree
{
public:
    ll data;
    tree* l;
    tree* r;
    tree ()
    {
        this->l=NULL;
        this->r=NULL;
    }
     void push(ll data,tree *&root)
    {
        tree * p=new tree();
        p->data=data;
        tree *temp=root;
        tree *prev=root;
        if(temp==NULL)
        {
            root=p;
        }
        else
        {
            while(temp!=NULL)
            {
                if((temp->data)> (data))
                {
                    prev=temp;
                    temp=temp->l;
                }
                else
                {
                    prev=temp;
                    temp=temp->r;
                }
            }
            if((prev->data)>(data))
            {
                prev->l=p;
            }
            else
            {
                prev->r=p;
            }
        }
    }

    
    
    
    void front(tree *root)
    {
        cout<<root->data<<" ";
    }
    void printit(tree *root)
    {
        if(root==NULL)
        {
            return;
        }
        printit(root->l);
        cout<<root->data<<" ";
        printit(root->r);
       // cout<<temp->data<<" ";
    }
    
};
 

 int main()
 {
     fastio;
     tree *root=NULL;
     ll n;
     cin>>n;
     fori(i,0,n)
     {
         ll data;
         cin>>data;
         root->push(data,root);
     }
     root->printit(root);
     cout<<"\n";
     return 0;
 }

