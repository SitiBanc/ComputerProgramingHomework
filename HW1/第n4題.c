#include<stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    float n,a=0,b,x;

    printf("�п�JN���ȥH�D�䥭���:");

    b=n;

    for(int i=0;i<100;i++){//�Q�ΰj�����G��
        x=((a+b)/2);//�M��W�U��ɪ�������
        if((x*x)>n){//�p�GX^2�j��N^2�h
            b=x;//�W��ɲ��ʨ줤����
        }else if((x*x)<n){//�p�GX^2�p��N^2�h
            a=x;//�U��ɲ��ʨ줤����
        }
    }
    //////////////////Output
    cout<<endl
        <<">>>>�p�⵲�G<<<<"<<endl
        <<"N������ڬO:"<<x<<endl;
}
