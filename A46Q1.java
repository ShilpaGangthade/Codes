/*Q1-Write a program which accept matrix from user and return addition of diagonal elemements.
Input -  3  2   5   9
         4  3   2   2
         8  4   1   9
         3  9   7   5
Output - 12 */


import java.util.*;

class A46Q1 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();

        // Function call to add diagonal elements
        iRet = mobj.AddDiagonal();
        System.out.println("Sum of diagonal elements: " + iRet);

        mobj = null;
        System.gc();
    }
}

class Matrix {
    protected int Arr[][];

    public Matrix(int A, int B) {
        Arr = new int[A][B];
    }

    protected void finalize() {
        Arr = null;
    }

    public void Accept() {
        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        System.out.println("Enter the elements : ");
        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display() {
        int i = 0, j = 0;

        System.out.println("Entered elements are : ");
        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }
}

class MyMatrix extends Matrix {
    public MyMatrix(int A, int B) {
        super(A, B);
    }

    int AddDiagonal() {
        int iSum = 0;

        for (int i = 0; i < Arr.length; i++) {
            for (int j = 0; j < Arr[i].length; j++) {
                if (i == j) {
                    iSum = iSum + Arr[i][j];
                }
            }
        }

        return iSum;
    }
}
