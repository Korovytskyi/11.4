#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string.h>
typedef struct Data
{
	char fam[20];
	char name[20];
	char tel[20];
	char dey[20];
	char mon[10];
	char year[10];
};

void poisk(FILE* F1, int& n, Data* arr)
{
	errno_t err;
	err = fopen_s(&F1, "f1.txt", "r+b");
	char str[20];
	printf("Введіть мiсяць\n");
	scanf_s("%s", str, 20);
	int k;
	for (int i = 0; i < n; i++)
	{
		k = strncmp(arr[i].mon, str, 1);
		if (k == 0)
		{
			printf("Фамлія %d\n", i + 1);
			printf("%s\n", arr[i].fam);
			printf(" Iмя %d\n", i + 1);
			printf("%s\n", arr[i].name);
			printf("Номер телефону %d\n", i + 1);
			printf("%s\n", arr[i].tel);
			printf("День %d\n", i + 1);
			printf("%s\n", arr[i].dey);
			printf("Місяць %d\n", i + 1);
			printf("%s\n", arr[i].mon);
			printf("Рік %d\n", i + 1);
			printf("%s\n", arr[i].year);
		}

	}
	if (k != 0)
	{
		printf("\n");
	}

	fclose(F1);
}
void print(FILE* F1, int& n, Data* arr, int& s)
{
	errno_t err;
	err = fopen_s(&F1, "f1.txt", "r+b");
	for (int i = 0; i < n + s; i++)
	{
		printf("Фамлія %d\n", i + 1);
		printf("%s\n", arr[i].fam);
		printf(" Iмя %d\n", i + 1);
		printf("%s\n", arr[i].name);
		printf("Номер телефону %d\n", i + 1);
		printf("%s\n", arr[i].tel);
		printf("День %d\n", i + 1);
		printf("%s\n", arr[i].dey);
		printf("Місяць %d\n", i + 1);
		printf("%s\n", arr[i].mon);
		printf("Рік %d\n", i + 1);
		printf("%s\n", arr[i].year);

	}
	fclose(F1);

}


int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	FILE* F1;
	errno_t err;
	err = fopen_s(&F1, "f1.txt", "w+b");
	if (!F1)
	{
		printf("Помилка");
	}
	int n;
	std::cout << ("Кідькість людей");
	scanf_s("%d", &n);
	Data* arr = (Data*)malloc(n * sizeof(Data));
	for (int i = 0; i < n; i++)
	{
		fflush(stdin);
		gets_s(arr[i].fam);
		fputs(arr[i].fam, F1);
		fputs("\n", F1);
		gets_s(arr[i].name);
		fputs(arr[i].name, F1);
		fputs("\n", F1);
		gets_s(arr[i].tel);
		fputs(arr[i].tel, F1);
		fputs("\n", F1);
		gets_s(arr[i].dey);
		fputs(arr[i].dey, F1);
		fputs("\n", F1);
		gets_s(arr[i].mon);
		fputs(arr[i].mon, F1);
		fputs("\n", F1);
		gets_s(arr[i].year);
		fputs(arr[i].year, F1);
		fputs("\n", F1);
	}
	fclose(F1);

}
