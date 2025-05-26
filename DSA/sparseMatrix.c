#include<stdio.h>

int main()
{
    int arr[4][4] = 
    {
        {0,0,3,0},
        {0,0,0,8},
        {5,0,0,0},
        {0,0,0,9}
    };

    int size = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] != 0)
            {
                size++;
            }
            
        }       
    }
    
    int k = 0, newArr[3][size];

     for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] != 0)
            {
                newArr[0][k] = i;
                newArr[1][k] = j;
                newArr[2][k] = arr[i][j];
                k++;
            }
            
        }       
    }

     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", newArr[i][j]);
            
        }
        printf("\n");       
    }

}