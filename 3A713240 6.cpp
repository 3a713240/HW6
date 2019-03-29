#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
	int yr;  
	printf("輸入一個西元年數：");
	scanf("%d" ,&yr);
	if(yr % 400 == 0 )  
			printf("%d年是閏年\n",yr);  
	else if(yr % 100 == 0)  
			printf("%d年是平年\n",yr);
	else if(yr % 4 == 0)  
			printf("%d年是閏年\n",yr);
	else
			printf("%d年是平年\n",yr); 
    system("pause"); 
    return 0;  
}
