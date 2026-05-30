#include<bits/stdc++.h>
using namespace std;
int n;
bool isPrime(int CheckPrime) {
    if(CheckPrime<2)     return 0;
    if(CheckPrime==2)    return 1;
    if(CheckPrime%2==0)  return 0;    //这里跳过2的倍数来加快速度
    for(int i=3;i*i<=CheckPrime;i+=2)
    {
        if(CheckPrime%i==0) return 0;
    }
    return 1;
}
int main()
{
    cin>>n;
    if(isPrime(n)) cout<<"Yes"<<endl;
    else           cout<<"No"<<endl;
    return 0;
}
