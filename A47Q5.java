/*Q5-Write a program which accept matrix and check whether the matrix is Sparse matrix or not.
Sparse matrix is a matrix with the majority of its elements equal to zero.

Input -  1  0   3   0
         0  6   0   0
         0  0   1   0
         9  0   0   9
        
Output - True
         
*/

import java.util.Scanner;

class A47Q5 
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of rows in the matrix:");
        int rows = sc.nextInt();

        System.out.println("Enter the number of columns in the matrix:");
        int cols = sc.nextInt();

        int[][] matrix = new int[rows][cols];

        System.out.println("Enter the elements of the matrix:");

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        System.out.println("Given Matrix:");
        displayMatrix(matrix, rows, cols);

        boolean result = ChkSparse(matrix, rows, cols);

        if (result) {
            System.out.println("The given matrix is a Sparse Matrix.");
        } else {
            System.out.println("The given matrix is not a Sparse Matrix.");
        }
    }

    static void displayMatrix(int Arr[][], int iRow, int iCol) {
        for (int i = 0; i < iRow; i++) {
            for (int j = 0; j < iCol; j++) {
                System.out.print(Arr[i][j] + " ");
            }
            System.out.println();
        }
    }

    static boolean ChkSparse(int Arr[][], int iRow, int iCol) {
        int countZeros = 0;
        int totalCount = iRow * iCol;

        // Count the number of zeros in the matrix
        for (int i = 0; i < iRow; i++) {
            for (int j = 0; j < iCol; j++) {
                if (Arr[i][j] == 0) {
                    countZeros++;
                }
            }
        }

        // Check if the majority of elements are zero
        if (countZeros > totalCount / 2) {
            return true;
        } else {
            return false;
        }
    }
}
