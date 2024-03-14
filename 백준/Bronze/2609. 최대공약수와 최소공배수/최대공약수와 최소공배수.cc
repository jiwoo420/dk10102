#include <stdio.h>

int main()
{
    int a,b,n,m;
    a=0;
    scanf("%d %d",&n,&m);
    
    for(int i=n;i>0;i--){
        if(n%i==0 && m%i==0){
            if(a<i){
                a=i;
                printf("%d\n",a);
                
            }
            
            
        }
    }
    
    b=(n/a)*(m/a)*a;
    printf("%d",b);
    
    
    
 
    return 0;
}
