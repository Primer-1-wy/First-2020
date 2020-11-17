老师说：#include<stdio.h>
#include<string.h>
#define N 5  //学生总数
#define M 3   //课程总数
/*
函数功能：输入N个学生全部信息
参数：学生学号数组，姓名数组，成绩数组，性别数组
返回值：无
*/
void input(char xuehao[][12],char xm[][7],double cj[][M+2],char xb[])
{
	int i,j;
	printf("\n输入学生全部信息\n");
	for(i=0;i<N;i++)
	{
		fflush(stdin);//清空键盘缓冲区
		printf("\n请输入第%d个学生学号=",i+1);
		gets(xuehao[i]);

		fflush(stdin);
		printf("\n请输入第%d个学生姓名=",i+1);
		gets(xm[i]);

		fflush(stdin);
		printf("\n请输入第%d个学生性别=",i+1);
		xb[i]=getchar();

		fflush(stdin);
		printf("\n请输入第%d个学生成绩：",i+1);
		for(j=0;j<M;j++)
		{
			printf("\n第%d门课=",j+1);scanf("%lf",&cj[i][j]);
		}
	}
}
/*
函数功能：输出N个学生全部信息
参数：学生学号数组，姓名数组，成绩数组，性别数组
返回值：无
*/
void output(char xuehao[][12],char xm[][7],double cj[][M+2],char xb[])
{
	int i,j;
	printf("\n   学号     姓名    性别     成绩1  成绩2  成绩3  总分  平均分\n");
	for(i=0;i<N;i++)
	{
		printf("%10s %8s  %2c ",xuehao[i],xm[i],xb[i]);
		for(j=0;j<M+2;j++)
			printf("%8.2lf",cj[i][j]);
		printf("\n");
	}
}
/*
函数功能：N个学生成绩求和、求平均
参数：成绩数组
返回值：无
*/
void sum_ave(double cj[][M+2])
{
	int i,j;
	printf("\n学生成绩求和，平均分\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			cj[i][M]+=cj[i][j];
		cj[i][M+1]=cj[i][M]/M;
	}
	printf("\n学生成绩求和，平均分 完成！！\n");
}
/*主函数*/
int main()
{
	char xuehao[N][12],xm[N][7],xb[N]; //f-女 m-男
	double cj[N][M+2]={0};  //存放学生M门单科成绩和总分、平均分
	int choice=0;
	while(1)
    {
		printf("\n┏━━━━━━菜单━━━━━┓");
		printf("\n┃ 1、输入全部学生成绩      ┃");
		printf("\n┃ 2、学生成绩求和，平均分  ┃");
		printf("\n┃ 3、输出三个学生成绩      ┃");
		printf("\n┃ 0、退出                  ┃");
		printf("\n┗━━━━━━━━━━━━━┛");
		printf("\n━━请输入你的选择：");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:printf("\n输入%d个学生信息\n",N);
			 input(xuehao,xm,cj,xb); 
			 break;
		case 2:sum_ave(cj);
		     break;
		case 3: output(xuehao,xm,cj,xb);
		      break;
		default: printf("\n退出\n");exit(0);
		}
		getchar();//吸收脏数据—回车
	}
	return 0;
}
