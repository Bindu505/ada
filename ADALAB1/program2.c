#include <stdio.h>
int main()
{
    int choice;
    for(;;)
    {
        printf("\nenter the your choice");
        printf("\n1:selection sort\n2:bubble sort\n");
        scanf("%d",&choice);
        switch(choice)
        {
             case 1:{
                        selecsor();
                        break;
                    }
            case 2:{
                        bubsor();
                        break;
                    }
    }    }
    
}

void selecsor()
{
    int a[100],n,i,j,min,temp;
   
     
    printf("Enter the Number of Elements: \n");
    scanf("%d",&n);
     
    printf("Enter %d Elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            min=j;
        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
     
    printf("The Sorted array  order: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
       
    }
    getch();
}

void  bubsor()
{
  int array[100], n, i, j, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i< n; i++)
    scanf("%d", &array[i]);

  for (i= 0 ; i < n - 1; i++)
  {
    for (j= 0 ; j< n - i - 1; j++)
    {
      if (array[j] > array[j+1]) 
      {
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }
    }
  }

  printf("Sorted list in order:\n");

  for (i= 0; i < n; i++)
     printf("%d\t", array[i]);

  return 0;
}