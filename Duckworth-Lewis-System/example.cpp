/******************************************
* AUTHOR : HARSHIT SHUKLA *
* NICK : _HaShashin_ *
* INSTITUTION : IIT(BHU) VARANASI *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second
void fastscan(int &number) 
{ 
    bool negative = false; 
    register int c; 
    number = 0; 
    c = getchar(); 
    if (c=='-') 
    { 
         
        negative = true; 
  
         
        c = getchar(); 
    }    
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
    if (negative) 
        number *= -1; 
} 
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
//ios_base& scientific (ios_base& str);

#ifndef ONLINE_JUDGE
// for getting input from input.txt
freopen("input.txt", "r", stdin);
// for writing output to output.txt
freopen("output.txt", "w", stdout);
#endif

return 0;
}