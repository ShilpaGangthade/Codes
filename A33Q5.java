/*
Q5) Write a Java program which accept N numbers from user and display all such elements which are multiples of 11. 

Input:   N : 6
         Elememts:85 66 3 55 93 88

Output: 66 55 88 

Program Layout:
*/
import java.util.*;

 class A33Q5
 {
    public static void Display(int Arr[])
    {
          int i = 0;
          System.out.print("Multiples of 11 are : \t");
          for(i=0;i<Arr.length;i++)
          {
            if(Arr[i]%11==0)
            {
                  System.out.print(Arr[i]+"\t");
            }
            
          }
    }
    public static void main (String arg[])
    {
      int iCnt =0, iSize = 0;

      Scanner sobj = new Scanner(System.in);

      System.out.println("No of elements you want to enter : ");
      iSize = sobj.nextInt();

      int Brr[] = new int[iSize];
      System.out.println("Elements are : ");
      for(iCnt=0;iCnt<iSize;iCnt++)
      {
            Brr[iCnt]=sobj.nextInt();
      }
      Display(Brr);
    }
 }