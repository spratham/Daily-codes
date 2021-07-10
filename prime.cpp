#include<iostream>
using namespace std;
int main()
{
    int no, i;
    
    cin>>no;
    for(i=2;i<no;i++)
    {
        if(no%i==0)
         break;
        
    }
    if(no==i) 
    {
        cout<<"\n"<<"prime ";
    }
    else
    {
        cout<<"\n"<<"non";
    }
    return 0;
}