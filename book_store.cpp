#include <stdio.h>
#include<string.h>
#include <ctype.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define TRUE 1

typedef struct
{
	int id;
	char title[80];
	char author[80];
	char pblshr[80];
	int quantity;
	float price;
}book;

int choice;
int  search_c;
int  s_key;

void search(book data);
void menu();
void menu_two();
void exit_1();
book getInput(book data);
void writeInput(book data);
void wel_come(void);
void deleteInput();
void displayInput();

book data;
char s_name[100];
char  text;

FILE *fpt;

/* *********************************************************************************/
/* *********************************Welcome*****************************************/
/* *********************************************************************************/

void wel_come(void)
{
	time_t t;
	time(&t);
	printf("\n");
	printf("----------------------------------------------------");
	printf("--------------------------------------------------------\n");
	printf("\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd");
	printf("\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd");
	printf("\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd");
	printf("\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\n");
	
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	
	printf("\xbd\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\xbd\t     WELCOME TO \t \xbd\t\t\t\t\t\t\xbd\n\n");
	printf("\xbd\t\t\t\t\xbd      B O O K   S T O R E    \t \xbd\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\t\t\t\t\t\t\xbd\n");
    
	printf("\n");
	
	
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	printf("\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
	
	
		
		printf("\t\t\t\t\t%s",ctime(&t));
	

	
	printf("\n\n\t\t\tPress any key to continue.........\t\t\t\t\t\t\t\t\t\t\n");
	 
getch();

system("cls");

}
/* *********************************************************************************/
/* *********************************Colour*****************************************/
/* *********************************************************************************/

void printChar(char ch,int n)
{
    while(n--)
    {
        putchar(ch);
    }
}

/* *********************************************************************************/
/* *********************************TITLE*****************************************/
/* *********************************************************************************/

void title()
{
    system("cls");
    system("COLOR 03");
    printf("\n\n\n\n\t\t\t");
    printChar('=',15);
    printf(" B O O K   S T O R E  ");
    printChar('=',15);
    printf("\n\n\n");
    printf("\t\t\t");
    printChar('=',18);
    printf(" S Y S T E M ");
    printChar('=',21);
	printf("\n");
}
/* *********************************************************************************/
/* *********************************LOGIN*****************************************/
/* *********************************************************************************/

void login()
{

      int a=0;
     int i=0;
    char uname[10];
	 char c=' '; 
    char pword[10];
	char code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{
	title();
    printf("\n\n\n\t\t  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb LOGIN ");
	printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  ");
    printf("\n\n \n                        USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n                        PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13)  
		break;
	    else 
		printf("*");
	    i++;
	}
	pword[i]='\0';

	i=0;

		if(strcmp(uname,"1234")==0 && strcmp(pword,"1234")==0)
	{
	printf("  \n\n\n \t\t!!!! LOGIN IS SUCCESSFUL");
	printf("\n\n \t\tSYSTEM IS LOADING. PLEASE WAIT... \n\t\t");
    
	for(i=0; i<5; i++)
    {
        printf(".");
        Sleep(500);
    }
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();//holds the screen
	break;
	
	}
	
	else
	{
		printf("\n\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;
		
		getch();//holds the screen
		
	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\n\nSorry you have entered the wrong username and password for four times!!!");
		
		getch();
		
		}
		system("cls");
		menu();	
}
/* *********************************************************************************/
/* *********************************MAIN*****************************************/
/* *********************************************************************************/

int main ()
{
	
	//wel_come();
	//login();
	menu();
	

	getch();
	
}
/* *********************************************************************************/
/* *********************************MENU Two*****************************************/
/* *********************************************************************************/
void menu_two()
{
	printf("\n\n\n");
	title();
	printf("\n\n\t----------------------------------Main Menu------------------------------------\n");
	printf("\n \t\t Navigate through this application using the options provided.\n\n");
	printf("\n");
	printf("\n\t\t1 -------> :: Enter Book Data");
	printf("\n");
	
	printf("\n\t\t2 -------> :: Display Book");
	printf("\n");
	
	printf("\n\t\t3 -------> :: Delete REcords");
	printf("\n");
	
	printf("\n\t\t4 -------> ::  Exit");
	printf("\n");
	
	printf("\t\n------------------------------------------------------------------------------\n\n");
	
}
/* *********************************************************************************/
/* *********************************MENu*****************************************/
/* *********************************************************************************/
void menu()
{
		int flag = TRUE;
    
    menu_two();
	while (flag)
	{
		printf("\nEnter choice: ");
		scanf("%d", &choice);
		
		
		
	 
		if (choice == 2)
		{
			displayInput();
		}
		else
		 if (choice ==3)
		{	
			deleteInput();
		}
		else 
		if (choice == 4)
		{ exit_1();
		
			break;
		}
		else 
		if(choice == 1)
		{	
			fpt = fopen("records.txt", "ab");
			data = getInput(data);
			
			writeInput(data);
			fclose(fpt);
				
				system("cls");
				menu();
		}
	else
	printf("\n\t\tPlease Enter a correct Number from [1 to 5]");
			
	}
}

/* *********************************************************************************/
/* *********************************Input take*****************************************/
/* *********************************************************************************/

book getInput (book data)
{
	system("cls");
	title();
	
	printf("\n\n\t\t");
	printf("ISBN: ");
	scanf("%d", &data.id);
	
    printf("\n\t\t");
	printf("Enter Book Title. : ");
	fflush(stdin);
	gets(data.title);
	
	printf("\n\t\t");
	printf("Enter Book Author : ");
	fflush(stdin);
	gets(data.author );
	
    printf("\n\t\t");
	printf("Enter Book Publisher : ");
	fflush(stdin);
	gets(data.pblshr );
	
	printf("\n\t\t");
	printf("Enter Book Quantity: ");
	scanf("%d", &data.quantity);
	
    printf("\n\t\t");
	printf("Enter Book Price (Rs): ");
	scanf("%f", &data.price);
	
	 printf("\n\t\t\t");
	 printf(" BOOK DATA SUCCESSFULLY ADDED !!!!");
	
			printf("\n\n\tPress any key to go to Main Menu!");
		
		getch();
	
	return(data);
	
}

/* *********************************************************************************/
/* *********************************WRITE INPUT*****************************************/
/* *********************************************************************************/
void writeInput(book data)
{	
	fprintf(fpt,"%d \t\t%s \t\t%s \t\t%s \t\t%.2f \t\t%d \n",data.id, data.title, data.author, data.pblshr, data.price,data.quantity);
	printf("\n");
	return;
}

/* *********************************************************************************/
/* *********************************DELETE*****************************************/
/* *********************************************************************************/
void deleteInput()
{
	system("cls");
	
	title();
	char yesno[10];
	printf("\n\n ");
	printf("\tAll records will be deleted, are you sure? [y/n]: ");
	scanf("%s", yesno);
	
	if (strstr(yesno,"y"))
	{
		printf("\nRecords successfully deleted\n");
		fpt = fopen("records.txt", "w");
		fpt = NULL;
		fclose(fpt);
	}
	
	else if (strstr(yesno,"n"))
	{
		printf("\n");
		printf("\n\n\tOkay, Data was not Deleted\n!");
     }

	else
		{
		printf("\nInvalid User Input\n");
       }

	 printf("\n\n\tPress any key to go to Main Menu!");
		
		getch();
		system("cls");
		menu();

}

/* *********************************************************************************/
/* *********************************DISPLAY*****************************************/
/* *********************************************************************************/

void displayInput()
{
	
	system("cls");
    title();
	printf("\n\n");
	printf("---------------------------------------------");
	printf("----------------------------------------------\n");
	printf(" ISBN No  |    Title      |  Author    |    ");
	printf(" Publisher    |   Price     |    Quantity \n");
	printf("----------------------------------------------");
	printf("----------------------------------------------\n");
	fpt = fopen("records.txt", "r");
	if (fpt != NULL)
	{
		do 
		{
			text = fgetc(fpt); 
			printf("%c", text); 
		}
		while (text != EOF); 
		fclose(fpt);
	}
	else
		printf("\nNo records found!");



			printf("\n\n\tPress any key to go to Main Menu!");
		
		getch();
		system("cls");
		menu();

}
/* *********************************************************************************/
/* ********************************EXIT*****************************************/
/* *********************************************************************************/

void exit_1()
{   
    system("cls");
    title();
    
	printf("\n\n\t\tSystem Exit");
		    exit(0);
}
