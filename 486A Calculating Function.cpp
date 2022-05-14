#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    int i;
    long long total;
    /*
    for(i=1;i<=n;i++)
    {
       // total = total + pow(-1,i)*i; // TIME LIMIT EXCEEDS

    }
    */

    if(n%2==0){total = n/2;}
    else {total = -(n+1)/2;}


    cout<<total<<endl;


    return 0;
}


