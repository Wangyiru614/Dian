#include <stdio.h>
#include <string.h>

int main(){
    char input[8];	
	while(1){
	    printf("Please enter the instruction:\n");
		scanf("%7s",input);
	if (strcmp(input,"Dian")==0){
		printf("2002\n");
	}else if (strcmp(input,"Quit")==0){
		printf("The program is closed\n");
		break;
	}else {
		printf("Error\n");
	}
    }
    return 0;
	}
