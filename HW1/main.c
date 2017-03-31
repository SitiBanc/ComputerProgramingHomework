#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int m,n,d,a,b;
	printf("請輸入高(m)");
	scanf("%d",&m);
	printf("請輸入寬(n)");
	scanf("%d",&n);
	printf("請輸入厚度(d)");
	scanf("%d",&d);
	for(a=0;a<d;a++){
		for(b=0;b<n;b++){
			printf("*");
		}
		printf("\n");
	}
	for(a=0;a<m-2*d;a++){
		for(b=0;b<d;b++){
			printf("*");
		}
		for(b=0;b<n-2*d;b++){
			printf(" ");
		}
		for(b=0;b<d;b++){
			printf("*");
		}
		printf("\n");
	}
	for(a=0;a<d;a++){
		for(b=0;b<n;b++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
