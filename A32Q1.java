/*
Q1) Write a Java program which accept string from user and count number of capital characters. 

Input: "Marvellous Multi OS"
Output: 4
*/
 import java.util.*;

 class A32Q1
 {
    public static int CountCapital(String str)
    {
        char Arr[]=str.toCharArray();
        int iCnt = 0;
        int iCount = 0;

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
          if((Arr[iCnt]>='A') && (Arr[iCnt]<='Z'))
          {
            iCount++;
          }
        }
        return iCount;
    }
    public static void main(String Arg[])
    {
      int iRet = 0;
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the String : \n");
      String st = sobj.nextLine();

      iRet = CountCapital(st);

      System.out.println("No. of capital letters are : "+iRet);
    }
 }