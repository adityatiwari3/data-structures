#include <iostream>
#define ll long long
using namespace std;
/*functions in linked list
   to print Linkedlist
   to add elements : push_back,push_front
   to remove elements : pop_back,pop_front
   to check empytiness: isEmpty()
   to check size: size()
 */
class Linkedlist
{
public:
    ll data;
    Linkedlist *address;
    Linkedlist(ll data)
    {
        this->data=data;
        address=NULL;
    }
    void push_back(ll data,Linkedlist *&tail)
    {
        Linkedlist *node=new Linkedlist(data);
        tail->address=node;
        tail=tail->address;
    }
    void push_front(ll data,Linkedlist *&root)
    {
        Linkedlist *node=new Linkedlist(data);
        node->address=root;
        root=node;
    }
};
 
 
void printLinkedlist(Linkedlist *root)//address of starting of linkedlist
{
    Linkedlist *temp=root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->address;
    }
}
ll size(Linkedlist *root)
{
    ll count=0;
    Linkedlist *temp=root;
    while(temp!=NULL)
    {
        temp=temp->address;
        count++;
    }
    return count;
}
int main()
{
    ll data,n,i;
    cin>>n>>data;
    Linkedlist *root=new Linkedlist(data);
    Linkedlist *tail=root;
    for(i=0;i<n-1;i++)
    {
        ll data;
        cin>>data;
        tail->push_back(data,tail);    //pushing element from back
    }
    cin>>data;                         //pushing element in front
    root->push_front(data,root);
    printLinkedlist(root);
    cout<<"\n";
    ll sizeofLinkedlist=size(root);    //giving size of linkedlist
    cout<<sizeofLinkedlist<<"\n";
 
    return 0;
 
}
