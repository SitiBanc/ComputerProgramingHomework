#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,c;
  int d=0;

  printf("Input a integer to set a range\n");
  scanf("%d",&a);
  printf("1~%d����Ʀ�:",a);

  for(b=1;b<=a;b++){
                  int t=0;
                  for(c=1;c<=b;c++){
                  if(b%c==0){
                              t++;
                              }
                                    }
                  if(t==2){
                            d++;
                            printf("%d ",b);
                            }
                    }
                    printf("\n�`�@��%d�ӽ��\n",d);

  system("PAUSE");
  return 0;
}
