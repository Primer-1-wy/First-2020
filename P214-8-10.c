/*P242-8-10.c
 （选做）输出学生成绩（动态分配）：输入学生人数后输入每个学生的成绩，最后输出
学生的平均成绩、最高成绩和最低成绩。要求使用动态内存分配来实现。试编写相应程序。
*/
# include <stdio.h>
# include <stdlib.h>
int main ( )
{
	int n, i;
	float *p, sum, max, min, avg;
	printf("input students’ number n: ");
	scanf("%d", &n);
	/*为数组 p 动态分配 n 个浮点数 float 类型大小的空间 */
	if ((p=(float *)malloc(n, sizeof(float))) == NULL)
	{
		printf("Not able to allocate memory. \n");
		exit(1);
	}
	sum=0.0;
	max=-1; /*初始化 */
	min=1000;
	printf("input %d students’ scores: ", n); /* 提示用户输入 n 个成绩 */
	for (i = 0; i < n; i++)
	{
		scanf("%f", p+i);
		sum=sum+*(p+i);
		if (min>*(p+i))		min=*(p+i);
		if (max<*(p+i))		max=*(p+i);
	}
	avg=sum/n;
	printf("The avg is %f, max is %f, min is %f\n",avg,max,min);
	free(p); /* 释放动态分配的空间 */
	return 0;
}