#include <stdio.h>
using namespace std;
#define ll long long
#include <algorithm>
#include <iostream>
ll a[10000009];



int main()
{   
    ll n;
    ll k;
    
   
    cin >> n >>k;
    
    ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

    
    for(int i=0;i<n;i++){
        cin >> a[i];
       
    }
    
    sort(a,a+n);
    
    
        cout << a[k-1] << '\n';
    
    

    return 0;
}
