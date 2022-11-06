#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char A[1000];
    scanf("%s",&A);
    //printf("%s",s);
    int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count0=0;
    for(int i=0;i<strlen(A);i++)
    {
    	if(A[i]=='0')
    		count0++;
    	else if(A[i]=='1')
    		count1++;
    	else if(A[i]=='2')
    		count2++;
    	else if(A[i]=='3')
    		count3++;
    	else if(A[i]=='4')
    		count4++;
    	else if(A[i]=='5')
    		count5++;
    	else if(A[i]=='6')
    		count6++;
    	else if(A[i]=='7')
    		count7++;
    	else if(A[i]=='8')
    		count8++;
    	else if(A[i]=='9')
    		count9++;
    						
    			
	}
	printf("%d %d %d %d %d %d %d %d %d %d",count0,count1,count2,count3,count4,count5,count6,count7,count8,count9);
    
      
    return 0;
}

