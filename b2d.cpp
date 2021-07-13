#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1, s=0,n;
    cin>>n;
    while(n>0)
    {
        int y=(n%10);
        s+=i*y;
        i*=2;
        n/=10;
    }
    cout<<s;
return 0;
}