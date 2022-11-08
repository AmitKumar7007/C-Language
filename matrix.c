#include <stdio.h>
int det2X2()
{
    int matrix[2][2];

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("Enter the value in [%d][%d] position : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe Matrix is :\n");

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    int a, b;
    a = matrix[0][0] * matrix[1][1];
    b = matrix[0][1] * matrix[1][0];

    printf("Determinant of given 2X2 is : %d", a - b);
}

int minor2X2()
{
    int matrix[2][2];

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("Enter the value in [%d][%d] position : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe Matrix given is :\n");

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    /*
    a[0][0]     a[0][1]
    a[1][0]     a[1][1]
    */
    printf("Minor of Matrix given is :\n");
    int minor[2][2];
    minor[0][0] = matrix[1][1];
    minor[0][1] = matrix[1][0];
    minor[1][0] = matrix[0][1];
    minor[1][1] = matrix[0][0];

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("%d  ", minor[i][j]);
        }
        printf("\n");
    }
}

int cofactor2X2(int functype)
{
    int matrix[2][2];

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("Enter the value in [%d][%d] position : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe Matrix given is :\n");

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    /*
    a[0][0]     a[0][1]
    a[1][0]     a[1][1]
    */
    printf("Cofactor of Matrix given is :\n");
    int cofactor[2][2];
    cofactor[0][0] = matrix[1][1];
    cofactor[0][1] = -matrix[1][0];
    cofactor[1][0] = -matrix[0][1];
    cofactor[1][1] = matrix[0][0];

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("%d  ", cofactor[i][j]);
        }
        printf("\n");
    }

    if (functype == 5)
    {
        int transpose[2][2];
        transpose[0][0] = cofactor[0][0];
        transpose[0][1] = cofactor[1][0];
        transpose[1][0] = cofactor[0][1];
        transpose[1][1] = cofactor[1][1];

        printf("The adjoint of given matrix is :\n");

        for (int i = 0; i <= 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                printf("%d  ", transpose[i][j]);
            }
            printf("\n");
        }
    }

    else if (functype == 6)
    {
        int transpose[2][2];
        transpose[0][0] = cofactor[0][0];
        transpose[0][1] = cofactor[1][0];
        transpose[1][0] = cofactor[0][1];
        transpose[1][1] = cofactor[1][1];

        printf("\nThe Adjoint of given matrix is :\n");
        for (int i = 0; i <= 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                printf("%d  ", transpose[i][j]);
            }
            printf("\n");
        }

        // Determinant
        int a[3];
        a[0] = matrix[0][0] * matrix[1][1];
        a[1] = matrix[0][1] * matrix[1][0];
        a[2] = a[0] - a[1];

        printf("\nThe Inverse of given matrix is :\n");

        for (int i = 0; i <= 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                printf("%d  ", transpose[i][j] / a[2]);
            }
            printf("\n");
        }
    }
}

