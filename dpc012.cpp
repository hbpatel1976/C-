#include <bits/stdc++.h>
#include <pthread.h>
#include <time.h>
using namespace std;

#define n 60
int max_threads = (n + 1) / 2;
int a[] = {56, 29, 85, 56, 12, 325, 852, -45, 45, 32, 98, 89, 15, 51, 65, 48, 94, 23, 26, 61, 94, 98, 355, 128, 952, 258, 635, 489, 552, 623, 156, 229, 835, 546, 162, 3725, 8652, -485, 495, 302, 981, 189, 125, 351, 654, 458, 964, 723, 268, 619, 194, 928, 3355, 4128, 5952, 3258, 6635, 4879, 5852, 9623};
int tmp;

void* compare(void* arg)
{
int index = tmp;
tmp = tmp + 3;
if ((a[index] > a[index + 1]) && (index + 1 < n)) 
	{
	swap(a[index], a[index + 1]);
	}
}

void oddEven(pthread_t threads[])
{
int i, j;
for (i = 1; i <= n; i++) 
	{
		tmp = 0;
		for (j = 0; j < max_threads; j++)
			pthread_create(&threads[j], NULL, compare, NULL);
		for (j = 0; j < max_threads; j++)
			pthread_join(threads[j], NULL);
	}
}

void printArray()
{
int i;
for (i = 0; i < n; i++)
cout << a[i] << " ";
cout << endl;
}

int main()
{
pthread_t threads[max_threads];
clock_t start, end;
double cpu_time_used;

cout << "Given array is: ";
printArray();
start = clock();
oddEven(threads);
end = clock();
cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
cout << "\n Time taken to sort the data = " << cpu_time_used;
cout << "\nSorted array is: ";
printArray();
return 0;
}
