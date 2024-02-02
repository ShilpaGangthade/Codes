/*
Q1)  Write a Java program which accept N numbers from user and accept one another number as NO, check whether NO is present or not.

Input:   N  : 6
        NO  : 66
        Elements :85 66 3 66 93 88
Output: TRUE

Input:   N  : 6
        NO  : 12
        Elements :85 11 3 15 11 111
Output: FALSE


Program Layout:
*/
import java.util.*;

 class A35Q1
 {
    public static boolean Check(int Brr[],int iNo)
    {
          int i=0;
          for(i=0;i<Brr.length;i++)
          {
                if(Brr[i]==iNo)
                {
                        return true;
                }
          }
          return false;
          
    }
    public static void main(String arg[])
    {
        int iSize = 0 , iCnt= 0 , No=0;
        boolean bRet = false;
        Scanner sobj = new Scanner(System.in);

        System.out.println("No of elements : ");
        iSize=sobj.nextInt();

        System.out.println("No : ");
        No=sobj.nextInt();

        int Arr[]=new int[iSize];
        System.out.println("Elements are : \t");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
                Arr[iCnt]=sobj.nextInt();
        }
        bRet=Check(Arr,No);

        if(bRet==true)
        {
                System.out.println("TRUE");
        }
        else 
        {
                System.out.println("FALSE");
        }
    }
 }