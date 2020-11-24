# include <stdio.h>
# define N 6
int main()
{
	int i,j, flag, n; 
	int a[N][N]={0};
	int maxr[N]={0}; //存放每一行的最大值下标
	int minc[N]={0};//存放每一列的最小值下标
	printf("\n请输入矩阵大小n=");
	scanf("%d", &n);
	printf("\n请输入%d*%d矩阵\n",n,n);
	for(i=0;i<n;i++) 
		for(j=0;j<n;j++) 
			scanf("%d", &a[i][j]);

	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if (a[i][j]>a[i][maxr[i]]) 	maxr[i] = j; //得到真正的每一行最大值下标
			if (a[i][j]<a[minc[j]][j]) 	minc[j] = i; }//得到真正的每一列的最小值下标
	}
	
	for(i=0;i<n;i++)
		printf("%d  ",maxr[i]);
	printf("\n ");
	for(i=0;i<n;i++)
			printf("%d  ",minc[i]);
	printf("\n ");
	flag= 0;//假设没有鞍点
	for(i=0;i<n; i++){
		for(j=0;j< n;j++){//某个元素即使该行的最大值又是该列的最小值—鞍点
			if((j==maxr[i]) && (i==minc[j])) 	{
				printf("\n鞍点坐标为");
				printf("%d %d\n", i, j);
				flag= 1;
				break;
			}
		}
	}
	if(flag == 0)	printf("NONE\n");
	return 0;
}
	

