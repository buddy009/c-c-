#include<stdio.h>
#include <stdio.h>

int checkData(int *p)
{
	int tmp[7] = { 0 }; //��Ǳ�ʵ���ǹ�ϣ���˼·��һ��ʼÿ��Ԫ�ض���0��

	int i;
	for (i = 0; i < 5; i++)
	{
		if (tmp[p[i]]) //������λ�õı���Ѿ���1��������ظ���ֱ�ӷ���0��
		{
			return 0;
		}
		tmp[p[i]] = 1; //������ǣ�������λ�ñ��Ϊ1��
	}
	return 1; //ȫ��������Ҳû�г����ظ������������OK��
}

int main()
{
	int p[5]; //0 1 2 3 4�ֱ����a b c d e

	for (p[0] = 1; p[0] <= 5; p[0]++)
	{
		for (p[1] = 1; p[1] <= 5; p[1]++)
		{
			for (p[2] = 1; p[2] <= 5; p[2]++)
			{
				for (p[3] = 1; p[3] <= 5; p[3]++)
				{
					for (p[4] = 1; p[4] <= 5; p[4]++) //���ѭ������
					{
						//����������˵����������ڱȽϱ��ʽֻ��0��1������������Ҫ������������ֻ��һ��Ϊ�棬������ñȽϱ��ʽ��ֵ�ܺ�Ϊ1�ķ�ʽֱ���ж��������˻�Ҫ�ж����ܲ��С�
						if ((p[1] == 2) + (p[0] == 3) == 1 && //B�ڶ����ҵ���
							(p[1] == 2) + (p[4] == 4) == 1 && //�ҵڶ���E����
							(p[2] == 1) + (p[3] == 2) == 1 && //�ҵ�һ��D�ڶ�
							(p[2] == 5) + (p[3] == 3) == 1 && //C����ҵ���
							(p[4] == 4) + (p[0] == 1) == 1 && //�ҵ��ģ�A��һ
							checkData(p) //���ܲ���
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
//	int data[30][30] = { 1 }; //��һ��ֱ����ã���������
//
//	int i, j;
//
//	for (i = 1; i < n; i++) //�ӵڶ��п�ʼ��
//	{
//		data[i][0] = 1; //ÿ�еĵ�һ�ж�û������ֱ�Ӹ�1����֤����Խ�硣
//		for (j = 1; j <= i; j++) //�ӵڶ��п�ʼ��
//		{
//			data[i][j] = data[i - 1][j] + data[i - 1][j - 1]; //���Ʒ���
//		}
//	}
//
//	for (i = 0; i < n; i++) //�����ӡ
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
//	int arr[30][30] = { 1 };//��һ�е�һ�����ֳ�ʼ��Ϊ1������Ķ���0
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
//	int murder[4] = { 0 }; //Ĭ��4���˶���������
//
//	int i;
//	for (i = 0; i < 4; i++) //���������ĸ����е�ĳ����������
//	{
//		murder[i] = 1; //����ĳ����������
//		if ((murder[0] != 1) +
//			(murder[2] == 1) +
//			(murder[3] == 1) +
//			(murder[3] != 1) == 3)
//		{
//			break; //����ʹ���������ˣ�
//		}
//		murder[i] = 0; //�����㻹�����
//	}
//
//	putchar('A' + i); //��ӡ���ֵı�š����ǵı����0 1 2 3������'A'����A B C D��
//	return 0;
//}
