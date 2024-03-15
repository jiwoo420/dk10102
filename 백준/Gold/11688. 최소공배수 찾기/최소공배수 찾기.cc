#include <stdio.h>
#define ll long long
int main()
{
    ll a,b,n,m,t,x,l,k,i;
    a=0;
    scanf("%lld %lld %lld",&n,&m,&l);
    
    for(i=n;i>0;i--){
        if(n%i==0 && m%i==0){
            if(a<i){
                a=i;
                
                
            }
            
            
        }
    }
    
    b=(n/a)*(m/a)*a; //b는 a와 b의 최소 공배수
    
    
    if(l%b!=0){
        
        printf("-1");
    }
    else{
        x=l/b;
        k=x;
        
        for(i=2;i<1000001;i++){
            while( x%i==0 && (a%i==0 || b%i==0)){
                k*=i;
                
                if(a%i==0){
                    a/=i;
                }
            
                if(b%i==0){
                    b/=i;
                }
                
            }
            
            
        }
        
        printf("%lld",k);
    }
    
    
    
 
    return 0;
}
