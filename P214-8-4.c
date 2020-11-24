/*报数：有 n 个人围成一圈，按顺序从 1 到 n 编好号。从第一个人开始报数，报到 m（m<n）
的人退出圈子，下一个人从 1 开始报数，报到 m 的人退出圈子。如此下去，直到留下最后一
个人。输入整数 n 和 m，并按退出顺序输出退出圈子的人的编号。*/
#include <stdio.h>
#define MAXN 20
void CountOff( int n, int m, int out[] );
int main()
{
	int out[MAXN], n, m;
	int i;
	scanf("%d%d", &n, &m);   //n是总人数，<20人，m是退出号码
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
	count = no = 0;   //count计数  ，no 是不属于圈内人的人数
	for(i = 0; i < n; i++)   //先给每个人编号，1 2 3 4 5....n
		num[i] = i + 1;
	while(no < n-1)//循环条件：no的数量（圈外人的数量）<n-1
	{
		if(*p != 0)    //开始计数，非零值才能参与计数
			count++;
		if(count == m)  //计数为m时，
		{
			no++;         //退出人数加1
			out[no-1]= *p;   //把退出的这个人的编号记录在out数组
			*p = 0;      //把退出人的编号置零，不再参与计数
			count = 0;   //重新开始计数
		}
		p++;//p指向下一个元素
		if(p == num + n)    //p指向数组尾部，则回到数组首部
			p = num;
	}
	p = num;  //指针p回到数组首部
	while(*p == 0)  //p指向数组内最后剩的一个人的编号，赋值给out数组
		p++;
	out[no]= *p;  
}