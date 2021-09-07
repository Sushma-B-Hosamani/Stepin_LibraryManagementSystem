
#include "fun.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"


int count=0;
int size;
char password[8]="library";


void head() {

    printf("\t###########################################################################");
	printf("\n\t############              Library management System            ############");
	printf("\n\t############                (Mini Project)                     ############");
	printf("\n\t###########################################################################");
}


void menu()
{
 number();
int ch;
do
{
system("cls");
head();
printf("\n\n1. Add book information\n2. Display book information\n");
printf("3. List all books of given author\n");
printf("4. List the title of specified book\n");
printf("5. List the count of books in the library\n");
printf("6. Exit");

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
case 2:
    displaybook();
    break;

case 3:
    listofbooks_by_author();
    break;

case 4:
    books_by_title();
    break;

case 5:
    countbook();
    break;

case 6:
    return;

}
getch();
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

		while(ch!=13) {
			ch=getch();

			if(ch!=13 && ch!=8) {
			putch('*');
			pass[j] = ch;
			j++;
			}
		}
		pass[j] = '\0';

		if((strcmp(us,"admin")==0)&&strcmp(pass,"pass")==0)
        {
			printf("\n\n\n\t\t\tLOGIN SUCCESSFULL!!!\n\t\t\tPress any key to continue\n\n\n\n");
			getch();
            menu();
		}
        else
        {
            printf("\n\n\t\t Incorrect password entered");
            printf("\n\n\t\t Press any key to continue");
            getch();
            return;
        }  
}


int main() {
	system("cls");
	login();
	return 0;
}
