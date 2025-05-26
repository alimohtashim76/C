#include <stdio.h>

// # define MAX 100

void print2DArray(int row, int col, int arr[row][col])
{
    
    for (int i = 0; i < row; i++)
    {
        printf("\n\t\t");
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
    }
}

void tripletRepresentation(int row, int col, int sparse[row][col])
{
    int info = 0;
    for (int a = 0; a < row; a++) // calculating the number of informative elements in sparse matrix
    {
        for (int b = 0; b < col; b++)
        {
            if (sparse[a][b] != 0)
            {
                info++;
            }
        }
    }
    int triplet[info][3];

    int count = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (sparse[i][j] != 0)
            {
                triplet[count][0] = i;
                triplet[count][1] = j;
                triplet[count][2] = sparse[i][j];
                count++;
            }
        }
    }
    printf("<-----Triplet representation of your sparse matrix is----->\n");
    printf("\t\trow\tcol\tvalue");
    print2DArray(count, 3, triplet);
}

int main()
{
    int row , col;

        printf("enter the number of rows : ");
        scanf("%d", &row);
        printf("enter the number of columns : ");
        scanf("%d", &col);

        int sparseMatrix[row][col];

        printf("enter the elements of sparse matrix : ");

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                scanf("%d", &sparseMatrix[i][j]);
            }

        }

    //int sparseMatrix[][3] = {{4, 0, 0}, {0, 0, 2}, {1, 0, 0}};

    tripletRepresentation(row, col, sparseMatrix);
}