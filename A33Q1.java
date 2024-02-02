/*
Q1) Write a Java program which accept N numbers from user and return difference between summation of even elements and summation of odd
elements. 

Input:   N : 6
         Elememts:85 66 3 80 93 88
         Output : 234-181 = 53

Program Layout:


*/
import java.util.*;

 class A33Q1
 {
    public static int Difference(int Brr[])
    {
         int iCnt =0,iEven = 0, iOdd =0;
         for(iCnt=0;iCnt<Brr.length;iCnt++)
         {
          if((Brr[iCnt])%2==0)
          {
             iEven=iEven+Brr[iCnt];
          }
          else 
        {
          iOdd=iOdd+Brr[iCnt];
        }
         }
         return(iEven-iOdd);
    }
    public static void main(String arg[])
    {
      int No = 0;
      int iCnt = 0,iRet = 0;

      Scanner sobj = new Scanner(System.in);

      System.out.println("No of elements you want to enter : \t");
      No = sobj.nextInt();

      int Arr[]=new int[No];
      System.out.println("Elements are : ");
      for(iCnt=0;iCnt<No;iCnt++)
      {
        Arr[iCnt]=sobj.nextInt();
      }
      iRet = Difference(Arr);

      System.out.println("Difference is : "+iRet);
    }
 }