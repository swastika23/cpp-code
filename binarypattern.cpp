#include<iostream>
using namespace std;
int main()
{
    int a=1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<!(i%2);
        a=!(i%2);
        for(int j=0;j<i;j++)
        {
          if(a==0)
          {
              cout<<1<<" ";
              a=1;
          }
          else{
              cout<<0<<" ";
              a=0;
          }
        }
        cout<<"\n";
    }
}