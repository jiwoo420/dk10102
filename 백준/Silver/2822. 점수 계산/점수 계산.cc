#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int
main ()
{
  int a[8];
  int b[8];
  int i, k, sc = 0;


  for (i = 0; i < 8; i++)
	{
	  scanf ("%d", &a[i]); //입력받기기
	}
	

    for(i=0; i<8;i++){
        b[i]=a[i];      //몇번째인지 찾기 위한 정렬전 배열 b
    }


    
    //정렬해서 합한거 출력력
    sort (a, a + 8, greater < int >());
    
    for (i = 0; i < 5; i++)
	{
	  sc += a[i];
	  
	}

    
    printf("%d\n",sc);
    
    
    k=a[4]; //5번재 기준 k보다 크거나 같은거 몇번쨰인지 출력력
    
    for(i=0;i<8;i++){
        if(b[i]>=k){
            printf("%d ",i+1);
        }
    }
    
    
  





  return 0;
}
