#include <stdio.h>

int main(void) {
	int A,B,T, C=1;
	scanf("%d",&T);
	while(T--) {
		scanf("%d %d",&A,&B);
		printf("Case #%d: %d + %d = %d\n",C++,A,B,A+B);
	}
}
