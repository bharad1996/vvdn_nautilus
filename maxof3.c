
#include <stdio.h>

int main()
{
     float d,a,b,c,i;
     scanf("\n  %f %f %f",&a,&b,&c);							/*Input three integers*/
     if ( (a- (int)a==0) && (b- (int)b==0) &&(c- (int)c==0) )
     {
	  d=(((a>b) ? (a>c?a:c) :(b>c?b:c))- ( (a<b) ?(a<c?a:c) :(b<c?b:c)));		
	  printf("Difference b/w max no: and min no: is :%d  \n",d );				/*Display difference b/w max no: and min no:*/
	  
          for (i=0;d>0;i++)
	  {
	       d=d/10;
	  }
	  printf("No: of digits of difference is %d \n",i);
     } else {
          goto error;
     return 0;

error: printf("Enter valid integers");

    }

}