int det3X3()
{
    int matrix[3][3];

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("Enter the values in [%d][%d] position : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
    /*
    a[0][0]     a[0][1]     a[0][2]
    a[1][0]     a[1][1]     a[1][2]
    a[2][0]     a[2][1]     a[2][2]
    */

    int a[3], b[3], c[3], det[3];
    a[0] = matrix[1][1] * matrix[2][2];
    b[0] = matrix[1][2] * matrix[2][1];
    c[0] = a[0] - b[0];
    det[0] = matrix[0][0] * c[0];

    a[1] = matrix[1][0] * matrix[2][2];
    b[1] = matrix[1][2] * matrix[2][0];
    c[1] = a[1] - b[1];
    det[1] = matrix[0][1] * c[1];

    a[2] = matrix[1][0] * matrix[2][1];
    b[2] = matrix[1][1] * matrix[2][0];
    c[2] = a[2] - b[2];
    det[2] = matrix[0][2] * c[2];

    int output = det[0] - det[1] + det[2];

    printf("The determinat of given matrix is : %d", output);
}

int minor3X3()
{

    int matrix[3][3];
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("Enter the values in [%d][%d] position : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
    /*
    a[0][0]     a[0][1]     a[0][2]
    a[1][0]     a[1][1]     a[1][2]
    a[2][0]     a[2][1]     a[2][2]
    */

    int minor[3][3], a[9], b[9];
    a[0] = matrix[1][1] * matrix[2][2];
    b[0] = matrix[1][2] * matrix[2][1];
    minor[0][0] = a[0] - b[0];

    a[1] = matrix[1][0] * matrix[2][2];
    b[1] = matrix[1][2] * matrix[2][0];
    minor[0][1] = a[1] - b[1];

    a[2] = matrix[1][0] * matrix[2][1];
    b[2] = matrix[1][1] * matrix[2][0];
    minor[0][2] = a[2] - b[2];

    a[3] = matrix[0][1] * matrix[2][2];
    b[3] = matrix[0][2] * matrix[2][1];
    minor[1][0] = a[3] - b[3];

    a[4] = matrix[0][0] * matrix[2][2];
    b[4] = matrix[0][2] * matrix[2][0];
    minor[1][1] = a[4] - b[4];

    a[5] = matrix[0][0] * matrix[2][1];
    b[5] = matrix[0][1] * matrix[2][0];
    minor[1][2] = a[5] - b[5];

    a[6] = matrix[0][1] * matrix[1][2];
    b[6] = matrix[0][2] * matrix[1][1];
    minor[2][0] = a[6] - b[6];

    a[7] = matrix[0][0] * matrix[1][2];
    b[7] = matrix[0][2] * matrix[1][0];
    minor[2][1] = a[7] - b[7];

    a[8] = matrix[0][0] * matrix[1][1];
    b[8] = matrix[0][1] * matrix[1][0];
    minor[2][2] = a[8] - b[8];

    printf("\nMinor the given Matrix is :\n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d  ", minor[i][j]);
        }
        printf("\n");
    }
}

int cofactor3X3(int functype)
{

    int matrix[3][3];

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("Enter the value in [%d][%d] position : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe Matrix given is :\n");

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    /*
    a[0][0]     a[0][1]     a[0][2]
    a[1][0]     a[1][1]     a[1][2]
    a[2][0]     a[2][1]     a[2][2]
    */
    printf("Cofactor of Matrix given is :\n");
    int cofactor[3][3], a[9], b[9];
    a[0] = matrix[1][1] * matrix[2][2];
    b[0] = matrix[1][2] * matrix[2][1];
    cofactor[0][0] = a[0] - b[0];

    a[1] = matrix[1][0] * matrix[2][2];
    b[1] = matrix[1][2] * matrix[2][0];
    cofactor[0][1] = a[1] - b[1];
    cofactor[0][1] = -cofactor[0][1];

    a[2] = matrix[1][0] * matrix[2][1];
    b[2] = matrix[1][1] * matrix[2][0];
    cofactor[0][2] = a[2] - b[2];

    a[3] = matrix[0][1] * matrix[2][2];
    b[3] = matrix[0][2] * matrix[2][1];
    cofactor[1][0] = a[3] - b[3];
    cofactor[1][0] = -cofactor[1][0];

    a[4] = matrix[0][0] * matrix[2][2];
    b[4] = matrix[0][2] * matrix[2][0];
    cofactor[1][1] = a[4] - b[4];

    a[5] = matrix[0][0] * matrix[2][1];
    b[5] = matrix[0][1] * matrix[2][0];
    cofactor[1][2] = a[5] - b[5];
    cofactor[1][2] = -cofactor[1][2];

    a[6] = matrix[0][1] * matrix[1][2];
    b[6] = matrix[0][2] * matrix[1][1];
    cofactor[2][0] = a[6] - b[6];

    a[7] = matrix[0][0] * matrix[1][2];
    b[7] = matrix[0][2] * matrix[1][0];
    cofactor[2][1] = a[7] - b[7];
    cofactor[2][1] = -cofactor[2][1];

    a[8] = matrix[0][0] * matrix[1][1];
    b[8] = matrix[0][1] * matrix[1][0];
    cofactor[2][2] = a[8] - b[8];

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d  ", cofactor[i][j]);
        }
        printf("\n");
    }

    if (functype == 5)
    {
        int transpose[3][3];
        transpose[0][0] = cofactor[0][0];
        transpose[0][1] = cofactor[1][0];
        transpose[0][2] = cofactor[2][0];
        transpose[1][0] = cofactor[0][1];
        transpose[1][1] = cofactor[1][1];
        transpose[1][2] = cofactor[2][1];
        transpose[2][0] = cofactor[0][2];
        transpose[2][1] = cofactor[1][2];
        transpose[2][2] = cofactor[2][2];

        printf("The adjoint of given Matrix is :\n");
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                printf("%d  ", transpose[i][j]);
            }
            printf("\n");
        }
    }

    else if (functype == 6)
    {

        int transpose[3][3];
        transpose[0][0] = cofactor[0][0];
        transpose[0][1] = cofactor[1][0];
        transpose[0][2] = cofactor[2][0];
        transpose[1][0] = cofactor[0][1];
        transpose[1][1] = cofactor[1][1];
        transpose[1][2] = cofactor[2][1];
        transpose[2][0] = cofactor[0][2];
        transpose[2][1] = cofactor[1][2];
        transpose[2][2] = cofactor[2][2];

        printf("The adjoint of given Matrix is :\n");
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                printf("%d  ", transpose[i][j]);
            }
            printf("\n");
        }

        // Determinant
        int a[3], b[3], c[3], det[3];
        a[0] = matrix[1][1] * matrix[2][2];
        b[0] = matrix[1][2] * matrix[2][1];
        c[0] = a[0] - b[0];
        det[0] = matrix[0][0] * c[0];

        a[1] = matrix[1][0] * matrix[2][2];
        b[1] = matrix[1][2] * matrix[2][0];
        c[1] = a[1] - b[1];
        det[1] = matrix[0][1] * c[1];

        a[2] = matrix[1][0] * matrix[2][1];
        b[2] = matrix[1][1] * matrix[2][0];
        c[2] = a[2] - b[2];
        det[2] = matrix[0][2] * c[2];

        int output = det[0] - det[1] + det[2];

        printf("The determinat of given matrix is : %d\n", output);
        printf("output without dividing with determinant is :\n");
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                printf("%d  ", transpose[i][j] / output);
            }
            printf("\n");
        }
    }
}

