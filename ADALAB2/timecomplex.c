#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  

void swap(long int* a, long int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
  

void bubbleSort(long int a[], long int n)
{
    for (long int i = 0; i < n - 1; i++) {
        for (long int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}
  

  
void selectionSort(long int arr[], long int n)
{
    long int i, j, midx;
  
    for (i = 0; i < n - 1; i++) {
  
       
        midx = i;
  
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[midx])
                midx = j;
  
        
        swap(&arr[midx], &arr[i]);
    }
}
  

int main()
{
    long int n = 500;
    int it = 0;
  
    // Arrays to store time duration
    // of sorting algorithms
    double tim1[10],  tim3[10];
  
    printf("A_size, Bubble, Selection\n");
  
    // Performs 10 iterations
    while (it++ < 10) {
        long int a[n], c[n];
  
        // generating n random numbers
        // storing them in arrays a, b, c
        for (int i = 0; i < n; i++) {
            long int no = rand() % n + 1;
            a[i] = no;
            
            c[i] = no;
        }
  
        // using clock_t to store time
        clock_t start, end;
  
        // Bubble sort
        start = clock();
        bubbleSort(a, n);
        end = clock();
  
        tim1[it] = ((double)(end - start))/CLOCKS_PER_SEC;
  
        
  
        // Selection sort
        start = clock();
        selectionSort(c, n);
        end = clock();
  
        tim3[it] = ((double)(end - start))/CLOCKS_PER_SEC;
  
        // type conversion to long int
        // for plotting graph with integer values
        printf("%li,  %f,  %f\n",n,(float)tim1[it],(float)tim3[it]);
  
        // increases the size of array by 10000
        n += 500;
    }
  
    return 0;
}