#include <stdio.h>

void main()
{
	char arr[100];
	int zm = 0;

	printf("ÇëÊäÈëÒ»¶Î×Ö·û£º");
	scanf_s("%s",arr, (sizeof(arr) / sizeof(char)));
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if ((arr[i] >= 'a' && arr[i] <='z') || (arr[i] >= 'A' && arr[i] <= 'Z'))
		{
			zm++;
		}
	}
	printf("×Ö·û´® £º%s \n", arr);
	printf("×ÖÄ¸¸öÊıÎª£º%d",zm);

}