int transpose(int matrixtype)
{
    if (matrixtype == 1)
    {
        printf("Enter the matrix which of transpose you want :\n");
        int matrix[2][2];
        for (int i = 0; i <= 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                printf("Enter the value in [%d][%d] position : ", i, j);
                scanf("%d", &matrix[i][j]);
            }
        }

        printf("\nThe Matrix given is :\n");

        for (int i = 0; i <= 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                printf("%d  ", matrix[i][j]);
            }
            printf("\n");
        }

        /*
        a[0][0]     a[0][1]     b[0][0]     b[1][0]
        a[1][0]     a[1][1]     b[0][1]     b[1][1]
        */

        int transpose[2][2];
        transpose[0][0] = matrix[0][0];
        transpose[0][1] = matrix[1][0];
        transpose[1][0] = matrix[0][1];
        transpose[1][1] = matrix[1][1];

        printf("\nThe transpose of given matrix is :\n");
        for (int i = 0; i <= 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                printf("%d ", transpose[i][j]);
            }
            printf("\n");
        }
    }

    else if (matrixtype == 2)
    {
        int matrix[3][3];
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                printf("Enter the values in [%d][%d] position : ", i, j);
                scanf("%d", &matrix[i][j]);
            }
        }

        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                printf("%d  ", matrix[i][j]);
            }
            printf("\n");
        }
        /*
        a[0][0]     a[0][1]     a[0][2]
        a[1][0]     a[1][1]     a[1][2]
        a[2][0]     a[2][1]     a[2][2]
        */
        int transpose[3][3];
        transpose[0][0] = matrix[0][0];
        transpose[0][1] = matrix[1][0];
        transpose[0][2] = matrix[2][0];
        transpose[1][0] = matrix[0][1];
        transpose[1][1] = matrix[1][1];
        transpose[1][2] = matrix[2][1];
        transpose[2][0] = matrix[0][2];
        transpose[2][1] = matrix[1][2];
        transpose[2][2] = matrix[2][2];

        printf("\nTranspose of the given Matrix is :\n");
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                printf("%d  ", transpose[i][j]);
            }
            printf("\n");
        }
    }
}

