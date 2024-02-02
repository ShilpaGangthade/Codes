/*
Q4) Write a Java program which accept N numbers from user and display all such elements which are divisible by 3 and 5. 

Input:   N : 6
         Elememts:85 66 3 15 93 88

Output: 15

Program Layout:
*/
import java.util.*;

 class A33Q4
 {
    public static void Display(int Arr[])
    {
          int i = 0;
          System.out.println("Elements divisible by 3 and 5 are : \t");
          for(i=0;i<Arr.length;i++)
          {
            if((Arr[i]%3==0) && (Arr[i]%5==0))
            {
                  System.out.print(Arr[i]);
            }
          }
    }

    public static void main(String arg[])
    {
      int iSize = 0, iCnt = 0;
      Scanner sobj = new Scanner(System.in);

      System.out.println("No of elements are : ");
      iSize = sobj.nextInt();

      int Brr[]=new int[iSize];
      System.out.println("Elements are :");
      for(iCnt=0;iCnt<iSize;iCnt++)
      {
           Brr[iCnt]=sobj.nextInt();
      }

      Display(Brr);
    }

 }