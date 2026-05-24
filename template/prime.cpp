#include<bits/stdc++.h>
using namespace std;
int n;
bool isprime(int x)
{
    if(x<2) return 0;
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return 0;
    }
    return 1;
}
int main()
{
    cin>>n;
    if(isprime(n)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
