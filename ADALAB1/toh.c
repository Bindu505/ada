#include <stdio.h>
#include <conio.h>

void toh(int, char, char, char);
 int count=0;   
void main()
{
   int n;
   printf("Enter the number of disk : ");
   scanf("%d", &n);
    toh(n, 'A', 'C', 'B');
    printf("\n \n The minimum number of move disks %d",count);
}


void toh(int no, char source, char destination, char temp)
{
   if (no == 1)
      {
         printf("\n move disk 1 from source %c to destination %c", source, destination);
        count=count+1;
       return;
      }

     toh(no - 1, source, temp, destination);

     printf("\n move disk %d from source %c to destination %c", no, source, destination );
     count=count+1;

     toh(no - 1, temp, destination, source);
     

}
