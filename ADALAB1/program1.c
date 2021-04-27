#include <stdio.h>
#include<stdlib.h>
int main()
{
    int choice;
    for(;;){
    printf("\n 1:binary search \n 2:menu driven\n 3:exit \n enter your choice\n");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:{
                    printf("BINARY SEARCH FUNCTION");
                    binser();
                    break;
                }   
        case 2:{
                    printf("MENUDRIVEN FUNCTION");
                    mendriv();
                    break;
                    
                 }
        case 3:exit(0);
                break;
    }
    }
}
void mendriv()
{
    float result;
    int choice, num;
  
        printf("\nPress 1 to calculate area of circle\n");
        printf("Press 2 to calculate area of square\n");
        printf("Press 3 to calculate area of sphere\n");
        printf("Press 4 to exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
      
        switch (choice)
        {
            case 1:{
                        printf("Enter radius:\n");
                        scanf("%d",&num);
                        result = 3.14 * num * num;
                        printf("Area of sphere=%f\n",result);
                         break;
                    }
            case 2: {
                        printf("Enter side of square:\n");
                        scanf("%d",&num);
                        result = num * num;
                        printf("Area of square=%f\n",result);
                        break;
                    }
            case 3: {
                        printf("Enter radius:\n");
                        scanf("%d",&num);
                        result = 4 * (3.14 * num * num);
                        printf("Area of sphere=%f\n",result);
                        break;
                    }
    
            case 4:exit(0);
            break;
       
    }
    return 0;
}

void binser()
{
    int c, first, last, middle, n, search, array[100];
    
        printf("\n Enter number of elements\n");
        scanf("%d", &n);

        printf("Enter %d integers\n", n);

        for (c = 0; c < n; c++)
         scanf("%d", &array[c]);

        printf("Enter value to find\n");
        scanf("%d", &search);

        first = 0;
        last = n - 1;
        middle = (first+last)/2;

        while (first <= last) 
        {
            if (array[middle] < search)
                    first = middle + 1;
            else if (array[middle] == search)
            {
                 printf("%d found at location %d.\n", search, middle+1);
                    break;
            }
            else
                last = middle - 1;

                middle = (first + last)/2;
        }
        if (first > last)
            printf("Not found! %d isn't present in the list.\n", search);
   

    return 0;
}
