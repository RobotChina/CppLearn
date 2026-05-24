#include<bits/stdc++.h>
using namespace std;
int x;
bool isPrime(int n) {
    if(n<2)     return false;
    if(n==2)    return true;
    if(n%2==0)  return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    cin>>x;
    if(isPrime(x)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
