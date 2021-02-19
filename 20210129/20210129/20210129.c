#include<stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;

	while (left < right)
	{
		while (left < right&&arr[left] % 2 == 1)
		{
			left++;
		}
		while (left < right&&arr[right] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
	
	//int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}




	return 0;
}






//int main()
//{
//	int line = 7;
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i * 2 + 1; j++)
//		{
//			printf("$");
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("$");
//		}
//		printf("\n");
//	}
//	return 0;
//}




//int main()
//{
//	int money = 0;
//	scanf_s("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	
//	printf("%d \n",total);
//
//
//	return 0;
//}











