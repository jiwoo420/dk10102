#include<stdio.h>
#define ll long long


ll gcd(ll a,ll b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b); 
}


int main() {
	

	ll a, b;
	
	scanf("%lld %lld", &a, &b);
	
	ll answer = gcd(a, b);
	
	for (int i = 0; i < answer; i++) {
		printf("1");
	}
	
	return 0;

}