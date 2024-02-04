/*Q4-Write a program which accept matrix and and check whether the matrix is identity matrix or not.
Identity matrix is a square matrix with 1's along the digonal from upper left to  lower right and 0's in all other positions.
If it satisfies the structure as explained before then the matrix is called as identity matrix.

Input -  1  0   0   0
         0  1   0   0
         0  0   1   0
         0  0   0   1
         
Output - True
*/

import java.util.Scanner;

class A47Q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of rows and columns in the square matrix:");
        int size = sc.nextInt();

        int[][] matrix = new int[size][size];

        System.out.println("Enter the elements of the matrix:");

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        System.out.println("Given Matrix:");
        displayMatrix(matrix, size, size);

        boolean result = ChkIdentity(matrix, size, size);

        if (result) {
            System.out.println("The given matrix is an Identity Matrix.");
        } else {
            System.out.println("The given matrix is not an Identity Matrix.");
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

    static boolean ChkIdentity(int Arr[][], int iRow, int iCol) {
        // Check if the matrix is a square matrix
        if (iRow != iCol) {
            System.out.println("The given matrix is not a square matrix.");
            return false;
        }

        // Check for the identity matrix conditions
        for (int i = 0; i < iRow; i++) {
            for (int j = 0; j < iCol; j++) {
                if (i == j && Arr[i][j] != 1) {
                    return false;
                } else if (i != j && Arr[i][j] != 0) {
                    return false;
                }
            }
        }
        return true;
    }
}
