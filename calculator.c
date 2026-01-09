#include <stdio.h>//standard C library for input/output functions
#include <ctype.h>//C library for several functions for testing and mapping characters
#include <math.h>//C library for several math related functions such as power, square root, etc.
//2 functions used to find the maximum and/or minimum between 2 numbers (in this case, floats)
float max(float num1,float num2);
float min(float num1, float num2);
int main(void) {
//printing out the base menu
  printf("Welcome to my Command-Line Calculator\n");
  printf("Developer: Muhammad Umar Khan\n");
  printf("Version 1\n");
  printf("Development Date: October 19 2020\n");
  printf("-----------------------------------------\n");
  printf("Select one of the following items:\n");
  printf("B) - Binary Mathematical Operations such as Addition and Subtraction\n");
  printf("U) - Unary Mathematical Operations such as Square Root and Logarithm\n"); 
  printf("A) - Advances Mathematical Operations using Variables and Arrays\n");
  printf("V) - Defind variables and assign them values\n");
  printf("E) - Exit\n");
//while loop that will go on forever  
  while(1){
    float a=0,b=0,c=0,d=0,e=0;//5 letter float variables for when option V is used to declare variables
    char option;// a character for when the user enters the option
    printf("Enter an Option ( B (Binary operation), U (Unary operation) , A (Advanced), V (Variables), E (Exit)): ");//telling user to enter a option from these 5 options
    scanf(" %c", &option);//scanning and pointing that option entered into variable option
    option=toupper(option);//will always convert that letter into uppercase ex: b->B B->B
    while(option!='B' && option!='A' && option!='U' && option!='V' && option!='E'){//while the option continues to be invalid
      printf("Enter an Option ( B (Binary operation), U (Unary operation) , A (Advanced), V (Variables), E (Exit)): ");
      scanf(" %c", &option);
      option=toupper(option);
	  //continue to prompt the user until a valid option is entered
    }
    if(option=='B'){//if the option entered is B
      float n1;//2 floats for num 1 and 2 respectively
      float n2;
      char operate;//operate variable for the operation
      printf("Enter the first integer: ");//prompt user to enter number
      scanf("%f", &n1);//scanning that number
      printf("Please enter the operation ( + , - , * , / , %% , P (for power) , X (for maximum) , I (for minimum) )\n");
      scanf(" %c", &operate);//prompting to enter and scan the operator from list above 
      operate=toupper(operate);//if the user entered an operator, it will be Capitalized to its uppercase character. (this is for p,x and i)
      
       while(operate != '+' && operate != '-' && operate != '*' && operate != '/' && operate!='%' && operate!='P' && operate!='X' && operate!='I'){ 
          printf("Please enter the operation ( + , - , * , / , %% , P (for power) , X (for maximum) , I (for minimum) )\n");
          scanf(" %c", &operate);
          operate=toupper(operate);
          
       }//if the user selects an operator not from list, then it will continue prompting unless a valid operator is selected
       
        //for these next if and else if statements, the function of it is the same for entering the second number, the output will be different based off of the operator selected
        if(operate=='+'){//if +
          printf("Enter the second number: ");//enter second number 
          scanf("%f", &n2);
          printf("The result is: %.2f\n",n1+n2);//result is n1+n2
        }
        else if(operate=='-'){//if -
          printf("Enter the second number: ");
          scanf("%f", &n2);
          printf("The result is: %.2f\n",n1-n2);//output n1-n2
        }
        else if(operate=='*'){//if *
          printf("Enter the second number: ");
          scanf("%f", &n2);
          printf("The result is: %.2f\n",n1*n2);//output is n1*n2
        }
        else if(operate=='/'){//if /
          
          printf("Enter the second number (non-zero): ");
          scanf("%f", &n2);
          while(n2==0){//if the second number is 0, continue prompting until non zero number is entered (Reason: you cant divide by 0)
            printf("Enter the second number (non-zero): ");
            scanf("%f", &n2);
          }
          printf("The result is: %.2f\n",n1/n2);//output is n1/n2
        }
        else if(operate=='%'){//if %
          printf("Enter the second number: ");
          scanf("%f", &n2);
          
          printf("The result is: %.2f\n",fmod(n1,n2));//output is n1%n2 (remainder)
        }
        else if(operate=='P'){//if P (or p)
          printf("Enter the second number: ");
          scanf("%f", &n2);
          printf("The result is: %.2f\n",pow(n1,n2));//output is n1 to the power of n2  (n1^n2)
        }
        else if(operate=='I'){//if I (or i)
          float minimum;
          printf("Enter the second number: ");
          scanf("%f", &n2);
          minimum=min(n1,n2);//using the minimum function
          printf("The minimum is: %.2f\n",minimum);//output the minimum value
        }
        else if(operate=='X'){//if X (or x)
          float maximum;
          printf("Enter the second number: ");
          scanf("%f", &n2);
          maximum=max(n1,n2);//using the maximum function
          printf("The maximum is: %.2f\n",maximum);//output is the maximum value
        }
       
    }//end of option B
    
    else if(option=='U'){//if option U 
      float num;//variable for the number
      printf("Please enter the first number: ");
      scanf("%f",&num);//enter and scan number
      char operate;//for operator
      printf("Please enter the operator (S (for square root), L for logarithm (log10 x), E (for exponentiation), C (for the smallest integer value greater than or equal to x), F (for the largest integer value greater than or equal to x))\n");
      scanf(" %c", &operate);//enter and scan operator
      operate=toupper(operate);//operator is capitalized 
      while(operate != 'S' && operate != 'L' && operate != 'E' && operate != 'C' && operate!='F'){ 
        printf("Please enter the operator (S (for square root), L for logarithm (log10 x), E (for exponentiation), C (for the smallest integer value greater than or equal to x), F (for the largest integer value greater than or equal to x))\n");
        scanf(" %c", &operate);
        operate=toupper(operate);
      }//prompts unless valid operator is entered
      
      
      if(operate=='S'){//if operate is S
        printf("The result is %.2f\n",sqrt(num));//output square root of num
      }
      else if(operate=='L'){//if operate is L
        printf("The result is %.2f\n",log10(num));//output logarithm of num
      }
      else if(operate=='E'){//if operate is E
        printf("The result is %.2f\n",exp(num));//output exponentiation of num
      }
      else if(operate=='C'){//if operate is C
        printf("The result is %.2f\n",ceil(num));//output is smallest integer value greater or equal to num
      }
      else if(operate=='F'){
        printf("The result is %.2f\n",floor(num));//output is largest integer value greater than or equal to x
      }
      

      
    }//end of option U
    else if(option=='V'){//if option is V
      float num;//num variable 
      printf("Please enter a number: ");
      scanf("%f",&num);//enter and scan number
      char letter;//variable for the letter entered
      printf("Please enter the name of the variable (A single character between 'a' - 'e'): ");
      scanf(" %c",&letter);
      
      
      while(letter != 'a' && letter != 'b' && letter != 'c' && letter != 'd' && letter!='e'){ 
         printf("Please enter the name of the variable (A single character between 'a' - 'e')\n");
         scanf("%c",&letter);
      }//if letter not a-e, continue prompting user to enter a letter from a-e
	  //basically if the letter from a-e is entered, then one of the variables from the start of a,b,c,d,e, will be set to the number the user entered depending on the corresponding letter 
      if(letter=='a'){
        a=num;
      }
      else if(letter=='b'){
        b=num;
      }
      else if(letter=='c'){
        c=num;
      }
      else if(letter=='d'){
        d=num;
      }
      else if(letter=='e'){
        e=num;
      }
      printf("Variable %c is set to: %.2f\n",letter,num);//showing what that letter variable is currently set to 
     
    }//end of option V
    
    else if(option=='A'){//if option is A
      printf("Select one of the following items:\n");
      printf("B) - Binary Mathematical Operations such as Addition and Subtraction\n");
      printf("U) - Unary Mathematical Operations such as Square Root and Logarithm\n"); 
      printf("E) - Exit and back to the main menu\n");
      //showing a list of sub-options the user can enter
      while(1){//another while loop since this is like a forever calculator inside a forever calculator

        char opt;//for the sub option entered of B, U or E
        printf("Enter an Option ( B (Binary operation), U (Unary operation) , E (Exit and back to the main menu)): ");
        scanf(" %c", &opt);//enter and scan the option which will be capitalized
        opt=toupper(opt);

        while(opt!='B' && opt!='U' && opt!='E'){//if sub option entered is not valid, continue prompting user for a valid 
          printf("Enter an Option ( B (Binary operation), U (Unary operation) , E (Exit and back to the main menu)): ");
          scanf(" %c", &opt);
          opt=toupper(opt);
        }

        if(opt=='B'){//if sub option is B (same function as option B, but with variables)
          float n1;//n1 and var1 is for the first number or variable entered respectively
          char var1;
          float n2;//n2 and var2 is for the first number or variable entered respectively
          char var2;
          char operate;//for the operator
          printf("Enter the first number or variable name ('a' to 'e'): ");//tells user to enter either a number or variable letter
          if(scanf("%f",&n1)){//if the user entered a number
            //basically repeats the same process as option B did  
            printf("Please enter the operation ( + , - , * , / , %% , P (for power) , X (for maximum) , I (for minimum) )\n");
            scanf(" %c", &operate);
            operate=toupper(operate);
            
            while(operate != '+' && operate != '-' && operate != '*' && operate != '/' && operate!='%' && operate!='P' && operate!='X' && operate!='I'){ 
                printf("Please enter the operation ( + , - , * , / , %% , P (for power) , X (for maximum) , I (for minimum) )\n");
                scanf(" %c", &operate);
                operate=toupper(operate);
                
            }
            
              //for these next statements, basically there can be 1 of 2 possibilities.
              if(operate=='+'){//if +
                printf("Enter the second number or variable ('a' to 'e'): ");//enter the second number or variable
                if(scanf("%f", &n2)){//if number is entered
                  printf("The result is: %.2f\n",n1+n2);//function performs normally n1+n2
                }
                else if(scanf("%c",&var2)){//however, if a letter is entered
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",n1+0);
                  }//if the letter entered is not valid, letter will be treated as 0
                  if(var2=='a'){//if the second letter is 1, n1+a
                    printf("The result is: %.2f\n",n1+a);
                  }//same if letter is b
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",n1+b);
                  }//same if letter is c
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",n1+c);
                  }//same if letter is d
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",n1+d);
                  }//same if letter is e
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",n1+e);
                  }
                }
              }
			  //same process if operate is -, so output would be n1-variable name or n1-0 if variable is invalid or n1-n2 if number is entered
              else if(operate=='-'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                if(scanf("%f", &n2)){
                  printf("The result is: %.2f\n",n1-n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",n1-0);
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",n1-a);
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",n1-b);
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",n1-c);
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",n1-d);
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",n1-e);
                  }
                }
              }
			  //same process if operate is *, so output would be n1*variable name or n1*0 if variable is invalid or n1*n2 if number is entered
              else if(operate=='*'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                if(scanf("%f", &n2)){
                  printf("The result is: %.2f\n",n1*n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",n1*0);
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",n1*a);
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",n1*b);
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",n1*c);
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",n1*d);
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",n1*e);
                  }
                }
              }
			  //same process if operate is /, so output would be n1/variable name or n1/0 if variable is invalid or n1/n2 if number is entered
              else if(operate=='/'){

                printf("Enter the second number (non-zero) or variable ('a' to 'e'): ");
                
                if(scanf("%f", &n2)){
                  while(n2==0){
                    printf("Enter the second number (non-zero): ");
                    scanf("%f", &n2);
                }
                  printf("The result is: %.2f\n",n1/n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("Enter the variable ('a' to 'e'): ");
                    scanf("%c", &var2);
                  }//for this, since u cant divide by 0, continue prompting unless valid variable is entered
				  
                  if(var2=='a'){
					
					printf("The result is: %.2f\n",n1/a);
					
                  }
                  else if(var2=='b'){
					printf("The result is: %.2f\n",n1/b);
					
				  }
                  else if(var2=='c'){
					
					printf("The result is: %.2f\n",n1/c);
					
				  }
                  else if(var2=='d'){
					
					printf("The result is: %.2f\n",n1/d);
					
				  }
                  else if(var2=='e'){
					
					printf("The result is: %.2f\n",n1/e);
					
				  }
                }
               
              }
			  //same process if operate is %, so output would be n1%variable name or n1%0 if variable is invalid or n1%n2 if number is entered
              else if(operate=='%'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                
                if(scanf("%f", &n2)){
                 printf("The result is: %.2f\n",fmod(n1,n2));
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",fmod(n1,0));
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",fmod(n1,a));
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",fmod(n1,b));
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",fmod(n1,c));
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",fmod(n1,d));
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",fmod(n1,e));
                  }
                }
              }
			  //same process if operate is P, so output would be pow(n1,variable name) or pow(n1,0) if variable is invalid or pow(n1,n2) if number is entered
              else if(operate=='P'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                
                if(scanf("%f", &n2)){
                 printf("The result is: %.2f\n",pow(n1,n2));
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",pow(n1,0));
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",pow(n1,a));
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",pow(n1,b));
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",pow(n1,c));
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",pow(n1,d));
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",pow(n1,e));
                  }
                }
              }
			  //same process if operate is I, so output would be min(n1,variable name) or min(n1,0) if variable is invalid or min(n1,n2) if number is entered
              else if(operate=='I'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                float minimum;
                
                if(scanf("%f", &n2)){
                  minimum=min(n1,n2);
                  printf("The minimum is: %.2f\n",minimum);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    minimum=min(n1,0);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  if(var2=='a'){
                    minimum=min(n1,a);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='b'){
                    minimum=min(n1,b);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='c'){
                    minimum=min(n1,c);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='d'){
                    minimum=min(n1,d);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='e'){
                    minimum=min(n1,e);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                }
                
              }
			  //same process if operate is X, so output would be max(n1,variable name) or max(n1,0) if variable is invalid or max(n1,n2) if number is entered
              else if(operate=='X'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                float maximum;
                
                if(scanf("%f", &n2)){
                  maximum=max(n1,n2);
                  printf("The maximum is: %.2f\n",maximum);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    maximum=max(n1,0);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  if(var2=='a'){
                    maximum=max(n1,a);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='b'){
                    maximum=max(n1,b);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='c'){
                    maximum=max(n1,c);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='d'){
                    maximum=max(n1,d);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='e'){
                    maximum=max(n1,e);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                }
                
                
              }
          }
		  else if(scanf("%c",&var1)){//if a variable is entered for the first number/variable
			  
			  if(var1=='a'){//if letter is a
				  //same process as before but instead of n1, its a
				printf("Please enter the operation ( + , - , * , / , %% , P (for power) , X (for maximum) , I (for minimum) )\n");
				scanf(" %c", &operate);
				operate=toupper(operate);
			  
				while(operate != '+' && operate != '-' && operate != '*' && operate != '/' && operate!='%' && operate!='P' && operate!='X' && operate!='I'){ 
					printf("Please enter the operation ( + , - , * , / , %% , P (for power) , X (for maximum) , I (for minimum) )\n");
					scanf(" %c", &operate);
					operate=toupper(operate);
				}
				if(operate=='+'){
				printf("Enter the second number or variable ('a' to 'e'): ");
                if(scanf("%f", &n2)){
                  printf("The result is: %.2f\n",a+n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",a+0);
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",a+a);
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",a+b);
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",a+c);
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",a+d);
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",a+e);
                  }
                }
              }
              else if(operate=='-'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                if(scanf("%f", &n2)){
                  printf("The result is: %.2f\n",a-n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",a-0);
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",a-a);
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",a-b);
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",a-c);
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",a-d);
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",a-e);
                  }
                }
              }
              else if(operate=='*'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                if(scanf("%f", &n2)){
                  printf("The result is: %.2f\n",a*n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",a*0);
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",a*a);
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",a*b);
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",a*c);
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",a*d);
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",a*e);
                  }
                }
              }
              else if(operate=='/'){

                printf("Enter the second number (non-zero) or variable ('a' to 'e'): ");
                
                if(scanf("%f", &n2)){
                  while(n2==0){
                    printf("Enter the second number (non-zero): ");
                    scanf("%f", &n2);
                }
                  printf("The result is: %.2f\n",a/n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("Enter the variable ('a' to 'e'): ");
                    scanf("%c", &var2);
                  }
                  if(var2=='a'){
					
					printf("The result is: %.2f\n",a/a);
					
				  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",a/b);
					
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",a/c);
					
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",a/d);
					
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",a/e);
					
                  }
                }

                
              }
              else if(operate=='%'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                
                if(scanf("%f", &n2)){
                 printf("The result is: %.2f\n",fmod(a,n2));
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",fmod(a,0));
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",fmod(a,a));
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",fmod(a,b));
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",fmod(a,c));
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",fmod(a,d));
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",fmod(a,e));
                  }
                }
              }
              else if(operate=='P'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                
                if(scanf("%f", &n2)){
                 printf("The result is: %.2f\n",pow(a,n2));
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",pow(a,0));
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",pow(a,a));
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",pow(a,b));
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",pow(a,c));
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",pow(a,d));
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",pow(a,e));
                  }
                }
              }
              else if(operate=='I'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                float minimum;
                
                if(scanf("%f", &n2)){
                  minimum=min(a,n2);
                  printf("The minimum is: %.2f\n",minimum);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    minimum=min(a,0);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  if(var2=='a'){
                    minimum=min(a,a);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='b'){
                    minimum=min(a,b);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='c'){
                    minimum=min(a,c);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='d'){
                    minimum=min(a,d);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='e'){
                    minimum=min(a,e);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                }
                
              }
              else if(operate=='X'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                float maximum;
                
                if(scanf("%f", &n2)){
                  maximum=max(a,n2);
                  printf("The maximum is: %.2f\n",maximum);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    maximum=max(a,0);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  if(var2=='a'){
                    maximum=max(a,a);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='b'){
                    maximum=max(a,b);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='c'){
                    maximum=max(a,c);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='d'){
                    maximum=max(a,d);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='e'){
                    maximum=max(a,e);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                }
                
                
              }
			  }
			  if(var1=='b'){//if variable is b
				  
				printf("Please enter the operation ( + , - , * , / , %% , P (for power) , X (for maximum) , I (for minimum) )\n");
				scanf(" %c", &operate);
				operate=toupper(operate);
			  
				while(operate != '+' && operate != '-' && operate != '*' && operate != '/' && operate!='%' && operate!='P' && operate!='X' && operate!='I'){ 
					printf("Please enter the operation ( + , - , * , / , %% , P (for power) , X (for maximum) , I (for minimum) )\n");
					scanf(" %c", &operate);
					operate=toupper(operate);
				}
				if(operate=='+'){
				printf("Enter the second number or variable ('a' to 'e'): ");
                if(scanf("%f", &n2)){
                  printf("The result is: %.2f\n",b+n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",b+0);
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",b+a);
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",b+b);
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",b+c);
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",b+d);
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",b+e);
                  }
                }
              }
              else if(operate=='-'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                if(scanf("%f", &n2)){
                  printf("The result is: %.2f\n",b-n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",b-0);
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",b-a);
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",b-b);
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",b-c);
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",b-d);
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",b-e);
                  }
                }
              }
              else if(operate=='*'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                if(scanf("%f", &n2)){
                  printf("The result is: %.2f\n",b*n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",b*0);
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",b*a);
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",b*b);
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",b*c);
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",b*d);
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",b*e);
                  }
                }
              }
              else if(operate=='/'){

                printf("Enter the second number (non-zero) or variable ('a' to 'e'): ");
                
                if(scanf("%f", &n2)){
                  while(n2==0){
                    printf("Enter the second number (non-zero): ");
                    scanf("%f", &n2);
                }
                  printf("The result is: %.2f\n",b/n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("Enter the variable ('a' to 'e'): ");
                    scanf("%c", &var2);
                  }
                  if(var2=='a'){
					printf("The result is: %.2f\n",b/a);
					
				  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",b/b);
					
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",b/c);
					
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",b/d);
					
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",b/e);
					
                  }
                }
                
                
              }
              else if(operate=='%'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                
                if(scanf("%f", &n2)){
                 printf("The result is: %.2f\n",fmod(b,n2));
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",fmod(b,0));
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",fmod(b,a));
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",fmod(b,b));
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",fmod(b,c));
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",fmod(b,d));
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",fmod(b,e));
                  }
                }
              }
              else if(operate=='P'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                
                if(scanf("%f", &n2)){
                 printf("The result is: %.2f\n",pow(b,n2));
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",pow(b,0));
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",pow(b,a));
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",pow(b,b));
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",pow(b,c));
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",pow(b,d));
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",pow(b,e));
                  }
                }
              }
              else if(operate=='I'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                float minimum;
                
                if(scanf("%f", &n2)){
                  minimum=min(b,n2);
                  printf("The minimum is: %.2f\n",minimum);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    minimum=min(b,0);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  if(var2=='a'){
                    minimum=min(b,a);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='b'){
                    minimum=min(b,b);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='c'){
                    minimum=min(b,c);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='d'){
                    minimum=min(b,d);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='e'){
                    minimum=min(b,e);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                }
                
              }
              else if(operate=='X'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                float maximum;
                
                if(scanf("%f", &n2)){
                  maximum=max(b,n2);
                  printf("The maximum is: %.2f\n",maximum);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    maximum=max(b,0);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  if(var2=='a'){
                    maximum=max(b,a);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='b'){
                    maximum=max(b,b);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='c'){
                    maximum=max(b,c);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='d'){
                    maximum=max(b,d);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='e'){
                    maximum=max(b,e);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                }
                
                
              }
			  }
			  if(var1=='c'){//if variable is c
				  
				printf("Please enter the operation ( + , - , * , / , %% , P (for power) , X (for maximum) , I (for minimum) )\n");
				scanf(" %c", &operate);
				operate=toupper(operate);
			  
				while(operate != '+' && operate != '-' && operate != '*' && operate != '/' && operate!='%' && operate!='P' && operate!='X' && operate!='I'){ 
					printf("Please enter the operation ( + , - , * , / , %% , P (for power) , X (for maximum) , I (for minimum) )\n");
					scanf(" %c", &operate);
					operate=toupper(operate);
				}
				if(operate=='+'){
				printf("Enter the second number or variable ('a' to 'e'): ");
                if(scanf("%f", &n2)){
                  printf("The result is: %.2f\n",c+n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",c+0);
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",c+a);
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",c+b);
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",c+c);
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",c+d);
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",c+e);
                  }
                }
              }
              else if(operate=='-'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                if(scanf("%f", &n2)){
                  printf("The result is: %.2f\n",c-n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",c-0);
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",c-a);
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",c-b);
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",c-c);
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",c-d);
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",c-e);
                  }
                }
              }
              else if(operate=='*'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                if(scanf("%f", &n2)){
                  printf("The result is: %.2f\n",c*n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",c*0);
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",c*a);
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",c*b);
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",c*c);
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",c*d);
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",c*e);
                  }
                }
              }
              else if(operate=='/'){

                printf("Enter the second number (non-zero) or variable ('a' to 'e'): ");
                
                if(scanf("%f", &n2)){
                  while(n2==0){
                    printf("Enter the second number (non-zero): ");
                    scanf("%f", &n2);
                }
                  printf("The result is: %.2f\n",c/n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("Enter the variable ('a' to 'e'): ");
                    scanf("%c", &var2);
                  }
                  if(var2=='a'){
					printf("The result is: %.2f\n",c/a);
					
				  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",c/b);
					
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",c/c);
					
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",c/d);
					
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",c/e);
					
                  }
                }
                
              }
              else if(operate=='%'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                
                if(scanf("%f", &n2)){
                 printf("The result is: %.2f\n",fmod(c,n2));
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",fmod(c,0));
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",fmod(c,a));
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",fmod(c,b));
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",fmod(c,c));
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",fmod(c,d));
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",fmod(c,e));
                  }
                }
              }
              else if(operate=='P'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                
                if(scanf("%f", &n2)){
                 printf("The result is: %.2f\n",pow(c,n2));
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",pow(c,0));
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",pow(c,a));
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",pow(c,b));
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",pow(c,c));
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",pow(c,d));
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",pow(c,e));
                  }
                }
              }
              else if(operate=='I'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                float minimum;
                
                if(scanf("%f", &n2)){
                  minimum=min(b,n2);
                  printf("The minimum is: %.2f\n",minimum);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    minimum=min(c,0);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  if(var2=='a'){
                    minimum=min(c,a);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='b'){
                    minimum=min(c,b);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='c'){
                    minimum=min(c,c);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='d'){
                    minimum=min(c,d);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='e'){
                    minimum=min(c,e);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                }
                
              }
              else if(operate=='X'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                float maximum;
                
                if(scanf("%f", &n2)){
                  maximum=max(c,n2);
                  printf("The maximum is: %.2f\n",maximum);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    maximum=max(c,0);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  if(var2=='a'){
                    maximum=max(c,a);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='b'){
                    maximum=max(c,b);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='c'){
                    maximum=max(c,c);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='d'){
                    maximum=max(c,d);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='e'){
                    maximum=max(c,e);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                }
                
                
              }
			  }
			  if(var1=='d'){//if variable is d
				  
				printf("Please enter the operation ( + , - , * , / , %% , P (for power) , X (for maximum) , I (for minimum) )\n");
				scanf(" %c", &operate);
				operate=toupper(operate);
			  
				while(operate != '+' && operate != '-' && operate != '*' && operate != '/' && operate!='%' && operate!='P' && operate!='X' && operate!='I'){ 
					printf("Please enter the operation ( + , - , * , / , %% , P (for power) , X (for maximum) , I (for minimum) )\n");
					scanf(" %c", &operate);
					operate=toupper(operate);
				}
				if(operate=='+'){
				printf("Enter the second number or variable ('a' to 'e'): ");
                if(scanf("%f", &n2)){
                  printf("The result is: %.2f\n",d+n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",d+0);
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",d+a);
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",d+b);
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",d+c);
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",d+d);
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",d+e);
                  }
                }
              }
              else if(operate=='-'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                if(scanf("%f", &n2)){
                  printf("The result is: %.2f\n",d-n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",d-0);
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",d-a);
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",d-b);
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",d-c);
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",d-d);
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",d-e);
                  }
                }
              }
              else if(operate=='*'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                if(scanf("%f", &n2)){
                  printf("The result is: %.2f\n",d*n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",d*0);
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",d*a);
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",d*b);
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",d*c);
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",d*d);
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",d*e);
                  }
                }
              }
              else if(operate=='/'){

                printf("Enter the second number (non-zero) or variable ('a' to 'e'): ");
                
                if(scanf("%f", &n2)){
                  while(n2==0){
                    printf("Enter the second number (non-zero): ");
                    scanf("%f", &n2);
                }
                  printf("The result is: %.2f\n",d/n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("Enter the variable ('a' to 'e'): ");
                    scanf("%c", &var2);
                  }
                  if(var2=='a'){
					printf("The result is: %.2f\n",d/a);
					
				  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",d/b);
					
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",d/c);
					
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",d/d);
					
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",d/e);
					
                  }
                }
                
              }
              else if(operate=='%'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                
                if(scanf("%f", &n2)){
                 printf("The result is: %.2f\n",fmod(d,n2));
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",fmod(d,0));
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",fmod(d,a));
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",fmod(d,b));
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",fmod(d,c));
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",fmod(d,d));
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",fmod(d,e));
                  }
                }
              }
              else if(operate=='P'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                
                if(scanf("%f", &n2)){
                 printf("The result is: %.2f\n",pow(d,n2));
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",pow(d,0));
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",pow(d,a));
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",pow(d,b));
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",pow(d,c));
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",pow(d,d));
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",pow(d,e));
                  }
                }
              }
              else if(operate=='I'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                float minimum;
                
                if(scanf("%f", &n2)){
                  minimum=min(d,n2);
                  printf("The minimum is: %.2f\n",minimum);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    minimum=min(d,0);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  if(var2=='a'){
                    minimum=min(d,a);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='b'){
                    minimum=min(d,b);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='c'){
                    minimum=min(d,c);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='d'){
                    minimum=min(d,d);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='e'){
                    minimum=min(d,e);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                }
                
              }
              else if(operate=='X'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                float maximum;
                
                if(scanf("%f", &n2)){
                  maximum=max(d,n2);
                  printf("The maximum is: %.2f\n",maximum);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    maximum=max(d,0);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  if(var2=='a'){
                    maximum=max(d,a);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='b'){
                    maximum=max(d,b);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='c'){
                    maximum=max(d,c);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='d'){
                    maximum=max(d,d);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='e'){
                    maximum=max(d,e);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                }
                
                
              }
			  }if(var1=='e'){//if variable is e
				  
				printf("Please enter the operation ( + , - , * , / , %% , P (for power) , X (for maximum) , I (for minimum) )\n");
				scanf(" %c", &operate);
				operate=toupper(operate);
			  
				while(operate != '+' && operate != '-' && operate != '*' && operate != '/' && operate!='%' && operate!='P' && operate!='X' && operate!='I'){ 
					printf("Please enter the operation ( + , - , * , / , %% , P (for power) , X (for maximum) , I (for minimum) )\n");
					scanf(" %c", &operate);
					operate=toupper(operate);
				}
				if(operate=='+'){
				printf("Enter the second number or variable ('a' to 'e'): ");
                if(scanf("%f", &n2)){
                  printf("The result is: %.2f\n",e+n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",e+0);
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",e+a);
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",e+b);
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",e+c);
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",e+d);
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",e+e);
                  }
                }
              }
              else if(operate=='-'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                if(scanf("%f", &n2)){
                  printf("The result is: %.2f\n",e-n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",e-0);
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",e-a);
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",e-b);
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",e-c);
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",e-d);
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",e-e);
                  }
                }
              }
              else if(operate=='*'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                if(scanf("%f", &n2)){
                  printf("The result is: %.2f\n",e*n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",e*0);
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",e*a);
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",e*b);
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",e*c);
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",e*d);
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",e*e);
                  }
                }
              }
              else if(operate=='/'){

                printf("Enter the second number (non-zero) or variable ('a' to 'e'): ");
                
                if(scanf("%f", &n2)){
                  while(n2==0){
                    printf("Enter the second number (non-zero): ");
                    scanf("%f", &n2);
                }
                  printf("The result is: %.2f\n",e/n2);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("Enter the variable ('a' to 'e'): ");
                    scanf("%c", &var2);
                  }
                  if(var2=='a'){
					printf("The result is: %.2f\n",e/a);
					
				  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",e/b);
					
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",e/c);
					
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",e/d);
					
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",e/e);
					
                  }
                }
                
              }
              else if(operate=='%'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                
                if(scanf("%f", &n2)){
                 printf("The result is: %.2f\n",fmod(e,n2));
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",fmod(e,0));
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",fmod(e,a));
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",fmod(e,b));
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",fmod(e,c));
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",fmod(e,d));
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",fmod(e,e));
                  }
                }
              }
              else if(operate=='P'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                
                if(scanf("%f", &n2)){
                 printf("The result is: %.2f\n",pow(e,n2));
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    printf("The result is: %.2f\n",pow(e,0));
                  }
                  if(var2=='a'){
                    printf("The result is: %.2f\n",pow(e,a));
                  }
                  else if(var2=='b'){
                    printf("The result is: %.2f\n",pow(e,b));
                  }
                  else if(var2=='c'){
                    printf("The result is: %.2f\n",pow(e,c));
                  }
                  else if(var2=='d'){
                    printf("The result is: %.2f\n",pow(e,d));
                  }
                  else if(var2=='e'){
                    printf("The result is: %.2f\n",pow(e,e));
                  }
                }
              }
              else if(operate=='I'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                float minimum;
                
                if(scanf("%f", &n2)){
                  minimum=min(e,n2);
                  printf("The minimum is: %.2f\n",minimum);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    minimum=min(e,0);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  if(var2=='a'){
                    minimum=min(e,a);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='b'){
                    minimum=min(e,b);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='c'){
                    minimum=min(e,c);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='d'){
                    minimum=min(e,d);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                  else if(var2=='e'){
                    minimum=min(e,e);
                    printf("The minimum is: %.2f\n",minimum);
                  }
                }
                
              }
              else if(operate=='X'){
                printf("Enter the second number or variable ('a' to 'e'): ");
                float maximum;
                
                if(scanf("%f", &n2)){
                  maximum=max(e,n2);
                  printf("The maximum is: %.2f\n",maximum);
                }
                else if(scanf("%c",&var2)){
                  if(var2!='a' && var2!='b' && var2!='c' && var2!='d' && var2!='e'){
                    maximum=max(e,0);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  if(var2=='a'){
                    maximum=max(e,a);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='b'){
                    maximum=max(e,b);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='c'){
                    maximum=max(e,c);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='d'){
                    maximum=max(e,d);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                  else if(var2=='e'){
                    maximum=max(e,e);
                    printf("The maximum is: %.2f\n",maximum);
                  }
                }
                
                
              }
			  }
				
        }
       
      }//end of sub option B
	  else if(opt=='U'){//if the sub option is U
		  float num;//variable for the num
		  char operate;//variable for operator
		  char var;//variable for the letter (if letter entered instead of number)
		  printf("Please enter a number or name of variable ('a' to 'e'): ");
		  if(scanf("%f",&num)){//if the user entered a number
		  //same process as option U
			  printf("Please enter the operator (S (for square root), L for logarithm (log x), E (for exponentiation), C (for the smallest integer value greater than or equal to x), F (for the largest integer value greater than or equal to x))\n");
			  scanf("%c",&operate);
			  operate=toupper(operate);
		      while(operate != 'S' && operate != 'L' && operate != 'E' && operate != 'C' && operate!='F'){
				  printf("Please enter the operator (S (for square root), L for logarithm (log x), E (for exponentiation), C (for the smallest integer value greater than or equal to x), F (for the largest integer value greater than or equal to x))\n");
				  scanf(" %c", &operate);
				  operate=toupper(operate);
			  }
			  if(operate=='S'){
				  printf("The result is %.2f\n",sqrt(num));
			  }
			  else if(operate=='L'){
				  printf("The result is %.2f\n",log10(num));
			  }
			  else if(operate=='E'){
				  printf("The result is %.2f\n",exp(num));
			  }
			  else if(operate=='C'){
				  printf("The result is %.2f\n",ceil(num));
			  }
			  else if(operate=='F'){
				  printf("The result is %.2f\n",floor(num));
			  }
			  
		  }
		  else if(scanf("%c",&var)){//however is user enters a variable, then its the same thing as before but instead num will be replaced by the variable name
			  if(var=='a'){//if the variable is a
				  printf("Please enter the operator (S (for square root), L for logarithm (log x), E (for exponentiation), C (for the smallest integer value greater than or equal to x), F (for the largest integer value greater than or equal to x))\n");
				  scanf("%c",&operate);
				  operate=toupper(operate);
				  while(operate != 'S' && operate != 'L' && operate != 'E' && operate != 'C' && operate!='F'){
					  printf("Please enter the operator (S (for square root), L for logarithm (log x), E (for exponentiation), C (for the smallest integer value greater than or equal to x), F (for the largest integer value greater than or equal to x))\n");
					  scanf(" %c", &operate);
					  operate=toupper(operate);
				  }
				  if(operate=='S'){
					printf("The result is %.2f\n",sqrt(a));
				  }
				  else if(operate=='L'){
					printf("The result is %.2f\n",log10(a));
				  }
				  else if(operate=='E'){
					printf("The result is %.2f\n",exp(a));
				  }
				  else if(operate=='C'){
					printf("The result is %.2f\n",ceil(a));
				  }
				  else if(operate=='F'){
					printf("The result is %.2f\n",floor(a));
				  }
			  }
			  else if(var=='b'){//if variable is b
				  printf("Please enter the operator (S (for square root), L for logarithm (log x), E (for exponentiation), C (for the smallest integer value greater than or equal to x), F (for the largest integer value greater than or equal to x))\n");
				  scanf("%c",&operate);
				  operate=toupper(operate);
				  while(operate != 'S' && operate != 'L' && operate != 'E' && operate != 'C' && operate!='F'){
					  printf("Please enter the operator (S (for square root), L for logarithm (log x), E (for exponentiation), C (for the smallest integer value greater than or equal to x), F (for the largest integer value greater than or equal to x))\n");
					  scanf(" %c", &operate);
					  operate=toupper(operate);
				  }
				  if(operate=='S'){
					printf("The result is %.2f\n",sqrt(b));
				  }
				  else if(operate=='L'){
					printf("The result is %.2f\n",log10(b));
				  }
				  else if(operate=='E'){
					printf("The result is %.2f\n",exp(b));
				  }
				  else if(operate=='C'){
					printf("The result is %.2f\n",ceil(b));
				  }
				  else if(operate=='F'){
					printf("The result is %.2f\n",floor(b));
				  }
			  }
			  else if(var=='c'){//if variable is c
				  printf("Please enter the operator (S (for square root), L for logarithm (log x), E (for exponentiation), C (for the smallest integer value greater than or equal to x), F (for the largest integer value greater than or equal to x))\n");
				  scanf("%c",&operate);
				  operate=toupper(operate);
				  while(operate != 'S' && operate != 'L' && operate != 'E' && operate != 'C' && operate!='F'){
					  printf("Please enter the operator (S (for square root), L for logarithm (log x), E (for exponentiation), C (for the smallest integer value greater than or equal to x), F (for the largest integer value greater than or equal to x))\n");
					  scanf(" %c", &operate);
					  operate=toupper(operate);
				  }
				  if(operate=='S'){
					printf("The result is %.2f\n",sqrt(c));
				  }
				  else if(operate=='L'){
					printf("The result is %.2f\n",log10(c));
				  }
				  else if(operate=='E'){
					printf("The result is %.2f\n",exp(c));
				  }
				  else if(operate=='C'){
					printf("The result is %.2f\n",ceil(c));
				  }
				  else if(operate=='F'){
					printf("The result is %.2f\n",floor(c));
				  }
			  }
			  else if(var=='d'){//if variable is d
				  printf("Please enter the operator (S (for square root), L for logarithm (log x), E (for exponentiation), C (for the smallest integer value greater than or equal to x), F (for the largest integer value greater than or equal to x))\n");
				  scanf("%c",&operate);
				  operate=toupper(operate);
				  while(operate != 'S' && operate != 'L' && operate != 'E' && operate != 'C' && operate!='F'){
					  printf("Please enter the operator (S (for square root), L for logarithm (log x), E (for exponentiation), C (for the smallest integer value greater than or equal to x), F (for the largest integer value greater than or equal to x))\n");
					  scanf(" %c", &operate);
					  operate=toupper(operate);
				  }
				  if(operate=='S'){
					printf("The result is %.2f\n",sqrt(d));
				  }
				  else if(operate=='L'){
					printf("The result is %.2f\n",log10(d));
				  }
				  else if(operate=='E'){
					printf("The result is %.2f\n",exp(d));
				  }
				  else if(operate=='C'){
					printf("The result is %.2f\n",ceil(d));
				  }
				  else if(operate=='F'){
					printf("The result is %.2f\n",floor(d));
				  }
			  }
			  else if(var=='e'){//if variable is e
				  printf("Please enter the operator (S (for square root), L for logarithm (log x), E (for exponentiation), C (for the smallest integer value greater than or equal to x), F (for the largest integer value greater than or equal to x))\n");
				  scanf("%c",&operate);
				  operate=toupper(operate);
				  while(operate != 'S' && operate != 'L' && operate != 'E' && operate != 'C' && operate!='F'){
					  printf("Please enter the operator (S (for square root), L for logarithm (log x), E (for exponentiation), C (for the smallest integer value greater than or equal to x), F (for the largest integer value greater than or equal to x))\n");
					  scanf(" %c", &operate);
					  operate=toupper(operate);
				  }
				  if(operate=='S'){
					printf("The result is %.2f\n",sqrt(e));
				  }
				  else if(operate=='L'){
					printf("The result is %.2f\n",log10(e));
				  }
				  else if(operate=='E'){
					printf("The result is %.2f\n",exp(e));
				  }
				  else if(operate=='C'){
					printf("The result is %.2f\n",ceil(e));
				  }
				  else if(operate=='F'){
					printf("The result is %.2f\n",floor(e));
				  }
			  }
		  }
	  }//end of sub option U
	  
	  
      else if(opt=='E'){//if sub option is E, it will break this loop and return to the main menu (exits option A)
          break;
	  }
    }
    
  }
  else if (option =='E'){//if option is E, then it will break the loop and exit out of the calculator
    break;
  }
  
  
}
printf("Thank you for using my calculator. Have a good day!");//little goodbye message
return 0;
}
//the 2 functions used for finding the max and/or the min between 2 numbers 
float max(float n1,float n2){
  return (n1>n2) ? n1 : n2;
}
float min(float n1,float n2){
  return (n1>n2) ? n2 : n1;
}