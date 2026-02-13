
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define promo_code "anas123"

int final (char name [15] , char last [15] , int age ,  char subscription [30] , int price){
	char no_or_yes [10];
	char promo [10];
	int result ;
	
	printf("\nyou have chosed %s plan " , subscription);
	
	while(1){

		printf("\n\ndo you have a promo code (no or yes Only) >");
		scanf(" %5s", no_or_yes);		
		
		for (int i =0; no_or_yes[i] != '\0'; i++ ){
			if(!isalpha (no_or_yes[i])){
				result = 1;
				break;
			}
			result = 0;
		}
		
		if (result == 1){
			while(getchar() != '\n');
			printf("\ninvalid answer");
			continue;	
		}
		
		if ( strcmp (no_or_yes,"no") == 0){
			printf("\nprinting the recipe ..");
			printf("\ndone");
			
			printf("\n\n--------   ultra gym recipe   -----------");
			printf("\n| customer name : %s", name);
			printf("\n| customer last name : %s", last);
			printf("\n| customer age : %d", age);
			printf("\n| plan chosen : %s", subscription);
			printf("\n| Total price : %d$" , price);
			printf("\n| Thanks for chosing ultra gym |");
			break;
		
		}else if ( strcmp(no_or_yes , "yes") == 0){
			printf("\nEnter your promo code > ");
			scanf(" %s", promo);
			
			if (strcmp(promo,promo_code) == 0){
				printf("\nCorrect code !");
				int total_price = price - 50 ;
				printf("\nprice before : %d , price after : %d", price , total_price);
				
				printf("\nprinting the recipe ..");
				printf("\ndone");
			
				printf("\n\n--------   ultra gym recipe   -----------");
				printf("\n| customer name : %s", name);
				printf("\n| customer last name : %s", last);
				printf("\n| customer age : %d", age);
				printf("\n| plan chosen : %s", subscription);
				printf("\n| Total price : %d$" , total_price);
				printf("\n| Thanks for chosing ultra gym |");
				break;
				
			}else{
				while(getchar() != '\n');
				printf("\ninvalid code");
				continue;
			}
		}else{
			while (getchar() != '\n');
			printf("\ninvalid answer");
			continue;
		}
	}

	
	
	
	return 0;
}
int plans (int age){
	if (age >= 15 && age <= 20){
		return 1;
	}else if ( age >= 21 && age <= 40){
		return 2;
	}else {
		return 3;
	}
}

