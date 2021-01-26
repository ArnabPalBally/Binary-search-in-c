//binary search
#include<stdio.h>
void binsearch(int *arr, int start,int end,int key)
{
	if(start<end)
	{
		
		int mid=(start + end)/2;
		if(*(arr+mid)==key)
		{
			printf("key is at position :%d",mid);
		}
		else if(key>*(arr + mid))
		{
			start=mid+1;
			binsearch(arr,start,end,key);
		}
		else if(key<*(arr+mid))
		{
			end=mid-1;
			binsearch(arr,start,end,key);
		}
	}

	else
	{
		printf("not found");
	}
}
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9};
	int key;
	printf("enter a key to search");
	scanf("%d",&key);
	int start =0;
	int end=sizeof(a)/sizeof(a[0])-1;
	binsearch(&a[0],start,end,key);
}
