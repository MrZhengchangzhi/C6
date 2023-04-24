


#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <Windows.h>

//void change_char(const char* ch1, char* ch2, int str)
//{
//	int left= 0;
//	int right = str - 1;
//	while (left <= right)
//	{
//		ch2[left] = ch1[left];
//		ch2[right] = ch1[right];
//		left++;
//		right--;
//		printf("%s\n", ch2);
//		Sleep(1000);
//	}
//
//}
//
//int main()
//{
//	char ch1[] = "hello zhengchangzhi!";
//	char ch2[] = "####################";
//	int a = strlen(ch1);
//	change_char(ch1,ch2,a);
//	printf("\n");
//	return 0;
//}

//void change_arr(char* arr, int str)
//{
//	int i = 0;
//	for (i = 0; i < str /2; i++)
//	{
//		int tmp = 0;
//		tmp = arr[i];
//		arr[i] = arr[str -1- i];
//		arr[str -1- i] = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "ABCDEFG";
//	int str = strlen(arr);
//	change_arr(arr,str);
//	printf("%s\n", arr);
//	return 0;
//}
char* strcpy(char* dest, const char* src)
{}

int main()
{
	char* my_strcpy = { 0 };
	char*(*pf) (char*, char*) = &my_strcpy;
	char*(*pfArr[4])(char*, char*) = { my_strcpy,my_strcpy,my_strcpy,my_strcpy };
	return 0;
}