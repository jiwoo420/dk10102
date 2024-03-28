#define ll long long 
#include <algorithm>
#include <iostream>
using namespace std;
ll ar[10000009];
ll br[10000009];


int main()
{
    
    ll a,b,i,t;
    
    ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
    
    
    
    
    cin >> a >> b;
    
    for(i=0;i<a;i++){
        cin >> ar[i];
    }
    
    for(i=0;i<b;i++){
        cin >> br[i];
    }
    
    for(i=a;i<b+a;i++){ 
        ar[i]=br[i-a];
    }
    
    t=a+b;
    
    sort(ar,ar+t);
    
    
    for(i=0;i<a+b;i++){
       cout << ar[i] <<" ";
    }
    
    
    
    return 0;
}