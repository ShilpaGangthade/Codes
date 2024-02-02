/*
Q5)  Write a Java program which accept N numbers from user and return product of all odd elements.


Input:  N  : 6
        Elements :15 66 3 70  10 88
Output: 45

Input:   N  : 6
        Elements :44 66 72 70 10 88
Output: 0

Program Layout:
*/
import java.util.*;

 class A35Q5
 {
    public static int Product(int Brr[])
    {
         int i=0, iMult=1;
         boolean Odd = false;
         for(i=0;i<Brr.length;i++)
         {
                if(Brr[i]%2 != 0)
                {
                       iMult=iMult*Brr[i];
                       Odd = true;
                }
                
                
         }
         return Odd ? iMult : 0;
    }
    public static void main(String args[])
    {
        int iSize = 0, iRet = 0, iCnt=0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("No ofelements are : ");
        iSize=sobj.nextInt();
        int Arr[]=new int[iSize];
        System.out.println("Elements are : ");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
                Arr[iCnt]=sobj.nextInt();
        }
        iRet=Product(Arr);
        
        System.out.println("Product of odd numbers is : "+iRet);
    }
 }