#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string k=s;
    reverse(k.begin(),k.end());
    if(s==k)
     cout<<"Palindrome string"<<endl;
    else
      cout<<"Not a Palindrome string"<<endl;
    return 0;
}