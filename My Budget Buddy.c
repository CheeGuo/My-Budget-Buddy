#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int CheckRepeat(char payment1[100][50]);
int i,z,week=0,day=0,j=0,wholeloop,date=0,a=1,b=-1,loop2,dateloop=0,newuser=0,user=0,data=-1,transaction[100],thehighest,controlhighest,insideloop,insideloop2,returnn,stop=0;
int chooseloop,task1loop=0,chooseloop2,editname,editdetails,chooseagain,weeklychoice,month=0,choice,c=-1,monthloop,pointerPayment=0,pointerCategory=0,datecorrect=31,lastsummary;
float categorytotal[100], total=0,spendpercent=0;
char yesno,again,dateee[12],CategoryOption[100][50];
char payment[100][50],yns,highestchar[100];

struct ManageProfile
{
  char name[100];
  char date[9];
  char phone[15];
  char email[20];
  char address[100];
  float salary;
};

struct expenses // the size of the report and struct need to discuss
{
  char date[100][12];
  char type[100][50];
  char payee[100][50];
  char NewCategory[100][50];
  int category[100];
  float total[100];
};

struct weekly
{
  char category[100][50];
  float price[100];
  float total;
};

struct ManageProfile task1;
struct expenses task2;
struct weekly task3[6];

int main ()
{
  printf("Welcome to Expense Tracker System My Budget Buddy!\n");
  if(strlen(task1.name)==0)
  {
  	data=-1;
  	printf("Part 1 - Personal Details\n");
    printf("Please enter your name:");
    fflush(stdin);gets(task1.name);
    printf("Please enter your birth date(DD/MM/YYYY):");
    fflush(stdin);gets(task1.date);
    printf("Please enter your phone number:");
    fflush(stdin);gets(task1.phone);
    printf("Please enter your email:");
    fflush(stdin);gets(task1.email);
    printf("Please enter your address:");
    fflush(stdin);gets(task1.address);
   					do{
						    printf("Please enter your salary:");
						    fflush(stdin);
						    if(scanf("%f",&task1.salary) != 1)
						    {
						    	printf("Invalid!!! Please enter again!!!\n");
						    	continue;
							}
							else
							break;
					}while(1);
    printf("Part 2 - Payment Details\n");
				do
				{
				 printf("Which category that you mostly spend on (eg. Dining Out , Transport):");
				 fflush(stdin);gets(CategoryOption[pointerCategory]);
				 returnn=CheckRepeat(CategoryOption);
				    if (returnn==1)
                	continue;
                	else if(returnn==0)
                pointerCategory++;
				 do
				 {
				printf("Any More ? (Y- Continue / N - Exit and go to next step):");
    			 fflush(stdin);scanf("%1c",&yesno);
    			 if((toupper(yesno)!='Y')&&(toupper(yesno)!='N'))
    			   	printf("Please try again!!!\n");
				 }while((toupper(yesno)!='Y')&&(toupper(yesno)!='N'));
    			 if (toupper(yesno)=='N')
				 break;
				 else if (toupper(yesno)=='Y')
				 continue;
			}while(1);
			}
			printf("\n");
    		for(;;)
    		{
    			 printf("Which payment method that you mostly use:");
    			 fflush(stdin);gets(payment[pointerPayment]);
    			 returnn=CheckRepeat(payment);
    			 if (returnn==1)
                	continue;
                 else if(returnn==0)
                	pointerPayment++;
    			 do {
    			 printf("Any More ? (Y- Continue / N - Exit and go to next step):");
    			 fflush(stdin);scanf(" %1c",&yesno);
			    if((toupper(yesno)!='Y')&&(toupper(yesno)!='N'))
    			   	printf("Please try again!!!\n");
				 }while((toupper(yesno)!='Y')&&(toupper(yesno)!='N'));
				 if (toupper(yesno)=='N')
				 break;
				 else if (toupper(yesno)=='Y')
				 continue;
		}
			printf("Done! Thank You for your cooperation! You may start using your system now!!!\n");
  do{
  mainmenu:
  	printf("\n\n");
  printf("\nHi!!!");
  puts(task1.name);
  printf("Menu:\n");
  printf("1. Exit System\n");
  printf("2. Edit Personal Details\n");
  printf("3. Enter your expenses\n");
  printf("4. View Payment Type and Category\n");
  printf("5. Weekly Summary\n");
  printf("6. Monthly Summary\n");
  printf("7. Summary based on category\n");
  printf("8. Overall Monthly Summary\n");
  printf("9. Save your file\n");
  do
  {
  	fflush(stdin);
  	 printf("\n\nPlease enter your choice(eg.1):");
  	 if(scanf("%d",&chooseloop)==0)
  	 {
  	 	printf("Invalid!!! Please try again!!!");
  	 	continue ;
	   }
	   else if (chooseloop<=0 || chooseloop>9)
	   {
	   	printf("Invalid!!! Please try again!!!");
	   	continue;
	   }
	   else
	   break;
  }while(1);
  	  if(stop==0)
			  {
			  	if(chooseloop>5)
			  	{
					  	printf("Invalid!!! Only available when finished entering your expenses ");
						  goto mainmenu;
				  }
			  }
   if(chooseloop==1)
  break;
  else if(chooseloop==2)
  {
  	do{
  			printf("\n\n");
            printf("|-------------|----------------------------------------------------------------------------------------------------|\n");
  			printf("|Name         |%-100s|\n",task1.name);
  			printf("|-------------|----------------------------------------------------------------------------------------------------|\n");
  			printf("|Birth Date   |%-100s|\n",task1.date);
  			printf("|-------------|----------------------------------------------------------------------------------------------------|\n");
  			printf("|Phone Number |%-100s|\n",task1.phone);
 			printf("|-------------|----------------------------------------------------------------------------------------------------|\n");
  			printf("|Email        |%-100s|\n",task1.email);
  			printf("|-------------|----------------------------------------------------------------------------------------------------|\n");
  			printf("|Address      |%-100s|\n",task1.address);
  			printf("|-------------|----------------------------------------------------------------------------------------------------|\n");
  			printf("|Salary       |%-100.2f|\n",task1.salary);
  			printf("|-------------|----------------------------------------------------------------------------------------------------|\n");

              chooseagain=getchar();
              printf("Hi!!!!");
              puts(task1.name);
              printf("Which details that you want to edit\n");
              printf("1.Name\n");
              printf("2.Birth Date\n");
              printf("3.Phone\n");
              printf("4.Email\n");
              printf("5.Address\n");
              printf("6.Salary\n");
              printf("7.Quit\n");
              printf("Your Choice :");

              do
              {
              printf("Your choice(eg.1):");
              fflush(stdin);
			  	if(scanf("%d",&editdetails)==0)
			  	{
			  		printf("Invalid !!! Please try again ");
			  		continue;
				  }
				  else if (editdetails<1 || editdetails >7)
				  {
				  		printf("Invalid !!! Please try again ");
			  		continue;
				  }
				  else
				  break;
			  }while(1);
              if(editdetails==7)
              break;
              if(editdetails==1)
              {
              	printf("Please enter your new name:");
                	fflush(stdin);gets(task1.name);
			  }
			  else if (editdetails==2)
			  {
			  	printf("Please enter your new birth date:");
                	fflush(stdin);gets(task1.date);
			  }
			  else if (editdetails==3)
			  {
			  	printf("Please enter your new phone:");
                	fflush(stdin);gets(task1.phone);
			  }
               else if(editdetails==4)
               {
               	 printf("Please enter your new email:");
                	fflush(stdin);gets(task1.email);
			   }
               else if(editdetails==5)
               {
               		 printf("Please enter your new address:");
                fflush(stdin);gets(task1.address);
			   }
				else if (editdetails==6)
				{
					do{
						    printf("Please enter your new salary:");
						    fflush(stdin);
						    if(scanf("%f",&task1.salary)==0)
						    {
						    	printf("Invalid!!! Please enter again!!!\n");
						    	continue;
							}
							else
							break;
					}while(1);
				}
            printf("Edited! Please Checked Again!\n");
            printf("|-------------|----------------------------------------------------------------------------------------------------|\n");
 			printf("|Name         |%-100s|\n",task1.name);
  			printf("|-------------|----------------------------------------------------------------------------------------------------|\n");
  			printf("|Birth Date   |%-100s|\n",task1.date);
  			printf("|-------------|----------------------------------------------------------------------------------------------------|\n");
  			printf("|Phone Number |%-100s|\n",task1.phone);
  			printf("|-------------|----------------------------------------------------------------------------------------------------|\n");
  			printf("|Email        |%-100s|\n",task1.email);
  			printf("|-------------|----------------------------------------------------------------------------------------------------|\n");
  			printf("|Address      |%-100s|\n",task1.address);
  			printf("|-------------|----------------------------------------------------------------------------------------------------|\n");
  			printf("|Salary       |%-100.2f|\n",task1.salary);
  			printf("|-------------|----------------------------------------------------------------------------------------------------|\n");
  			do
  		     {
  		    printf("Edit again or go to next part?(Y-Edit N-Next Part):");
            fflush(stdin);
			scanf(" %1c",&chooseagain);
            if (toupper(chooseagain)!= 'Y' &&(toupper(chooseagain)!= 'N') )
            {
            		printf("Invalid !!! Please choose again!!!\n");
			}
			}while(toupper(chooseagain)!= 'Y' && toupper(chooseagain)!='N');
            if(toupper(chooseagain)=='Y')
            continue;
            else if(toupper(chooseagain)=='N')
            break ;
            }while(1);
	}
         else if(chooseloop==3)
         {
         			printf("\n\n");
		        printf("Expense\n");
          for(;;)
          {
          	if (date+1 == 31 || date+1 > 31) {
                    printf("This Month Already End !!!\n");
        printf("The Monthly report is available now!!! Back to the main menu to check the Monthly Summary.\n");

        if(stop==0)
        {
            thehighest = transaction[0];//thehighest has declared as 0
    	controlhighest = 0;
		for(i=0;i<=99;i++)
		total+=categorytotal[i];
    for (j = 1; j <= 99; j++) {
        if (thehighest < transaction[j]) {
            thehighest = transaction[j];
            controlhighest = j;
        }
    }
    for(i=0;i<=99;i++)
    {
        if(strlen(task3[4].category[i])==0)
            task3[4].price[i]=0;
            task3[4].total+=task3[week].price[i];
    }
    stop++;
        }
        	goto mainmenu;
}
		   data++;day++;date++;
           if(day==8)
            {
              		for(i=0;i<=99;i++)
          			{
          				for(j=i+1;j<=99;j++)
           				{
               				if(strcasecmp(task3[week].category[i],task3[week].category[j])==0)
              				{
               				task3[week].price[i]+=task3[week].price[j];
             				task3[week].price[j]=0;
               				strcpy(task3[week].category[j],"");
                			}
            			}
         			}
         	//weeklyreport
			 		    for(i=0;i<=99;i++)
        			{
        		if(strlen(task3[week].category[i])==0)
                		task3[week].price[i]=0;
                task3[week].total+=task3[week].price[i];
            		}

          		day=day-7;
          	printf("Week %d Report is Ready!\n",week+1);
          	week++;
    }
          	}
          	printf("Week %d\n",week+1);
            if(date<10)
                  	printf("0%d/01/2024\n",date);
               	 	else
                  	printf("%d/01/2024\n",date);
        do{
           printf("Any expenses?(Y/N) B-Back to main menu:");
           fflush(stdin);yns=getchar();
              if(toupper(yns)=='Y')
             	  		{
                	 if(date<10)
                  	sprintf(task2.date[data], "0%d/01/2024",date);
               	 	else
                  	sprintf(task2.date[data],"%d/01/2024",date);
          				}
          				else if(toupper(yns)=='B')
         			 	{
            			day--;date--;
            			goto mainmenu;
        				}
          			else if(toupper(yns)!='Y'&&toupper(yns)!='N')
          			printf("Invalid!!!! Try Again\n");
        }while(toupper(yns)!='Y'&&toupper(yns)!='N');
        if(toupper(yns)=='N')
    		continue;
          else
          continuee:
          	do
          	{
          	printf("What is your payment type?\n");
          	printf("1. Add a new payment type\n");
          		for(wholeloop=0;strlen(payment[wholeloop])!=0;wholeloop++)
               				printf("%d. %s\n",wholeloop+2,payment[wholeloop]);

            				printf("\nPlease enter your choice:");
            			    fflush(stdin);scanf("%d",&choice);
            					if(choice==1)
          						{
          								for(i=0;i<=99;i++)
											{
										if(strlen(payment[i])==0)
											{
											pointerPayment=i;
											break;
											}
										}
          								printf("Please enter the new payment type:");
                						fflush(stdin);gets(payment[pointerPayment]);
                						returnn=CheckRepeat(payment);
                						if (returnn==1)
                							continue;
                						else if(returnn==0)
                								pointerPayment++;
									}
        								else if(choice<=(wholeloop+2))
        								{
        								strcpy(task2.type[data],payment[(choice)-2]);
        								strcpy(task3[week].category[data],payment[(choice)-2]);
        								transaction[choice-2]++;
        								printf("%s",task2.type[data]);
        								break;
    									}
    									else
    									printf("Invalid!!!");
    								}while(1);
          printf("\nPayee?(Example: Grab, IKEA):");
          fflush(stdin);
		  gets(task2.payee[data]);
            	  do {
            			loop2:
                		printf("\nCategory");
            			printf("\n1.New Category\n");
            				for(wholeloop=0;strlen(CategoryOption[wholeloop])!=0;wholeloop++)
               				printf("%d.%s\n",wholeloop+2,CategoryOption[wholeloop]);

            				printf("\nPlease enter your choice:");
            			    scanf("%d",&task2.category[data]);
            					if(task2.category[data]==1)
          						{
          								for(i=0;i<=99;i++)
										{
										if(strlen(CategoryOption[i])==0)
										{
										pointerCategory=i;
										break;
										}
									}
          							loop1:
                  						printf("Please enter the new category(Example: Rent, Dining Out):");
                  						fflush(stdin);gets(CategoryOption[pointerCategory]);
                							returnn=CheckRepeat(CategoryOption);
                								if (returnn==1)
                							    continue;
                						        else if (returnn==0)
                						        pointerCategory++;
    						}
    							else if(task2.category[data]<=(wholeloop+2))
        								{
        					         	strcpy(task3[week].category[data],CategoryOption[(task2.category[data])-2]);
        								strcpy(task2.NewCategory[data],CategoryOption[(task2.category[data])-2]);
										break;
    									}
    									else
    									printf("Invalid!!!\n");
    									}while(1);
    do
    {
    printf("Total(RM):");
    fflush(stdin); //invalid
    if(scanf("%f", &task3[week].price[data])==0)
    {
        printf("Invalid !!! Please Try Again\n");
		continue;
	}
	else
	{
	task2.total[data]=task3[week].price[data];
	categorytotal[task2.category[data]-2]+=task2.total[data];
    break;
	}
	}while(1);

do
{
printf("\nC-Continue Y-Next Day, N-Back To Main Menu\n");
    printf("Your Choice: ");
   fflush(stdin); scanf("%1c", &choice);
	if(toupper(choice)!='Y'&&toupper(choice)!='N'&&toupper(choice)!='C')
	printf("Invalid!!!\n");
}while((toupper(choice)!='Y'&&toupper(choice)!='N')&&toupper(choice)!='C');
    if (toupper(choice) == 'N')
        break;
    else if (toupper(choice) == 'C')
    {
    	goto continuee;
    	data++;
	}
}
	else if (chooseloop==4)
	{
		printf("\n\n");
	do{
	printf("|--------------------------------------------------|--------------------------------------------------|\n");
	printf("|                  Category                        |                        Payment Type              |\n");
	printf("|--------------------------------------------------|--------------------------------------------------|\n");
	for(i=0;i<=99;i++)
	{
		if(strlen(CategoryOption[i])==0)
		{
				pointerCategory=i;
				break;
		}
	}
	for(i=0;i<=99;i++)
	{
		if(strlen(payment[i])==0)
		{
			pointerPayment=i;
			break;
		}
	}
	for (i=0;i<=99;i++)
	{
		if ((strlen(CategoryOption[i]) == 0) && (strlen(payment[i]) == 0))
		break;
				printf("|%-50s|%-50s|\n",CategoryOption[i],payment[i]);
		printf("|--------------------------------------------------|--------------------------------------------------|\n");
	}
	printf("Which Category or Payment Type that you want to add?\n");
	printf("1. Category\n2. Payment\n3. Exit\n");
	scanf("%1d",&weeklychoice);
	do
	{
			if(weeklychoice==3)
			break;
		else if(weeklychoice==1)
					{
		 printf("What Category that you want to add:");
		 fflush(stdin);gets(CategoryOption[pointerCategory]);
		 CheckRepeat(CategoryOption);
		 if(returnn==1)
		 continue;
		 else if (returnn==0)
		 pointerCategory++;
					}
		 else if (weeklychoice==2)
		{
			for(i=0;i<=99;i++)
				{
			if(strlen(payment[i])==0)
			{
			pointerPayment=i;
			break;
			}
				}
		       	printf("What Payment Type that you want to add:");
				fflush(stdin);gets(payment[pointerPayment]);
				 CheckRepeat(payment);
				 	if(returnn==1)
		 			continue;
		 			else if (returnn==0)
		 			pointerPayment++;
			}
		do{
			printf("Continue or end the section(Continue-C / End-E):");
			fflush(stdin);scanf("%1c",&choice);
			if(toupper(choice)=='E')
			goto mainmenu;
		else	if(toupper(choice)!='C' && toupper(choice)!='E')
			printf("Invalid!!! Please enter again!!!");
		}while(toupper(choice)!='C' && toupper(choice)!='E');
	}while(1);
	if(toupper(choice=='C'))
	continue;
	 else if (weeklychoice>3 && weeklychoice <1)
	printf("Invalid!!! Please try again");
	}while(weeklychoice>3 && weeklychoice <1);
}

else if (chooseloop==5)
{
		printf("\n\n");
  for(j=0;j<=month;j++)
  {
  	    for(i=0;i<=week;i++)
  	 	printf("%d.Week %d Report\n",i+1,i+1);
  }
        weeklychoice=0;
		do
		{
		printf("Your Choice (eg. 1-Week 1 Report and 0-Back to main menu ):");
        fflush(stdin);
        scanf("%d",&weeklychoice);
        if(weeklychoice==0)
        goto mainmenu;
        if (weeklychoice < 1 || weeklychoice-1 > week)
    	printf("Invalid week selection.\n");
		}while(weeklychoice  < 1 || weeklychoice-1  > week);
        printf("Week %d Report\n",weeklychoice);
        weeklychoice--;j--;
        // Go back to the main menu or handle accordingly
  printf("|--------------------------------------------------|--------------------------|\n");
  printf("|  Category                                        |        Total             |\n");
  printf("|--------------------------------------------------|--------------------------|\n");
  for(i=0;i<=99;i++)
    {
     if(task3[weeklychoice].price[i]==0||strlen(task3[weeklychoice].category[i])==0)
     continue;
  printf("|%-50s|%26.2f|\n",task3[weeklychoice].category[i],task3[weeklychoice].price[i]);
  printf("|--------------------------------------------------|--------------------------|\n");
    }
  printf("|  Total for %1d Week                                |%26.2f|\n",weeklychoice+1,task3[weeklychoice].total);
  printf("|--------------------------------------------------|--------------------------|\n");
}
    else if (chooseloop==6)
    {
    	printf("\n\n");
   printf("|------------|------------------------------|------------------------------|----------------------------------|--------|\n");
   printf("|  Date      |     Type                     |               Payee          |          Category                |Total   |\n");
   printf("|------------|------------------------------|------------------------------|----------------------------------|--------|\n");
  for(i=0;i<=99;i++)
  {
    if(strlen(task2.date[i])==0)
    continue ;
    else
    {
    printf("|%-12s|%-30s|%-30s|%-34s|%-8.2f|\n",task2.date[i],task2.type[i],task2.payee[i],task2.NewCategory[i],task2.total[i]);
    printf("|------------|------------------------------|------------------------------|----------------------------------|--------|\n");
    }
  }
	}
    else if (chooseloop==7)
    {
    		printf("\n\n");
		printf("|--------------------------------------------------|-----------|\n");
		printf("|                  Category                        |   Total   |\n");
		printf("|--------------------------------------------------|-----------|\n");
		for(i=0;i<=99;i++)
		{
			if(strlen(CategoryOption[i])==0||categorytotal[i]==0)
			continue;
			else
			{
			printf("|%-50s|%-11.2f|\n",CategoryOption[i],categorytotal[i]);
			printf("|--------------------------------------------------|-----------|\n");
			}
		}
	    	printf("|Total                                             |%-11.2f|\n",total);
		    printf("|--------------------------------------------------|-----------|\n");
		}
		else if (chooseloop==8)
		{
				printf("\n\n");
			printf("Overall Monthly Summary:\n");
			for(i=0;i<=week;i++)
			printf("Total for Week %d:RM%.2f\n",i+1,task3[i].total);
			  spendpercent = (total / task1.salary)*100;
	 		printf("You have spend (%.2f)%% from your monthly salary.\n",spendpercent);
			printf("The payment type that you mostly use is %s with %d transactions\n",payment,thehighest);
			//the most transactions
			}
				else if(chooseloop==9)
				{
					printf("Loading.....\n");
					FILE *filePtr;
    filePtr = fopen("output.txt", "w");  // Open the file for writing

    if (filePtr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Output personal details to the file
    fprintf(filePtr, "|-------------|----------------------------------------------------------------------------------------------------|\n");
    fprintf(filePtr, "|Name         |%-100s|\n", task1.name);
    fprintf(filePtr, "|-------------|----------------------------------------------------------------------------------------------------|\n");
    fprintf(filePtr, "|Birth Date   |%-100s|\n", task1.date);
    fprintf(filePtr, "|-------------|----------------------------------------------------------------------------------------------------|\n");
    fprintf(filePtr, "|Phone Number |%-100s|\n", task1.phone);
    fprintf(filePtr, "|-------------|----------------------------------------------------------------------------------------------------|\n");
    fprintf(filePtr, "|Email        |%-100s|\n", task1.email);
    fprintf(filePtr, "|-------------|----------------------------------------------------------------------------------------------------|\n");
    fprintf(filePtr, "|Address      |%-100s|\n", task1.address);
    fprintf(filePtr, "|-------------|----------------------------------------------------------------------------------------------------|\n");
    fprintf(filePtr, "|Salary       |%-100.2f|\n", task1.salary);
    fprintf(filePtr, "|-------------|----------------------------------------------------------------------------------------------------|\n");

    // Add other details as needed

    // Close the file when done
    fclose(filePtr);
    printf("Loading.....\n");
     FILE *file1Ptr;
    file1Ptr = fopen("weekly_summary.txt", "w");  // Open the file for writing

    if (file1Ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    // Loop through each week
    for ( weeklychoice = 0; weeklychoice <= 4; weeklychoice++) {
        fprintf(file1Ptr, "|--------------------------------------------------|--------------------------|\n");
        fprintf(file1Ptr, "|  Category                                        |        Total             |\n");
        fprintf(file1Ptr, "|--------------------------------------------------|--------------------------|\n");

        // Loop through each category in the current week
        for ( i = 0; i <= 99; i++) {
            if (task3[weeklychoice].price[i] == 0 || strlen(task3[weeklychoice].category[i]) == 0)
                continue;

            fprintf(file1Ptr, "|%-50s|%26.2f|\n", task3[weeklychoice].category[i], task3[weeklychoice].price[i]);
            fprintf(file1Ptr, "|--------------------------------------------------|--------------------------|\n");
        }

        // Write total for the week to the file
        fprintf(file1Ptr, "|  Total for %1d Week                                |%26.2f|\n", weeklychoice + 1, task3[weeklychoice].total);
        fprintf(file1Ptr, "|--------------------------------------------------|--------------------------|\n\n\n");
    }

    // Close the file when done
    fclose(file1Ptr);
		printf("Loading.....\n");
		FILE *file2Ptr;
    file2Ptr = fopen("category_payment_summary.txt", "w");  // Open the file for writing

    if (file2Ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file2Ptr, "|--------------------------------------------------|--------------------------------------------------|\n");
    fprintf(file2Ptr, "|                  Category                        |                        Payment Type              |\n");
    fprintf(file2Ptr, "|--------------------------------------------------|--------------------------------------------------|\n");

    // Loop through each category and payment type
    for ( i = 0; i <= 99; i++) {
        if (strlen(CategoryOption[i]) == 0 && strlen(payment[i]) == 0)
            break;

        fprintf(file2Ptr, "|%-50s|%-50s|\n", CategoryOption[i], payment[i]);
        fprintf(file2Ptr, "|--------------------------------------------------|--------------------------------------------------|\n");
				}
				   fclose(file2Ptr);
				   printf("Loading.....\n");
				 FILE *file3Ptr;
    file3Ptr = fopen("expenses_summary.txt", "w");  // Open the file for writing

    if (file3Ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(file3Ptr, "*\n\n");
    fprintf(file3Ptr, "|------------|------------------------------|------------------------------|----------------------------------|--------|\n");
    fprintf(file3Ptr, "|  Date      |     Type                     |               Payee          |          Category                |Total   |\n");
    fprintf(file3Ptr, "|------------|------------------------------|------------------------------|----------------------------------|--------|\n");

    // Loop through each entry in task2
    for ( i = 0; i <= 99; i++) {
        if (strlen(task2.date[i]) == 0)
            continue;

        fprintf(file3Ptr, "|%-12s|%-30s|%-30s|%-34s|%-8.2f|\n", task2.date[i], task2.type[i], task2.payee[i], task2.NewCategory[i], task2.total[i]);
        fprintf(file3Ptr, "|------------|------------------------------|------------------------------|----------------------------------|--------|\n");
    }

    // Close the file when done
    fclose(file3Ptr);
    printf("Loading.....\n");
    FILE *file4Ptr;
    file4Ptr = fopen("category_summary.txt", "w");  // Open the file for writing

    if (file4Ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file4Ptr, "*\n\n");
    fprintf(file4Ptr, "|--------------------------------------------------|-----------|\n");
    fprintf(file4Ptr, "|                  Category                        |   Total   |\n");
    fprintf(file4Ptr, "|--------------------------------------------------|-----------|\n");

    // Loop through each category in CategoryOption and its total
    for ( i = 0; i <= 99; i++) {
        if (strlen(CategoryOption[i]) == 0 || categorytotal[i] == 0)
            continue;

        fprintf(file4Ptr, "|%-50s|%-11.2f|\n", CategoryOption[i], categorytotal[i]);
        fprintf(file4Ptr, "|--------------------------------------------------|-----------|\n");
    }

    fprintf(file4Ptr, "|Total                                             |%-11.2f|\n", total);
    fprintf(file4Ptr, "|--------------------------------------------------|-----------|\n");

    // Close the file when done
    fclose(file4Ptr);
				printf("Loading.....\n");
		FILE *file5Ptr;
    file5Ptr = fopen("monthly_summary.txt", "w");  // Open the file for writing

    if (file5Ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file5Ptr, "Overall Monthly Summary:\n");

    // Loop through each week and write the total for each week
    for ( i = 0; i <= week; i++) {
        fprintf(file5Ptr, "Total for Week %d: RM%.2f\n", i + 1, task3[i].total);
    }
    spendpercent = (total / task1.salary) * 100;

    fprintf(file5Ptr, "You have spent %.2f%% from your monthly salary.\n", spendpercent);
    fprintf(file5Ptr, "The payment type that you mostly use is %s with %d transactions\n", payment, thehighest);
    //    }
    // Close the file when done
   fclose(file5Ptr);//
		printf("File Saved!!!\n");
			} //end semi

} while(chooseloop!=1);
}

int CheckRepeat(char payment1[100][50]) {
    int i, z, testt,returnn=0;;
    char again;
    for (z = 0; z <= 99; z++) {
        if (strlen(payment1[z]) == 0)
            break;
        // Check if the string already exists
        for ( i = z+1; i <= 99; i++) {
            if (strcasecmp(payment1[i], payment1[z]) == 0) {
                printf("Already exist!!!!Please enter again!!!\n");
            	returnn=1;
                strcpy(payment1[i], "");
        }
        }
    }
    return(returnn);
}