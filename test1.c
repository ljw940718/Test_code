#include<stdio.h>

void  Print(int *arr,int n)
{
	if(arr != NULL)
	{
		int i = 0;
		for(;i<n;i++)
		{
			printf("%d  ",arr[i]);
		}
	}
	printf("\n");
}

void qsort(int *arr,int left,int right)
{
	if(arr != NULL && left < right)
	{
		int i = left,j = right;
		int tmp = arr[i];
		while(i<j)
		{
			while( i< j && arr[j]>tmp) --j;
			arr[i] = arr[j];
			while( i< j && arr[i]<tmp) ++i;
			arr[j] = arr[i];
		}
		arr[i] = tmp;
		qsort(arr,left,i-1);
		qsort(arr,i+1,right);
	}
}
int main()
{
	int array[] = {5,3,7,8,9,0,2,1,4,6};
	int n = sizeof(array)/sizeof(array[0]);
	printf("快速排序算法(递归):\n");
	Print(array,n);
	qsort(array,0,n-1);
	Print(array,n);
	return 0;
}
