/*
Q3) Write a Java program which accept N numbers from user and display all such elements which are even divisible by 5. 

Input:   N : 6
         Elememts:85 66 3 80 93 88

Output: 80 

Program Layout:
*/
import java.util.*;

 class A33Q3
 {
    public static void Difference(int Arr[])
    {
         int i=0;
         System.out.print("Even no. divisible by five are :\t");
         for(i=0;i<Arr.length;i++)
         {
            if((Arr[i]%2==0) && (Arr[i]%5==0))
            {
                   System.out.print(Arr[i]+"\t");
            }
           
         }
    }
    public static void main(String arg[])
    {
      int iSize = 0 , iCnt= 0;

      Scanner sobj = new Scanner(System.in);

      System.out.println("No of elements you want enter : ");
      iSize = sobj.nextInt();

      int Brr[]= new int[iSize];
      System.out.println("Array elements are : ");
      for(iCnt=0;iCnt<iSize;iCnt++)
      {
            Brr[iCnt]=sobj.nextInt();
      }

      Difference(Brr);
    }
 }