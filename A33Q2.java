/*
Q2) Write a Java program which accept N numbers from user and display all such elements which are divisible by 5. 

Input:   N : 6
         Elememts:85 66 3 80 93 88

Output: 85 80 

Program Layout:
*/
import java.util.*;

 class A33Q2
 {
    public static void Display(int Brr[])
    {
         int i=0;
         System.out.println("Number divisible by 5 are : \t");
         for(i=0;i<Brr.length;i++)
         {
            if((Brr[i])%5==0)
            {
                  System.out.print(+Brr[i]+"\t");
            }
         }
    }
    public static void main(String arg[])
    {
      int iSize = 0;
      int iCnt = 0;

      Scanner sobj = new Scanner(System.in);
      
      System.out.println("No of elements you want enter : ");
      iSize = sobj.nextInt();

      int Arr[]= new int[iSize];
      System.out.println("Array elements are : ");
      for(iCnt=0; iCnt<iSize;iCnt++)
      {
            Arr[iCnt]=sobj.nextInt();
      }
      Display(Arr);

    }
 }