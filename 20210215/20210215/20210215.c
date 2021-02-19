#include<stdio.h>

void * my_memmove(char *dst,const char *src, size_t count)
{
	
	void * ret = dst;
	if (dst < src)
	{
		while (count--)
		{
			*(char *)dst = *(char *)src;
			++(char *)dst;
			++(char *)src;

		}
	}
	else
	{
		while (count--)
		{
			*((char *)dst+count) = *((char *)src+count);

		}
	}
	
	return ret;
}


int main()
{
	int arr[30] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	my_memmove(arr + 1, arr, 12);
	
	return 0;
}
//void * my_memcpy(void * dst, void * src, size_t count)
//{
//	void *ret = dst;
//	while (count--)
//	{
//		*(char *)dst = *(char *)src;
//		dst = (char *)dst + 1;
//		src = (char *)src + 1;
//
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[20] = { 0 };
//	my_memcpy(arr1, arr, 20);
//	int i;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d  ", arr1[i]);
//	}
//
//
//	return 0;
//}

















