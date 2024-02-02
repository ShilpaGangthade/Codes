/*
Q4)  Write a Java program which accept N numbers from user and accept the range, Display all elements from that range.


Input:   N  : 6
        Start :60
        Last  : 90
        Elements :85 66 3 76  93 88
Output: 85 66 76 88 

Input:   N  : 6
        Start :30
        Last  : 50
        Elements :85 66 3 76  93 88
Output: 

Program Layout:
*/
import java.util.*;

 class A35Q4
 {
    public static void Display(int Brr[],int iStart, int iEnd)
    {
          int i=0;
          for(i=0;i<Brr.length;i++)
          {
                if((Brr[i]>iStart)&&(Brr[i]<iEnd))
                {
                        System.out.print(Brr[i]+"\t");
                }
          }
    }
    public static void main(String args[])
    {
        int iSize = 0 ,  Start = 0, End = 0, iCnt = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("No of elements : ");
        iSize=sobj.nextInt();
        System.out.println("From : ");
        Start=sobj.nextInt();
        System.out.println("To : ");
        End=sobj.nextInt();
        int Arr[]=new int[iSize];
        System.out.println("Elements are : ");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
                Arr[iCnt]=sobj.nextInt();
        }
        Display(Arr,Start,End);
    }
 }