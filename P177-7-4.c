/*4.��������Ԫ��֮�͡�����2��������m��n (1��m��6��1��n��6)��Ȼ���������a
(m��n��)�е�Ԫ�أ��ֱ��������Ԫ��֮�ͣ���������Ա�д��Ӧ����*/
#include <stdio.h>
#define MAXN 6
int main()
{
	int i, j, m, n, sum;
	int a[MAXN][MAXN];
	scanf("%d %d" ,&m, &n);
	for(i=0;i< m; i++)
		for(j=0;j<n;j++)
			scanf("%d", &a[i][j]);
		for(i=0;i< m; i++){
			sum= 0;
			for(j=0;j<n;j++)
				sum = sum + a[i][j];
			printf("%d\n", sum);
			
		}
	return 0;
}