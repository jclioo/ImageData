#include <stdio.h>

void main()
{
	char arr[100];
	int zm = 0;

	printf("������һ���ַ���");
	scanf_s("%s",arr, (sizeof(arr) / sizeof(char)));
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if ((arr[i] >= 'a' && arr[i] <='z') || (arr[i] >= 'A' && arr[i] <= 'Z'))
		{
			zm++;
		}
	}
	printf("�ַ��� ��%s \n", arr);
	printf("��ĸ����Ϊ��%d",zm);

}