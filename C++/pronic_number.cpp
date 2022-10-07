#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=sqrt(n);
    if(k*(k+1)==n)
     cout<<"Pronic Number"<<endl;
    else
      cout<<"Not a Pronic Number"<<endl;
    return 0;
}