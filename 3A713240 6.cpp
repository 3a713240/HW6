#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
	int yr;  
	printf("��J�@�Ӧ褸�~�ơG");
	scanf("%d" ,&yr);
	if(yr % 400 == 0 )  
			printf("%d�~�O�|�~\n",yr);  
	else if(yr % 100 == 0)  
			printf("%d�~�O���~\n",yr);
	else if(yr % 4 == 0)  
			printf("%d�~�O�|�~\n",yr);
	else
			printf("%d�~�O���~\n",yr); 
    system("pause"); 
    return 0;  
}
