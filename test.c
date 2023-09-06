#include <stdio.h>
int main()
{
//     //     printf("hellow world \n");
//     /*for size of variable*/
//     printf("%lu", sizeof(int));

//     /* program of multiplication table*/
//     int a;
//     printf("Enter a number \n");
//     scanf("%d", &a);
//     printf("Table of %d : \n", a);
//     printf("%d*1=%d \n", a, a * 1);
//     printf("%d*2=%d \n", a, a * 2);
//     printf("%d*3=%d \n", a, a * 3);
//     printf("%d*4=%d \n", a, a * 4);
//     printf("%d*5=%d \n", a, a * 5);
//     printf("%d*6=%d \n", a, a * 6);
//     printf("%d*7=%d \n", a, a * 7);
//     printf("%d*8=%d \n", a, a * 8);
//     printf("%d*9=%d \n", a, a * 9);
//     printf("%d*10=%d \n", a, a * 10);
//     /*if else satement*/
//     int age;
//     printf("Enter your age \n");
//     scanf("%d", &age);
//     printf("You have entered %d as your age. \n", age);
//     if (age >= 18)
//     {
//         printf("You can vote \n");
//     }
//     else if (age > 10)
//     {
//         printf("you are in 10-18 you can vote for kids");
//     }

//     else
//     {
//         printf("you can not vote");
//     }
//     /* example of if else*/
//     int count;
//     printf("Enter 1 if you have passed in scince \n Enter 2 if you have passed in math \n Enter 3 if you have passed in physocs \n ");
//     scanf("%d", &count);
//     if (count == 1)
//     {
//         printf("You will get a 45tk gift");
//     }
//     else if (count == 2)
//     {
//         printf("You will get a 15tk gift");
//     }
//     else if (count == 3)
//     {
//         printf("You will get a 20tk gift");
//     }
//     else
//     {
//         printf("Please enter a valid number. there is no option for %d", count);
//     }
//     /* switch case statement*/
//     int age;
//     printf("Enter your age");
//     scanf("%d", &age);
//     switch (age)
//     {
//     case 10:
//         printf("The age is 10");
//         break;
//     case 20:
//         printf("The age is 20");
//         break;
//     case 30:
//         printf("The age is 30");
//         break;

//     default:
//         printf("The age is not 10, 20 or 30");
//         break;
//     }
//     /* prograam using switch . you can use switch case inside a switch case*/
//     int age, marks;
//     printf("Enter your age \n ");
//     scanf("%d", &age);
//     printf("Enter your marks \n ");
//     scanf("%d", &marks);
//     switch (age)
//     {
//     case 10:
//         printf("The age is 10 \n ");
//         switch (marks)
//         {
//         case 80:
//             printf("Your marks is 80 \n ");
//             break;

//         default:
//             printf("your marks is not 80 \n ");
//             break;
//         }
//         break;
//     case 20:
//         printf("The age is 20 \n ");
//         break;
//     case 30:
//         printf("The age is 30 \n ");
//         break;

//     default:
//         printf("The age is not 10, 20 or 3 \n ");
//         break;
//     }
//     /* do while loop*/
//     int num, index = 0;
//     printf("Enter a number \n ");
//     scanf("%d", &num);
//     do
//     {
//         printf("%d\n", index);
//         index++;
//     } while (index <= num);
//     /* multiplication table using do while loop*/
//     int a, b, c = 1;
//     printf("Enter a number which multiplication table you want\n");
//     scanf("%d", &a);
//     printf("How many time you want to multiply %d\n", a);
//     scanf("%d", &b);
//     printf("Your multiplication table of %d is given below\n", a);
//     do
//     {
//         printf("%d*%d=%d\n", a, c, a * c);
//         c++;
//     } while (c <= b);

//     /* multiplication table using while loop*/
//     int a, b, c = 1;
//     printf("Enter a number which multiplication table you want\n");
//     scanf("%d", &a);
//     printf("How many time you want to multiply %d\n", a);
//     scanf("%d", &b);
//     switch (b)
//     {
//     case 0:
//         printf("You can't multiply %d 0 times", a);
//         break;

//     default:
//         printf("Your multiplication table of %d is given below\n", a);
//         break;
//     }

//     while (c <= b)
//     {
//         printf("%d*%d=%d\n", a, c, a * c);
//         c++;
//     }
//     /*for loop .you can use more than one variable*/
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d", i);
//     }
//     int n, i;
//     int sum = 0;
//     printf("Enter the n i.e. max values of series: ");
//     scanf("%d", &n);
//     sum = (n * (n + 1) * (2 * n + 1)) / 6;
//     printf("Sum of the series : ");
//     for (i = 1; i <= n; i++)
//     {
//         if (i != n)
//             printf("%d^2 + ", i);
//         else
//             printf("%d^2 = %d ", i, sum);
//     }

//     int i, age;
//     for (i = 0; i < 5; i++)
//     {

//         printf("Iteration time = %d\nEnter Your Age : ", i);
//         scanf("%d", &age);
//         if (age > 10)
//         {
//             break; // Checking Break Statement
//         }
//         // if(age<10)
//         // { continue; }
//         // printf("Hey Guys\n");
//         // printf("This code is printed coz if condition is not satisfied. \n");
//         // printf("Checking Continue Statement\n\n"); // Checking Continue Statement
//     }

//     int i, age;
//     for (i = 0; < ++)
//     {
//         printf("Iteration time %d\nEnter Your Age : ", i);
//         scan“"%d",& );
//         // if (age>10)
//         // {
//         // break; // Checking Break Statement
//         // }
//         if (age < 10)
//         {
//             continue;
//         }
//         printf("Hey Guys\n");
//         printf("This code is printed coz if condition is not satisfied. \n");
//         printf("Checking Continue Statement\n\n"); // Checking Continue Statement
//     }

//     printf("Hello World\n");
//     int i, age;
//     for (i = 0; i < 10; i++)
//     {
//         printf("%d\nEnter your age\n", i);
//         scanf("%d", &age);
//         // if (age>10)
//         // {
//         //     break;
//         // }
//         if (age > 10)
//         {
//             continue;
//         }
//         printf("we have not come accross any continue statements");
//         printf("we have not come accross any continue statements");
//         printf("we have not come accross any continue statements");
//         printf("we have not come accross any continue statements");
//         printf("Harry is a good boy");
//     }

//     int x;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("\nHey Guys\n\n");
//         for (int j = ; j < 3; j++)
//         {
//             printf("Type any No. & To Exit : Press 1\n");
//             scanf("%d", &x);
//             if (x == 1)
//             {
//                 goto end; // This goto will transfer the control to end: i.e. out of both loop
//             }
//         }
//     }
// end:
//     printf("\'For\' loops are skipped as you pressed 1");

//     // label:
//     //     printf("we are inside label");
//     //     goto end;
//     // printf("Hello World\n");
//     // goto label;
//     // end:
//     //     printf("we are at end");
//     int num;
//     for (int i = 0; i < 8; i++)
//     {
//         printf("%d\n", i);
//         for (int j = 0; j < 8; j++)
//         {
//             printf("Enter the number. enter 0 to exit\n");
//             scanf("%d", &num);
//             if (num == 0)
//             {
//                 goto end;
//             }
//         }
//     }
// end:

//     Typecasting Syntax(type) value;
//     int a = 3;
//     float n = (float)54 / 5;
//     printf("The Value of a is %f\n", b);

//     int a;
//     float b;
//     char c;
//     printf("Enter the value of a\n");
//     scanf("%d", &a);
//     printf("A is %d\n", a);
//     printf("Enter the value of b\n");
//     scanf("%f", &b);
//     printf("B is %d\n", (int)b);
//     printf("Type any character : \n");
//     scanf(" %c", &c);
//     printf("Character is %d", (int)c);

//     short a = 10; // initializing variable of short data type
//     int b;        // declaring int variable 'b'.
//     b = a;        // Implicit type casting
//     printf("%d\n", a);
//     printf("%d\n", b);
// No Argument and No Return Value
//     void Star_pattern()
//     {
//         int a;
//         printf("Enter how many stars(*) you want : \n"); /* In this both declaration and definition of function are done together.*/
//         scanf("%d", &a);
//         for (int i = 0; i < a; i++)
//         {
//             printf("*");
//         }
//     }
// // Without arguments and with return value :
// int Sum(); /* Declaration of Function */

//  /*Other Code*/
// int Sum()
// {

// 	int x,y,z;
// 	printf("Enter no. 1 : \t");
// 	scanf("%d",&x);
// 	printf("\nEnter no. 2 : \t");
// 	scanf("%d",&y );
// 	z=x+y;
// 	return z;
// }
//  // With arguments and without return value :
//  void Product(int x ,int y ); /* Declaration of Function */

// 			// Other Code
// Product(5,4) /* Calling Product Function in main() */

// void Product(int a,int b)
// {
// 	int Multiplication;
// 	Multiplication = a*b ; /* Definition of Function */
// 	printf("The Product is %d\n\n",Multiplication);
// }
// // With arguments and with return value :
// float Percentage(int x,int y); // Declaration of Function
// /*Code*/ int x;
// x = Percentage(80,95); // Calling Function
//  /*Code*/
// float Percentage(int x,int y)
// {
// 	float perct;
// 	perct = ((x+y)/200.0)*100.0; // Definition of Function
// 	return perct;
// }
// #include <stdio.h>
// int sum(int a, int b);
// void printstar(int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//          printf("%c", '*');
//     }
// }

// int takenumber()
// {
//     int i;
//     printf("Enter a number");
//     scanf("%d", &i);
//     return i;
// }
// int main()
// {
//     int a, b, c;
//     a = 9;
//     b = 87;
//     // c = sum(a, b);
//     // printstar(7);
//     c = takenumber();
//     // printf("The sum is %d \n", c);
//     printf("The number entered is %d \n", c);
//     return 0;
// }

// int sum(int a, int b)
// {
//     return a + b;
// }
// #include<stdio.h>
// int factorial(int number)
// {
// 	if (number ==1 || number == 0)
// 	{
// 		return 1;
// 	}
// 	else
// 	{
// 		return number*factorial(number-1);	//Recursion of Function
// 	}
// }

// int main()
// {
// 	int num;
// 	printf("Enter a no. :");
// 	scanf(%d, &num);
// 	printf("\nThe factorial of %d is %d", num, factorial(num));

// 	return 0;
// }
// #include <stdio.h>

// int factorial(int number)
// {

//     if (number == 1 || number == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return (number * factorial(number - 1));
//     }
// }

// int main()
// {
//     int num;
//     printf("Enter the number you want the factorial of\n");
//     scanf("%d", &num);
//     printf("The factorial of %d is %d\n", num, factorial(num));

//     return 0;
// }
//     return 0;
// }
/* Exercise of Units and Conversions

kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters

*/
// #include <stdio.h>

// int main()
// {

//     char input;
//     float kmsToMiles = 0.621371;
//     float inchesToFoot = 0.0833333;
//     float cmsToInches = 0.393701;
//     float poundToKgs = 0.453592;
//     float inchesToMeters = 0.0254;
//     float first, second;

//     while (1)
//     {
//         printf("Enter the input character. q to quit\n       1. kms to miles\n       2. inches to foot\n       3. cms to inches\n       4. pound to kgs\n       5. inches to meters\n");

//         scanf(" %c", &input);
//         //    printf("The character is '%c'", input);
//         switch (input)
//         {
//         case 'q':
//             printf("Quitting the program...");
//             goto end;
//             break;

//         case '1':
//             printf("Enter quantity in terms of first unit\n");
//             scanf("%f", &first);
//             second = first * kmsToMiles;
//             printf("%.2f Kms is equal to %.2f Miles\n\n\n", first, second);
//             break;

//         case '2':
//             printf("Enter quantity in terms of first unit\n");
//             scanf("%f", &first);
//             second = first * inchesToFoot;
//             printf("%f Inches is equal to %f Foot\n", first, second);
//             break;

//         case '3':
//             printf("Enter quantity in terms of first unit\n");
//             scanf("%f", &first);
//             second = first * cmsToInches;
//             printf("%f Cms is equal to %f Inches\n", first, second);
//             break;

//         case '4':
//             printf("Enter quantity in terms of first unit\n");
//             scanf("%f", &first);
//             second = first * poundToKgs;
//             printf("%f Pounds is equal to Kgs %f \n", first, second);
//             break;

//         case '5':
//             printf("Enter quantity in terms of first unit\n");
//             scanf("%f", &first);
//             second = first * inchesToMeters;
//             printf("%f inches is equal to %f meters \n", first, second);
//             break;

//         default:
//             printf("In default now");
//             break;
//         }
//     }
// end:

return 0;
}