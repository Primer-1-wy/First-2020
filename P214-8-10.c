/*P242-8-10.c
 ��ѡ�������ѧ���ɼ�����̬���䣩������ѧ������������ÿ��ѧ���ĳɼ���������
ѧ����ƽ���ɼ�����߳ɼ�����ͳɼ���Ҫ��ʹ�ö�̬�ڴ������ʵ�֡��Ա�д��Ӧ����
*/
# include <stdio.h>
# include <stdlib.h>
int main ( )
{
	int n, i;
	float *p, sum, max, min, avg;
	printf("input students�� number n: ");
	scanf("%d", &n);
	/*Ϊ���� p ��̬���� n �������� float ���ʹ�С�Ŀռ� */
	if ((p=(float *)malloc(n, sizeof(float))) == NULL)
	{
		printf("Not able to allocate memory. \n");
		exit(1);
	}
	sum=0.0;
	max=-1; /*��ʼ�� */
	min=1000;
	printf("input %d students�� scores: ", n); /* ��ʾ�û����� n ���ɼ� */
	for (i = 0; i < n; i++)
	{
		scanf("%f", p+i);
		sum=sum+*(p+i);
		if (min>*(p+i))		min=*(p+i);
		if (max<*(p+i))		max=*(p+i);
	}
	avg=sum/n;
	printf("The avg is %f, max is %f, min is %f\n",avg,max,min);
	free(p); /* �ͷŶ�̬����Ŀռ� */
	return 0;
}