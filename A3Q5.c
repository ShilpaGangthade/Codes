//Q4.Accepts one character from user and check whether that character is vowel (a,e,i,o,u) or not.
//Input : E  Output : TRUE
//Input : d  Output : FALSE
 
 #include<stdio.h>
 #include<stdbool.h>

   typedef int  BOOL  ;
   #define TRUE   1
   #define  FALSE      0

       char   ChkVowel(char  cVal  )
     {
      if((cVal=='a') || (cVal =='e') || (cVal =='i') || (cVal =='o') ||(cVal =='u')   )
      {
        return TRUE;
      }
      else
      {
        return FALSE;
      }
      
    }
   
   int main()
   {
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet ==  TRUE )
    {
        printf("It is Vowel");
    }
    else
     {
        printf("It is not Vowel");
    }
         
 return 0;
   }