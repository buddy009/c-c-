#include<stdio.h>

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//int arr1[5] = { 1,3,5,7,9 };
//	//int arr2[5] = { 20,40,60,80,100 };
//	int arr1[5] = { 0 };
//	int arr2[5] = { 0 };
//	int i;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("输入第一组第%d->:",i+1);
//		scanf_s("%d", &arr1[i]);
//		printf("输入第二组第%d->:", i + 1);
//		scanf_s("%d", &arr2[i]);
//	}*/
//	for (i = 0; i < sz; i++)
//	{
//		printf("请输入第%d->:",i+1);
//		scanf_s("%d", &arr1[i]);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("请输入第%d->:",i+1);
//		scanf_s("%d", &arr2[i]);
//	}
//
//	print(arr1, sz);
//	print(arr2, sz);
//
//	printf("----------------------\n");
//	//交换
//	for (i = 0; i < 5; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("***********************\n");
//	print(arr1, sz);
//	print(arr2, sz);
//
//
//
//
//
//
//	return 0;
//}




//void Init(int arr[], int sz, int set)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = set;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void get(int arr[], int sz)
//{
//	int input;
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("输入第%d->", i);
//		scanf_s("%d", &input);
//		arr[i] = input;
//	}
//	
//}
//
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	
//}
//
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz, 0);
//	print(arr, sz);
//	get(arr, sz);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}




//void my_bubble_sort(int arr[],int k)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < k-1 ; i++)
//	{
//		int flag = 1;
//		for (j = 0; j <k-i-1 ; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int tmp= arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if(1==flag)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[] = {34,8,7,56,5,4,3,100,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	my_bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void init(int *ps,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ps[i] = 0;
//	}
//	
//}
//void print(int *ps, int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ps + i));
//	}
//	printf("\n");
//}
//void get(int * ps, int sz)
//{
//	int input;
//	int i;
//	
//	for (i = 0; i <sz; i++)
//	{
//		printf("请输入%d值", i+1);
//		scanf_s("%d", &input);
//		*(ps +i) = input;
//	}
//}
//void reverse(int *ps, int sz)
//{
//	int lift = 0;
//	int right = sz - 1;
//	while (lift < right)
//	{
//		int tmp = *(ps+lift);
//		*(ps + lift) = *(ps + right);
//		*(ps + right) = tmp;
//		lift++;
//		right--;
//	}
//	
//}
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	print(arr,sz);
//	get(arr, sz);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}
void init(int *ps, int *pd, int sz)
{
	int i;
	int input;
	for (i = 0; i < sz; i++)
	{
		printf("请输入arr1的%d->", i + 1);
		scanf_s("%d", &input);
		*(ps + i) = input;
	}
	for (i = 0; i < sz; i++)
	{
		printf("请输入arr2的%d->", i + 1);
		scanf_s("%d", &input);
		*(pd + i) = input;
	}
}
void swap(int *ps, int *pd,int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		int tmp = *(ps + i);
		*(ps + i) = *(pd + i);
		*(pd + i) = tmp;
	}
}
print(int *ps, int *pd, int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(ps + i));
		
	}
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(pd + i));
		
	}
	printf("\n");
}
int main()
{
	/*int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int arr2[10] = { 11,12,13,14,15,16,17,18,19,20 };*/
	int arr1[5];
	int arr2[5];
	int sz = sizeof(arr1) / sizeof(arr2[0]);
	init(arr1, arr2, sz);
	
	print(arr1, arr2, sz);
	printf("00000000000000000000000000\n");
	swap(arr1, arr2, sz);
	print(arr1, arr2, sz);



	return 0;
}









