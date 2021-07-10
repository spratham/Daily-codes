#inclde<iostream>
using namespace std;

int main()
{
    int rev=0, rem,n;
    cin>>n ;
    while(n>0);
    {
        rem=n%10;
        n=n/10;
        rev=(rev*10)+rem;
    }
        cout<<rev;
        return 0;

}