void subscription (void){
	
	char first_name [15];
	char last_name [15];
	int age ;
	int result ;
	int numresult ;
	int plan ;
	int choice ;
	
	
	printf("\n------------------------------");
	printf("\nwelcome to muscle gym !! (promo-code = anas123)");
	printf("\n------------------------------");
	
	while(1){
		printf("\nEnter Your first name >");
		scanf(" %10s" , first_name);
		
		for(int i= 0; first_name[i] != '\0'; i++){
			if(!isalpha(first_name[i])){
				result = 1;
				break;
				
			}else{
				result = 0;
			}
		}
	
		if (result == 1)
		{
			while(getchar() != '\n');
			printf("\nonly Letters");
			continue;			
		}
		break;
	}
	
	while(1){
		printf("\nenter your last name > ");
		scanf(" %10s", last_name);
		
		for (int i =0; last_name[i] != '\0'; i++){
			if(!isalpha(last_name[i])){
				result = 1;
				break;
	
			}else{
				result = 0;
			}
		}
		
		if (result == 1){
			while(getchar() != '\n');
			printf("\nonly letters");
			continue;		
		}
		break;
	}
	
	while(1){
		
		printf("\nPlease enter your age so we can specify \nthe subscriptions suitable for you > ");
		numresult = scanf("%d", &age);
		
		if(numresult != 1){
			while(getchar() != '\n');
			printf("\nOnly Numbers");
			continue;
		}	
		
		if (age > 60 || age < 15){
			while(getchar() != '\n');
			printf("this age is not allowed");
			continue;
		}
		break;
	}
	
	printf("\nok %s %s here is the suitable subscriptions for you :\n" , first_name , last_name);
	plan = plans(age);
	
	if (plan == 1){
		printf("\n1) Begginers plan : sutable for ages from 15 to 20 :");
		printf("\nExercises : 10 pushups , 20 jumping jacks , 1 minute plank ");
		printf("\nPrice : 150$");
		
		printf("\n\n2) Advand plan : sutable for people who know some excersice basics from age 15 to 20 :");
		printf("\nExercises : 20 pushups , 40 jumping jacks , 2 minutes plank");
		printf("\nPrice : 250$");
	
		while(1){
			printf("\n\nEnter your choice 1 or 2 > ");
			numresult = scanf("%d", &choice);
			
			if (numresult != 1){
				while(getchar() != '\n');
				printf("\ninvalid choice");
				continue;
			}
	
			if (choice == 1){
				final(first_name , last_name , age , "teenager_begginner" , 150);
				break;
			}else if (choice == 2){
				final(first_name , last_name , age , "teenager_Advanced" , 250);
				break;
			}else{
				while(getchar() != '\n');
				printf("\ninvalid choice");
				continue;				
			}
		}
	}else if (plan == 2){
		printf("\n1) bigginers plan : sutable for ages from 21 to 40 :");
		printf("\nExersices : 20 pull ups , 30 squates , simple cardio , some exercises with weight");
		printf("\nPrice : 300$");
		
		printf("\n\n2) Advanced plan : sutable for people who know some exsercise basics age from 21 to 40 :");
		printf("\nExersices : 40 pull ups , all exercises with weight , 50 squates , advanced cardio");
		printf("\nPrice : 400$");
		
		while(1){
			printf("\n\nEnter your choice 1 or 2 >");
			numresult = scanf("%d" , &choice);
			
			if (numresult != 1){
				while(getchar() != '\n');
				printf("\ninvalid choice");
				continue;
			}
			
			if (choice == 1){
				final(first_name , last_name , age , "bro_begginner" , 300);
				break;
			}else if (choice == 2){
				final(first_name , last_name , age , "bro_Advanced" , 400);
				break;
			}else{
				while(getchar() != '\n');
				printf("\ninvalid choice");
				continue;				
			}
		}
	}else if (plan == 3){
		
		printf("\n1) bigginers plan : sutable for ages from 41 to 60 :");
		printf("\nExersices : 20 pull ups , 30 squates , some exercises with weight");
		printf("\nPrice : 500$");
		
		printf("\n\n2) Advanced plan : sutable for people who know some exsercise basics age from 41 to 60 :");
		printf("\nExersices : 40 pull ups , all exercises with weight , 50 squates ");
		printf("\nPrice : 650$");
		
		
		while(1){
			printf("\n\nEnter your choice 1 or 2 >");
			numresult = scanf("%d" , &choice);
			
			if (numresult != 1){
				while(getchar() != '\n');
				printf("\ninvalid choice");
				continue;
			}
			
			if (choice == 1){
				final(first_name , last_name , age , "adults_begginner" , 500);
				break;
			}else if (choice == 2){
				final(first_name , last_name , age , "adults_Advanced" , 650);
				break;
			}else{
				while(getchar() != '\n');
				printf("\ninvalid choice");
				continue;				
			}
		}	
		
	}
	
}

int main (void){
    
    /* variable declerations */
    short start_choice ;
    int start;

    while(1){
        printf("\npls enter 1 to start subscription or 0 to exit >");
        start = scanf("%hd", &start_choice);
        
        if (start == 1){
            while(getchar() != '\n');
            if (start_choice == 1){
            	subscription();
				break;
            }else if (start_choice == 0)
            {
                return 0;
            }else
            {
            	while(getchar() != '\n');
                printf("\ninvalid choice");
				continue;            
            } 
        }else
        {
            printf("\ninvalid choice ");
            while (getchar() != '\n');
        };
        
    };

    return 0;
};
