/*Q4-Write a program which accept matrix and display addition of elements from each column.
Input -  3  2   5   9
         4  3   2   2
         8  4   1   9
         3  9   7   5
Output - 18 18  15  25 */

import java.util.Scanner;

class A46Q4
 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the number of rows:");
        int rows = scanner.nextInt();

        System.out.println("Enter the number of columns:");
        int cols = scanner.nextInt();

        int[][] matrix = new int[rows][cols];

        System.out.println("Enter the elements of the matrix:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }

        int[] columnSums = getColumnSums(matrix);

        System.out.println("The addition of elements from each column is:");
        for (int sum : columnSums) {
            System.out.print(sum + " ");
        }
    }

    // Function to calculate the sum of elements from each column
    private static int[] getColumnSums(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        int[] columnSums = new int[cols];

        for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                columnSums[j] += matrix[i][j];
            }
        }

        return columnSums;
    }
}
