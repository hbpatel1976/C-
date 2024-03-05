#include <bits/stdc++.h>
#include <pthread.h>
using namespace std;

int max_threads=3, n=6;
int tmp=0;

void* compare(void* arg)
{
tmp = tmp + 2;
cout << "\nThis is a sample function with the value of tmp = " << tmp << endl;
}

void testThreadFunction(pthread_t threads[])
{
int i, j;
for (i=1; i<=n; i++) 
	{
	if (i%2==0) // EVEN 
		{
		for (j=0; j <max_threads; j++)
			{
			cout << "CREATING Thread for EVEN counter [i = " << i << " , j = " << j << " , tmp = " << tmp << "]\n";
			pthread_create(&threads[j], NULL, compare, NULL);
			}
		for (j=0; j <max_threads; j++)
			{
			cout << "JOINING Thread for EVEN counter [i = " << i << " , j = " << j << " , tmp = " << tmp << "]\n";
			pthread_join(threads[j], NULL);
			}
		}
	else  // ODD
		{
		for (j=0; j <max_threads; j++)
			{
			cout << "CREATING Thread for ODD counter [i = " << i << " , j = " << j << " , tmp = " << tmp << "]\n";	
			pthread_create(&threads[j], NULL, compare, NULL);
			}
		for (j=0; j<max_threads; j++)
			{
			cout << "JOINING Thread for ODD counter [i = " << i << " , j = " << j << " , tmp = " << tmp << "]\n";
			pthread_join(threads[j], NULL);
			}
		}
	}
}

int main()
{
pthread_t threads[max_threads];
testThreadFunction(threads);
return 0;
}
