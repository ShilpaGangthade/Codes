/*
Q3)  Write a Java program which accept N numbers from user and accept one another number as NO, return index of last
occurence of that NO.

Input:   N  : 6
        NO  : 66
        Elements :85 66 3 66 93 88
Output: 3

Input:   N  : 6
        NO  : 93
        Elements :85 66 3 66 93 88
Output: 4

Input:   N  : 6
        NO  : 12
        Elements :85 11 3 15 11 111
Output: -1


Program Layout:
*/
import java.util.*;

 class A35Q3
 {
    public static int LastOcc(int Arr[],int iNo)
    {
          int i=0;
          for(i=(Arr.length-1);i>=0;i--)
          {
                if(Arr[i]==iNo)
                {
                        return i;
                }
          }
          return -1;
    }
    public static void main(String arg[])
    {
        int iSize = 0, iCnt = 0 , iRet = 0, No = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("No of elemetns : ");
        iSize=sobj.nextInt();
        System.out.println("NO is : ");
        No = sobj.nextInt();

        int Brr[]=new int[iSize];
        System.out.println("Elements are : ");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
                Brr[iCnt]=sobj.nextInt();
        }
        iRet=LastOcc(Brr,No);

        System.out.println("Last occurance of No is at : "+iRet);

    }
 }