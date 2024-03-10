#include <stdio.h>
 
int main() {
 
    int a[100000];
    int tmp;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3-1; k++) {
                if (a[k] > a[k + 1]) { //a[k] < a[k+1] = 내림차순
                    tmp = a[k];
                    a[k] = a[k + 1];
                    a[k + 1] = tmp;
                }
            }
        }
 
        for (int i = 0; i < 3; i++) {
            printf("%d ", a[i]);
 
        }
}