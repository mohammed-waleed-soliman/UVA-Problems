#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll ntimes;
    scanf("%lld", &ntimes);
    while (ntimes--)
    {
        ll a, b;
        scanf("%lld %lld", &a, &b);
        if(a>b) printf(">\n");
        else if(a<b) printf("<\n");
        else printf("=\n");
    }
}
