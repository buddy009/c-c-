
#include<stdio.h>
void Printbit(int num)
{
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");

	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
}


int main()
{
	int num = 15;

	Printbit(num);



	return 0;
}



//int binary(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a >> i) & 1 == 1)
//		{
//			count++;
//		}	
//	}
//	return count;
//}
//int main()
//{
//	int a = 5;
//	int re=binary(a);
//	printf("%d\n", re);
//	return 0;
//}




//int main()
//{
//	int a = 20;
//	int b = 50;
//	printf("%d  %d\n", a, b);
//	/*a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d  %d\n", a, b);*/
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d  %d\n", a, b);
//	return 0;
//}









