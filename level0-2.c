#include <stdio.h>
#include <string.h>

int main(){
	FILE *file = fopen("data.txt" ,"r");
	if (!file){
		printf("Failed to open the file\n");
		return 1;
	}
	char input[20],line[50],key[11],value[11];
	
	printf("Please enter the key for query. To exit the input, please type 'Quit':\n");
	
	while (scanf("%s",input)==1){
		if (strcmp(input,"Quit")==0)
		break;
		int found = 0;
		rewind(file);
		
	while (fgets(line,50,file)){
		char *colon = strchr(line,':');
		if (!colon) continue;
		
		*colon = '\0';
		strncpy(key,line,10);
		key[10]='\0';
		strncpy(value,colon+1,10);
		value[10]='\0';
		
		char *newline = strchr(value,'\n');
		if (newline){
			*newline='\0';	
			} 
		if (strcmp(input,key)==0){
			printf("%s\n",value);
			found=1;
			break;
		}
	}
	if (!found) printf("Error\n");
	}
	
	fclose(file);
	printf("The program is closed\n");
	return 0;
}
