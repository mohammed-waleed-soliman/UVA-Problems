#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int ntimes, i = 0;;
    scanf("%lld", &ntimes);
    while (ntimes--)
    {
        ll a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        printf("Case %lld: ", ++i);
        if(a<=20 && b<=20 && c<=20) printf("good\n");
        else printf("bad\n");
    }
    
}
