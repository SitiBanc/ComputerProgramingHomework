#include <stdio.h>
#include <stdlib.h>

int main(){
	int index[550]={0};
	int i,j,k,step,sum;
	for(i=1;i<550;i++) {
		index[i]=1;
	}
	for(i=2;i<550;i=i+1){
		if(index[i]==1){
			step=i;
			for(j=i+step;j<=550;j=j+step){
				index[j]=0;
			}
		}
	}
	k=0;
	sum=0;
	for(i=2;i<=550;i++) {
		if(index[i]==1){
			k=k+1;
			sum+=i;
            printf("%d\t",i);
		}
		if(k==100){
			break;
		}
	}
	printf("前100個質數的總和為%d\n",sum);
	system("PAUSE");
	return 0;
}
