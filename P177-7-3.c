/*3.判断上三角矩阵。输入-一个正整数n (1≤n≤6)和n阶方阵a中的元素，
如果a是上三角矩阵，输出“YES”，否则，输出“NO”"。
上三角矩阵指主对角线以下的元素都为0的矩阵，主
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
