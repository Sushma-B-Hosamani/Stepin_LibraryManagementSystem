#include "fun.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"


int count=0;
int size;


void head() {

    printf("\t###########################################################################");
	printf("\n\t############              Library management System            ############");
	printf("\n\t############                (Mini Project)                     ############");
	printf("\n\t###########################################################################\n\n");

}


void menu()
{
 
int ch;
do
{
system("cls");
head();
printf("\n\n1. Add book information\n2. Display book information\n");
printf("3. Search\n");
printf("4. List the count of books in the library\n");
printf("5. Exit");

printf ("\n\nEnter one of the above : ");
scanf("%d",&ch);
fflush(stdin);
switch (ch)
{
/* Add book */
case 1:
    printf("Maximum %d books can be added\n",size);
    addbook();
    break;
/* Display book */	
case 2:
    displaybook();
    break;
/* Search book */
case 3:
    search();
	break;
/* Count book */
case 4:
    countbook();
    break;

case 5:
	exit1();
    return;
default:
	printf("Please enter a valid input\n");

}
getchar();

}while(1);


}


void login(void) {
	char us[20],pass[20],ch='\0';
	int j=0;
	
		system("cls");

		printf("\n\t\t\t\t\t***Login Page***");
		printf("\n\n\n\t\t\tusername => ");
		gets(us);
		printf("\n\t\t\tpassword => ");
        gets(pass);
		

		if((strcmp(us,"admin")==0)&&strcmp(pass,"pass")==0)
        {
			printf("\n\n\n\t\t\tLOGIN SUCCESSFULL!!!\n\t\t\tPress any key to continue\n\n\n\n");
			
            number();
		}
        else
        {
            printf("\n\n\t\t Incorrect password entered");
            printf("\n\n\t\t Press any key to continue");
            
            return;
        }  
}


void search(void)
{
    int a,c;
    printf("\n\nPlease enter the credential through which you want to perform search\n\n");
    printf("1-Author\n2-Title\n");
    printf("Credential:");
    scanf("%d",&a);
    switch(a)
    {
    case 1:listofbooks_by_author();

        printf("\n\nPress 0 to go back to main menu or press 1 to exit\n");
        scanf("%d",&c);

        if(c==0)
            menu();
        else
            exit1();
        break;


    case 2:
		books_by_title();

        printf("\n\nPress 0 to go back to main menu or press 1 to exit\n");
        scanf("%d",&c);

        if(c==0)
            menu();
        else
            exit1();
        break;

    default:

        printf("Please enter a valid input\n");
        printf("\nPress 0 to go back to main menu or Press 1 to exit after input\n\n");

        scanf("%d",&c);

        if(c==0)
            menu();
        else
            exit1();

    }

}
void exit1(void)
{
    printf("\n\n                     Thanks For Using The Software                \n");
    return;
}

int main() {
	system("cls");
	login();
	return 0;
}