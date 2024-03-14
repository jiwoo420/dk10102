#include <stdio.h>
#define ll long long
int main()
{
    ll a,b,n,m;
    a=0;
    scanf("%lld %lld",&n,&m);
    
    for(int i=n;i>0;i--){
        if(n%i==0 && m%i==0){
            if(a<i){
                a=i;
                
                
            }
            
            
        }
    }
    
    b=(n/a)*(m/a)*a;
    printf("%lld",b);
    
    
    
 
    return 0;
}
