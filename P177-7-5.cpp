# include <stdio.h>
# define N 6
int main()
{
	int i,j, flag, n; 
	int a[N][N]={0};
	int maxr[N]={0}; //���ÿһ�е����ֵ�±�
	int minc[N]={0};//���ÿһ�е���Сֵ�±�
	printf("\n����������Сn=");
	scanf("%d", &n);
	printf("\n������%d*%d����\n",n,n);
	for(i=0;i<n;i++) 
		for(j=0;j<n;j++) 
			scanf("%d", &a[i][j]);

	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if (a[i][j]>a[i][maxr[i]]) 	maxr[i] = j; //�õ�������ÿһ�����ֵ�±�
			if (a[i][j]<a[minc[j]][j]) 	minc[j] = i; }//�õ�������ÿһ�е���Сֵ�±�
	}
	
	for(i=0;i<n;i++)
		printf("%d  ",maxr[i]);
	printf("\n ");
	for(i=0;i<n;i++)
			printf("%d  ",minc[i]);
	printf("\n ");
	flag= 0;//����û�а���
	for(i=0;i<n; i++){
		for(j=0;j< n;j++){//ĳ��Ԫ�ؼ�ʹ���е����ֵ���Ǹ��е���Сֵ������
			if((j==maxr[i]) && (i==minc[j])) 	{
				printf("\n��������Ϊ");
				printf("%d %d\n", i, j);
				flag= 1;
				break;
			}
		}
	}
	if(flag == 0)	printf("NONE\n");
	return 0;
}
	

