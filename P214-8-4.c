/*�������� n ����Χ��һȦ����˳��� 1 �� n ��úš��ӵ�һ���˿�ʼ���������� m��m<n��
�����˳�Ȧ�ӣ���һ���˴� 1 ��ʼ���������� m �����˳�Ȧ�ӡ������ȥ��ֱ���������һ
���ˡ��������� n �� m�������˳�˳������˳�Ȧ�ӵ��˵ı�š�*/
#include <stdio.h>
#define MAXN 20
void CountOff( int n, int m, int out[] );
int main()
{
	int out[MAXN], n, m;
	int i;
	scanf("%d%d", &n, &m);   //n����������<20�ˣ�m���˳�����
	CountOff( n, m, out ) ;
	for ( i = 0; i < n; i++ )
		printf("%d ", out[i]);
	 printf("\n");
	return 0;
}
void CountOff( int n, int m, int out[] )
{ 
	int i,count, no,num[MAXN];
	int *p=num;
	count = no = 0;   //count����  ��no �ǲ�����Ȧ���˵�����
	for(i = 0; i < n; i++)   //�ȸ�ÿ���˱�ţ�1 2 3 4 5....n
		num[i] = i + 1;
	while(no < n-1)//ѭ��������no��������Ȧ���˵�������<n-1
	{
		if(*p != 0)    //��ʼ����������ֵ���ܲ������
			count++;
		if(count == m)  //����Ϊmʱ��
		{
			no++;         //�˳�������1
			out[no-1]= *p;   //���˳�������˵ı�ż�¼��out����
			*p = 0;      //���˳��˵ı�����㣬���ٲ������
			count = 0;   //���¿�ʼ����
		}
		p++;//pָ����һ��Ԫ��
		if(p == num + n)    //pָ������β������ص������ײ�
			p = num;
	}
	p = num;  //ָ��p�ص������ײ�
	while(*p == 0)  //pָ�����������ʣ��һ���˵ı�ţ���ֵ��out����
		p++;
	out[no]= *p;  
}