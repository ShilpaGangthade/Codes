/*
Q4) Write a Java program which accept string from user and check whether it contains vowel in it or not.

Input: "marvellous"
Output: TRUE

Input: "Demo"
Output: TRUE

Input: "xyz"
Output: FALSE


*/
import java.util.*;

 class A32Q4
 {
    public static boolean ChkVowel(String str)
    {
       char Arr[]= str.toCharArray();
       int iCnt = 0;

       for(iCnt=0; iCnt<Arr.length;iCnt++)
       {
         if((Arr[iCnt]=='a') || (Arr[iCnt]=='e') ||(Arr[iCnt]=='i') ||(Arr[iCnt]=='o') ||(Arr[iCnt]=='u')||(Arr[iCnt]=='A') || (Arr[iCnt]=='E') || (Arr[iCnt]=='I') || (Arr[iCnt]=='O') || (Arr[iCnt]=='U'))
         {
            return true;
         }
      
       }
       return false;
    }
    public static void main(String arg[])
    {
      boolean bRet = false;
      String st = null;
      Scanner sobj = new Scanner(System.in);

      System.out.println("String is : \n");
      st = sobj.nextLine();

      bRet=ChkVowel(st);

      if(bRet == true){System.out.println("TRUE");}
      else{System.out.println("FALSE");}
    }
 }