int main(int argc, char const *argv[])
{
    printf("Enter the no. which matrix you want to select :\n1st. 2X2 Matrix\n2nd. 3X3 Matrix\n3rd. Quiet Program\n");
    int matrixtype, matrixfunctiontype;
    scanf("%d", &matrixtype);

    if (matrixtype == 1)
    {
        printf("\nEnter the number which fuction you want to select :\n1st. Determinant\n2nd. Minor\n3rd. Cofactor\n4th. Transpose\n5th. Adjoint\n6th. Inverse\n7th. Quiet Program\n");
        scanf("%d", &matrixfunctiontype);

        if (matrixfunctiontype == 1)
        {
            // Determinant of Matrix 2X2
            printf("You have selected 2X2 Matrix(Determinat)!\n\n");
            printf("Enter the values in 2X2 Matrix :\n");
            det2X2();
        }
        // Minor of Matrix 2X2
        else if (matrixfunctiontype == 2)
        {
            printf("You have selected 2X2 Matrix(Minor)!\n\n");
            printf("Enter the values in 2X2 Matrix :\n");
            minor2X2();
        }
        // Cofactor of Matrix 2X2
        else if (matrixfunctiontype == 3)
        {
            printf("You have selected 2X2 Matrix!\n\n");
            printf("Enter the values in 2X2 Matrix :\n");
            cofactor2X2(matrixfunctiontype);
        }
        // Transpose of Matrix 2X2
        else if (matrixfunctiontype == 4)
        {
            printf("You have selected 2X2 Matrix!\n\n");
            printf("Enter the values in 2X2 Matrix :\n");
            transpose(matrixtype);
        }

        // Adjoint of Matrix 2X2
        else if (matrixfunctiontype == 5)
        {
            printf("You have selected 2X2 Matrix!\n\n");
            printf("Enter the values in 2X2 Matrix :\n");
            cofactor2X2(matrixfunctiontype);
        }
        // Inverse of Matrix 2X2
        else if (matrixfunctiontype == 6)
        {
            printf("You have selected 2X2 Matrix!\n\n");
            printf("Enter the values in 2X2 Matrix :\n");
            cofactor2X2(matrixfunctiontype);
        }

        else if (matrixfunctiontype == 7)
        {
            printf("Quiting Program...");
            goto end;
        }
        
    }

    else if (matrixtype == 2)
    {
        printf("\nEnter the number which fuction you want to select :\n1st. Determinant\n2nd. Minor\n3rd. Cofactor\n4th. Transpose\n5th. Adjoint\n6th. Inverse\n7th. Quit Program\n");
        scanf("%d", &matrixfunctiontype);

        if (matrixfunctiontype == 1)
        {
            printf("You have selected 3X3 Matrix!\n\n");
            printf("Enter the values in 3X3 Matrix :\n");
            det3X3();
        }

        else if (matrixfunctiontype == 2)
        {
            printf("You have selected 3X3 Matrix!\n\n");
            printf("Enter the values in 3X3 Matrix :\n");
            minor3X3();
        }

        else if (matrixfunctiontype == 3)
        {
            printf("You have selected 3X3 Matrix!\n\n");
            printf("Enter the values in 3X3 Matrix :\n");
            cofactor3X3(matrixfunctiontype);
        }

        else if (matrixfunctiontype == 4)
        {
            printf("You have selected 3X3 Matrix!\n\n");
            printf("Enter the values in 3X3 Matrix :\n");
            transpose(matrixtype);
        }

        else if (matrixfunctiontype == 5)
        {
            printf("You have selected 3X3 Matrix!\n\n");
            printf("Enter the values in 3X3 Matrix :\n");
            cofactor3X3(matrixfunctiontype);
        }

        else if (matrixfunctiontype == 6)
        {
            printf("You have selected 3X3 Matrix!\n\n");
            printf("Enter the values in 3X3 Matrix :\n");
            cofactor3X3(matrixfunctiontype);
        }

        else if (matrixfunctiontype == 7)
        {
            printf("Quiting Program...");
            goto end;
        }
        
    }

    else if (matrixtype == 3)
    {
        printf("Quieting Program...");
        goto end;
    }
    
    
    end:
    return 0;
}