#include <iostream>
using namespace std;
int main() {
	int t,a,b,l;
	cin >> t;
	while(t--) {
		
        l = 1;
		cin >> a >> b;
		b=!(b%4)?4:b%4;
		while (b--)l *= a;
		cout << (l%10?l%10:10) << "\n";
	}
}