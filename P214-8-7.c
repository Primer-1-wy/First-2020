/*P242-8-7.c
�ַ����������� 5 ���ַ���������С�����˳��������Ա�д��Ӧ����
*/
#include <stdio.h>
#include <string.h>
int main( )
{
	int i, j, index;
	char sx[5][80], stemp[80];
	for(i=0;i<5;i++)
		scanf("%s", sx[i]);
	for(i=0; i<4; i++)//ѡ������
	{
		index=i;
		for(j=i+1;j<5;j++)
			if (strcmp(sx[j],sx[index])<0)
		index=j;
		if(i!=index)
		{
			strcpy(stemp,sx[i]);
			strcpy(sx[i],sx[index]);
			strcpy(sx[index],stemp);
		}
	}
	printf("After sorted:\n");
	for (i=0;i<5;i++)
		puts(sx[i]);
	return 0;
}