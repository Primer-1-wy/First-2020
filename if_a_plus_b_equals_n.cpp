#include "stdafx.h"

#include<stdio.h>
int main()
{
	int a[8], n, i,k;
	for (i = 0; i < 8; i++) scanf("%d", &a[i]);
	scanf("%d", &n);
	for (i = 0; i < 8; i++) {
		for (k = i + 1; k < 8; k++) {
			if (a[k] == n - a[i]) {
				printf("1");
				return 0;
			}
		}
	}
	printf("0");
    return 0;

}

