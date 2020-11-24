/*4.求矩阵各行元素之和。输入2个正整数m和n (1≤m≤6，1≤n≤6)，然后输入矩阵a
(m行n列)中的元素，分别求出各行元素之和，并输出。试编写相应程序。*/
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