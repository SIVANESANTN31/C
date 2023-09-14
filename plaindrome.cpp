#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
string S;

cout<<"enter the string:";
cin>>S;
string P = S;		
reverse(P.begin(), P.end());
if(S==P)
{
cout<<"palindrome";
}
else
{
cout<<" not a palindrome";
}
return 0;		
}
