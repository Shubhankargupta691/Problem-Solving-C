#include<stdio.h>
#include<string.h>
 
void check_magic_square(int limit);
 
int main()
{
      int num;
      printf("\nEnter an Odd Number:\t");
      scanf("%d", &num);
      check_magic_square(num);
      return 0;
}
 
void check_magic_square(int limit)
{
      int num, sum, i, j;
      int matrix[limit][limit];
      memset(matrix, 0, sizeof(matrix));
      j = limit - 1;
      i = limit / 2;
      for(num = 1; num <= limit * limit;)
      {
            if((i == -1) && (j == limit))
            {
                  j = limit - 2;
                  i = 0;
            }
            else
            {
                  if(j == limit)
                  {
                        j = 0;
                  }
                  if(i < 0)
                  {
                        i = limit - 1;
                  }
            }
            if(matrix[i][j])
            {
                  j = j - 2;
                  i++;
                  continue;
            }
            else
            {
                  matrix[i][j] = num++;
            }
            j++;  
            i--;
      }
      sum = (limit * (limit * limit + 1)) / 2;
      printf("\nSum of Each Row:\t%d\n", sum);
      printf("\nSum of Each Column:\t%d\n", sum);
      printf("\nSquare Matrix\n");
      for(i = 0; i < limit; i++)
      {
            for(j = 0; j < limit; j++)
            {
                  printf("%d\t", matrix[i][j]);
            }
            printf("\n");
      }
}