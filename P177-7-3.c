/*3.�ж������Ǿ�������-һ��������n (1��n��6)��n�׷���a�е�Ԫ�أ�
���a�������Ǿ��������YES�������������NO��"��
�����Ǿ���ָ���Խ������µ�Ԫ�ض�Ϊ0�ľ�����
*/
#include <stdio.h>
#define MAXN 10
int main()
{
	int flag, i,j, n; 
	int a[MAXN][MAXN];
	scanf("%d", &n);
	for(i=0;i< n;i++)
		for(j=0;j< n;j++)
			scanf("%d", &a[i][j]);
	flag= 1;
	for(i=0;i<n;i++)
		for(j =0;j<i;j++)
			if(a[i][j] != 0)	
			{	flag= 0;break;}
				
	if(flag!= 0) 
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
