#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include<ctype.h>
string ari(string);

string ari(string s)

{ 
    int l=strlen(s);
    float word=0;
    float sentence=0;
    float letter=0;
    float res;

  for (int i=0; i<=l;i++)
  {  
    if(isalnum(s[i]))
     {letter++;} 
   
     if(*(s+i)==' ')   
       { word++; }
       
     if( *(s+i)=='.' || *(s+i)=='?') 
       { sentence++; }     
  }
  res=(4.71*(letter/word)+(0.5*( word/sentence))-21.43);
  if(res <=1) {return "Kindergarten";}
  else if(res<=2 ) { return "First/Second Grade";}
  else if(res<=3)  {return "Third Grade"; }
  else if(res<=4)  {return "Fourth Grade";}
  else if(res<=5)  {return "Fifth Grade";}
  else if(res<=6)  {return "Sixth Grade";}
  else if(res<=7)  {return "Seventh Grade"; }
  else if(res<=8)  {return "Eighth Grade";}
  else if(res<=9)  {return "Ninth Grade";}
  else if(res<=10)  {return "Tenth Grade";}
  else if(res<=11)  {return "Eleventh Grade";}
  else if(res<=12)  {return "Twelfth grade";}
  else if(res<=13)  {return "College student";}
  else  {return "Professor";}
}
