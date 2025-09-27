#include <stdio.h>
#include <string.h>

int main(){
	char input[10];
	char user[10] = "";
	printf("Available commands£ºLogin,Exit,Quit\n");
	while(1){
		printf("Please enter\n");
		scanf("%s",input);
		
		if (strcmp(input,"Login")==0){
		if (strlen(user)>0){
			printf("Please enter'Exit'logout\n"); 
			continue;
		}
		
		while(1){
	    printf("Enter username A-Z or Admin(Enter 'back'to return)£º");
		scanf("%s",user);
		
		if (strcmp(user,"back")==0){
			printf("Login has been cancelled\n");
			user [0]='\0';
			break;
		}else if (strcmp(user,"Admin")==0){
		printf("Administrator login successful\n");
		break;
		}else if (strlen(user)==1 && user[0] >= 'A'&& user[0] <= 'Z'){
		printf("Login successful\n");
		break;
		}else {
		printf("Invalid user\n");
		user[0] = '\0'	;
					}
			}
			}else if (strcmp(input,"Exit")==0){
				if (strlen(user)==0){
					printf("Please enter user name\n");
				}else {
					printf("user %s logout\n",user);
					user[0] = '\0';
				}
			}else if (strcmp(input,"Quit")==0){
				printf("Program exited\n");
				break;
			}else {
				printf("Invalid command\n");
			}
}
return 0;
}
