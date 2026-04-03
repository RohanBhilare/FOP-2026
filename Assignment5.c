#include <stdio.h>

int main() {
    int choice;

    printf("Matrix Operations\n");
    printf("1. Addition of two matrices\n");
    printf("2. Saddle Point\n");
    printf("3. Inverse of 2x2 matrix\n");
    printf("4. Check Magic Square (3x3)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // ADDITION 
    if(choice == 1) {
        int r, c, i, j;
        int A[10][10], B[10][10], Sum[10][10];

        printf("Enter rows and columns: ");
        scanf("%d %d", &r, &c);

        printf("Enter first matrix:\n");
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                scanf("%d",&A[i][j]);

        printf("Enter second matrix:\n");
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                scanf("%d",&B[i][j]);

        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                Sum[i][j] = A[i][j] + B[i][j];

        printf("Sum of matrices:\n");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++)
                printf("%d ", Sum[i][j]);
            printf("\n");
        }
    }

    //  SADDLE POINT
    else if(choice == 2) {
        int r, c, i, j, k;
        int A[10][10];
        int min, col;

        printf("Enter rows and columns: ");
        scanf("%d %d", &r, &c);

        printf("Enter matrix:\n");
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                scanf("%d",&A[i][j]);

        for(i=0;i<r;i++) {
            min = A[i][0];
            col = 0;

            for(j=1;j<c;j++) {
                if(A[i][j] < min) {
                    min = A[i][j];
                    col = j;
                }
            }

            for(k=0;k<r;k++) {
                if(A[k][col] > min)
                    break;
            }

            if(k==r)
                printf("Saddle Point is %d\n", min);
        }
    }

    //  INVERSE OF 2x2 
    else if(choice == 3) {
        int A[2][2];
        int det;

        printf("Enter 2x2 matrix:\n");
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                scanf("%d",&A[i][j]);

        det = A[0][0]*A[1][1] - A[0][1]*A[1][0];

        if(det == 0) {
            printf("Inverse does not exist\n");
        } else {
            printf("Inverse matrix:\n");
            printf("%.2f %.2f\n", A[1][1]/(float)det, -A[0][1]/(float)det);
            printf("%.2f %.2f\n", -A[1][0]/(float)det, A[0][0]/(float)det);
        }
    }

    //  MAGIC SQUARE 
    else if(choice == 4) {
        int A[3][3];
    int sumRow1, sumRow2, sumRow3;
    int sumCol1, sumCol2, sumCol3;
    int sumDiag1, sumDiag2;

    printf("Enter 3x3 matrix:\n");
    scanf("%d %d %d", &A[0][0], &A[0][1], &A[0][2]);
    scanf("%d %d %d", &A[1][0], &A[1][1], &A[1][2]);
    scanf("%d %d %d", &A[2][0], &A[2][1], &A[2][2]);

  
    sumRow1 = A[0][0] + A[0][1] + A[0][2];
    sumRow2 = A[1][0] + A[1][1] + A[1][2];
    sumRow3 = A[2][0] + A[2][1] + A[2][2];

 
    sumCol1 = A[0][0] + A[1][0] + A[2][0];
    sumCol2 = A[0][1] + A[1][1] + A[2][1];
    sumCol3 = A[0][2] + A[1][2] + A[2][2];

  
    sumDiag1 = A[0][0] + A[1][1] + A[2][2];
    sumDiag2 = A[0][2] + A[1][1] + A[2][0];


    if(sumRow1 == sumRow2 && sumRow2 == sumRow3 &&
       sumRow1 == sumCol1 && sumCol1 == sumCol2 && sumCol2 == sumCol3 &&
       sumRow1 == sumDiag1 && sumDiag1 == sumDiag2) {
        printf("It is a Magic Square\n");
    } else {
        printf("Not a Magic Square\n");
    }
}

    return 0;
}
