#include <stdio.h>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int a[10];
ll i,j,f;

int main()
{
    
    
    scanf("%lld",&f);
    
    
    
    for(i=0;f/10>0;i++){
       a[i]=f%10;    // 배열에 숫자 넣기기 
        
       f=f/10;
    }
    
    a[i+1]=f;
    
    sort(a,a+i+2,greater<int>());
    
    
    for(j=0;j<=i;j++){
    
    printf("%d",a[j]);    
    }
    

    return 0;
}