/*
Q1)  Write a Java program which accepts 2 strings from user and concat N characters of second string after first string. Value of N should 
be accepted from user.

Note: If third parameter is greater than the size of second string then concat whole string after first string.

Input: "Marvellous Infosystems"
       "Logic Building"
        5
Output: "Marvellous Infosystems Logic"


Program Layout:
*/
import java.util.*;

 class A36Q1
 {
    public static  String StrNCatX(String src, String dest, int iNo)
    {
         int iCnt=0;
         
         char Brr[]=dest.toCharArray();
         if(iNo>Brr.length)
         {
            iNo=Brr.length;
         }
         src=src+" ";
         for(iCnt=0;iCnt<iNo;iCnt++)
         {
            src = src+Brr[iCnt];
         }
         
         return src;
        
      }
    public static void main(String args[])
    {
      String str1 = null, str2 = null,sRet=null;
      int No = 0;
      Scanner sobj = new Scanner(System.in);
      System.out.println("First String is : ");
      str1=sobj.nextLine();
      System.out.println("Second String is : ");
      str2=sobj.nextLine();
      System.out.println("Value of N : ");
      No=sobj.nextInt();
      sRet=StrNCatX(str1,str2,No);
      System.out.println("Concatenated String is : "+sRet);
      
    }
 }