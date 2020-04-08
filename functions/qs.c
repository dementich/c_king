#include <stdio.h>

void printa(int a[], int n);
int split(int a[], int low, int high);
void qsort(int a[], int low, int high);

int main(void)
{
	//int a[] = {12, 3, 6, 18, 7, 15, 10};
	int a[] = {9, 16, 47, 82, 4, 66, 12, 3, 25, 51};
	int n = sizeof(a)/sizeof(a[0]);
	printa(a, n);
	//printf("Spliter position = %d\n", split(a, 0, n - 1));
	qsort(a, 0, n - 1);
	printa(a, n);
	return 0;
}

void qsort(int a[], int low, int high)
{
	if(low >= high) return;
	
	int middle = split(a, low, high);
	qsort(a, low, middle - 1);
	qsort(a, middle + 1, high);
}

int split(int a[], int low, int high)
{
	int tmp = a[low];
	for(;;)
	{
		while(a[high] >= tmp && low < high) high--;
		if(low >= high) break;
		a[low++] = a[high];
		
		while(a[low] <= tmp && low < high) low++;
		if(low >= high) break;
		a[high--] = a[low];
	}
	a[high] = tmp;
	return high;
}

/*int split(int a[], int low, int high)
{
	int tmp = a[low], empty = low;
	for(;;)
	{
		//Сначала идем от хвоста к голове.
		//Проверяем, является ли текущий элемент больше разделяющего.		
		//Если текущий элемент больше или равен разделяющего, то ок, двигаемся еще на 1 элемент к голове.
		while(a[high] >= tmp) high--;
		if(low >= high) break;
		//Если же текущий элемент меньше разделяющему, то делаем следующие операции:
		//1) Кладем текущий элемент на место пустого элемента массива
		a[empty] = a[high];
		//2) Позицию, откуда взяли текущий элемент, помечаем как пустую
		empty = high;
		
		//Теперь идем от головы (точнее от той позиции, куда положили элемент) к хвосту
		//Проверяем, является ли текущий элемент меньше разделяющего.
		//Если текущий элемент меньше или равен разделяющему, то ок, двигаемся еще на 1 элемент к хвосту.
		while(a[low] <= tmp) low++;
		if(low >= high) break;
		//Если же текущий элемент больше разделяющего, то делаем следующие операции:
		//1) Кладем текущий элемент на место пустого элемента массива
		a[empty] = a[low];
		//2) Позицию, откуда взяли текущий элемент, помечаем как пустую
		//3) Ставим счетчик low на позицию, помеченную как пустую
		empty = low;
	}
	a[high] = tmp;
	return high;
}*/

void printa(int a[], int n)
{
	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}