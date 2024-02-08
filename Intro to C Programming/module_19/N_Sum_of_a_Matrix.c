#include <stdio.h>

int row, col;
int arr1[100][100], arr2[100][100], res[100][100];
void sum(int r1, int c1)
{
    if (r1 == row || c1 == col)
        return;
    if (c1 < col - 1)
    {   res[r1][c1] = arr1[r1][c1] + arr2[r1][c1];
        sum(r1, c1 + 1);
    }
    else
    {   res[r1][c1] = arr1[r1][c1] + arr2[r1][c1];
        sum(r1 + 1, 0);
    }
   
}
int main()
{

    scanf("%d %d", &row, &col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    sum(0, 0);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
