#include<stdio.h>
#include <stdio.h>

int checkData(int *p)
{
	int tmp[7] = { 0 }; //标记表，实际是哈希表的思路。一开始每个元素都是0。

	int i;
	for (i = 0; i < 5; i++)
	{
		if (tmp[p[i]]) //如果这个位置的标记已经是1，则代表重复，直接返回0。
		{
			return 0;
		}
		tmp[p[i]] = 1; //如果不是，则给这个位置标记为1。
	}
	return 1; //全部标记完毕也没有出现重复的情况，代表OK。
}

int main()
{
	int p[5]; //0 1 2 3 4分别代表a b c d e

	for (p[0] = 1; p[0] <= 5; p[0]++)
	{
		for (p[1] = 1; p[1] <= 5; p[1]++)
		{
			for (p[2] = 1; p[2] <= 5; p[2]++)
			{
				for (p[3] = 1; p[3] <= 5; p[3]++)
				{
					for (p[4] = 1; p[4] <= 5; p[4]++) //五层循环遍历
					{
						//这里是五个人的描述，由于比较表达式只有0和1两个结果，如果要两个条件有且只有一个为真，则可以用比较表达式的值总和为1的方式直接判定。别忘了还要判定不能并列。
						if ((p[1] == 2) + (p[0] == 3) == 1 && //B第二，我第三
							(p[1] == 2) + (p[4] == 4) == 1 && //我第二，E第四
							(p[2] == 1) + (p[3] == 2) == 1 && //我第一，D第二
							(p[2] == 5) + (p[3] == 3) == 1 && //C最后，我第三
							(p[4] == 4) + (p[0] == 1) == 1 && //我第四，A第一
							checkData(p) //不能并列
							)
						{
							for (int i = 0; i < 5; i++)
							{
								printf("%d ", p[i]);
							}
							putchar('\n');
						}
					}
				}
			}
		}
	}

	return 0;
}




//void yangHuiTriangle(int n)
//{
//	int data[30][30] = { 1 }; //第一行直接填好，播下种子
//
//	int i, j;
//
//	for (i = 1; i < n; i++) //从第二行开始填
//	{
//		data[i][0] = 1; //每行的第一列都没有区别，直接给1，保证不会越界。
//		for (j = 1; j <= i; j++) //从第二列开始填
//		{
//			data[i][j] = data[i - 1][j] + data[i - 1][j - 1]; //递推方程
//		}
//	}
//
//	for (i = 0; i < n; i++) //填完打印
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", data[i][j]);
//		}
//		putchar('\n');
//	}
//}

//void yangHuiTriangle1(int n)
//{
//	int arr[30][30] = { 1 };//第一列第一个数字初始化为1，其余的都是0
//	int i,j;
//	for (i = 1; i < n; i++)
//	{
//		arr[i][0] = 1;
//		for (j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void yangHuiTriangle(int n)
//{
//	int data[30] = { 1 };
//	int i, j;
//	printf("1\n");
//	for (i = 1; i < n; i++)
//	{
//		for (j = i; j > 0; j--)
//		{
//			data[j] = data[j] + data[j - 1];
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", data[j]);
//		}
//		putchar('\n');
//	}
//}
//
//
//int main()
//{
//	int n=5;
//	yangHuiTriangle(n);
//
//
//
//	return 0;
//}



//#include<string.h>
//int main()
//{
//	int murder[4] = { 0 };
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		murder[i] = 1;
//		if ((murder[0] != 1)
//			+ (murder[2] == 1)
//			+ (murder[3] == 1)
//			+ (murder[3] != 1) == 3)
//		{
//			break;
//		}
//		murder[i] = 0;
//	}
//	putchar('A' + i);
//
//
//	return 0;
//}
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//
//
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

//int main()
//{
//	int murder[4] = { 0 }; //默认4个人都不是凶手
//
//	int i;
//	for (i = 0; i < 4; i++) //遍历假设四个人中的某个人是凶手
//	{
//		murder[i] = 1; //假设某个人是凶手
//		if ((murder[0] != 1) +
//			(murder[2] == 1) +
//			(murder[3] == 1) +
//			(murder[3] != 1) == 3)
//		{
//			break; //满足就代表就是你了！
//		}
//		murder[i] = 0; //不满足还他清白
//	}
//
//	putchar('A' + i); //打印凶手的编号。我们的编号是0 1 2 3，加上'A'后变成A B C D。
//	return 0;
//}
