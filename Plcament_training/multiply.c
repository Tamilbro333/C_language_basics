// #include<stdio.h>
// int main(){
//     float num1;
//     float num2;
//     printf("Enter two numbers: ");
//     scanf("%f %f", &num1, &num2);
//     float mul = num1 * num2;
//     printf("The product is: %f\n", mul);
// }

// #include<stdio.h>
// int main(){
//     int basic=10000;
//     int hra=(20.0/100)*basic;
//     int da=(5.0/100)*basic;
//     int salary = basic + hra + da;
//     printf("%d\n", salary);


//     printf("%f", 5.0/100);
// }

// #include<stdio.h>  //area of circle
// int main(){
//     float radius,area;
//     float pi =3.14;
//     printf("enter radius:");
//     scanf("%f",&radius);
//     area=pi*(radius*radius);
//     printf("%.2f\n",area);
//     return 0;

    
// }

// #include<stdio.h> //perimeter of circle
// int main(){
//     float radius,pr;
//     printf("enter radius: ");
//     scanf("%f",&radius);
//     pr=2*3.14*radius;
//     printf("%.2f",pr);

// }


// #include<stdio.h>  //area of rectangle
// int main(){
//     float len,br,area;
//     printf("enter len and br : ");
//     scanf("%f %f",&len,&br);
//     area=len*br;
//     printf("%.2f",area);
//     return 0;
// }



// #include<stdio.h> //area of square
// int main(){
//     int area, len;
//     printf("enter length if a side:");
//     scanf("%d",&len);
//     area=len*len;
//     printf("%d",area);

// }


// #include<stdio.h> //ASCII VALUE
// int main(){
//     char c;
//     scanf("%c", &c);
//     printf("%d", c);
//     return 0;
// }


// #include<stdio.h> //hours to mins
// int main(){
//     float hrs, min;
//     printf("Enter hours: ");
//     scanf("%f", &hrs);
//     min = hrs * 60;
//     printf("%.2f minutes\n",min);
//     return 0;
// }



// #include<stdio.h>   //swap without temp
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("%d %d",a,b);
// }



// #include<stdio.h> //convert Celsius to Fahrenheit
// int main(){
//     float f,c;
//     scanf("%f",&c);
//     f=(c*(9.0/5))+32;
//     printf("%.2f",f);
// }




// #include <stdio.h> // print user information

// int main() {
//     char name[50], gender[10];
//     double ID, phone;

//     printf("Enter your name:\n");
//     scanf(" %[^\n]", name);

//     printf("Enter your gender:\n");
//     scanf(" %[^\n]", gender);

//     printf("Enter your ID:\n");
//     scanf("%lf", &ID);

//     printf("Enter your phone number:\n");
//     scanf("%lf", &phone);

//     printf("\n--- User Information ---\n");
//     printf("Name          : %s\n", name);
//     printf("Gender        : %s\n", gender);
//     printf("ID            : %.0lf\n", ID);
//     printf("Phone Number  : %.0lf\n", phone);

//     return 0;
// }




//  #include<stdio.h>  //average
//  int main(){
//     int tamil,english,maths,science,social,avg;
//     printf("enter your mark in Tamil:");
//     scanf("%d",&tamil);
//     printf("enter your mark in English:");
//     scanf("%d",&english);
//     printf("enter your mark in maths:");
//     scanf("%d",&maths);
//     printf("enter your mark in science:");
//     scanf("%d",&science);
//     printf("enter your mark in social:");
//     scanf("%d",&social);
//     avg=(tamil+english+maths+science+social)/5;
//     printf("The avergae mark: %d",avg);


//  }



// #include<stdio.h> //BMI
// int main(){
//     float h , w ,bmi;
//     printf("Enter your Height:");
//     scanf("%f",&h);
//     printf("Enter your Weight:");
//     scanf("%f",&w);
//     bmi=w/(h*h);
//     printf("BMI %.2f",bmi);
// }




// #include<stdio.h>  //feet to meter conversion
// int main(){
//     float feet,meter;
//     printf("Enter the feet:");
//     scanf("%f",&feet);
//     meter=feet*0.3048;
//     printf("Meter: %.2f",meter);

// }


// #include<stdio.h> //character into integer
// int main(){
//     char c;
//     printf("enter a charcter:");
//     scanf("%c",&c);
//     printf("Integer : %d",c);
// }

 


// #include<stdio.h> //km into M
// int main(){
//     float km,m;
//     printf("Enter kM:");
//     scanf("%f",&km);
//     m=km*1000;
//     printf("%.2f Meter",m);
// }



// #include<stdio.h> //M into CM
// int main(){
//     float m,cm;
//     printf("Enter M:");
//     scanf("%f",&m);
//     cm=m*100;
//     printf("%.2f CM",cm);
// }



// #include<stdio.h> //cm into mm
// int main(){
//     float cm,mm;
//     printf("Enter CM:");
//     scanf("%f",&cm);
//     mm=cm*10;
//     printf("%.2f MM",mm);
// }


// #include<stdio.h> //M into KM
// int main(){
//     float km,m;
//     printf("Enter M:");
//     scanf("%f",&m);
//     km=m*0.001;
//     printf("%.2f KM",km);
//  }


// #include<stdio.h> //cm into M
// int main(){
//     float cm,m;
//     printf("Enter CM:");
//     scanf("%f",&cm);
//     m=cm*0.01;
//     printf("%.2f M",m);
// }


// #include<stdio.h> //mm into cm
// int main(){
//     float mm,cm;
//     printf("Enter MM:");
//     scanf("%f",&mm);
//     cm=mm*0.1;
//     printf("%.2f CM",cm);
// }



// #include<stdio.h> //vote eligible with ternary
// int  main(){
//     int age;
//     printf("Enter Your Age;");
//     scanf("%d",&age);
//     age>=18 ? printf("eligible") : printf("Not");
// }



// #include<stdio.h> //avergae of 3 number
// int main(){
//     int a,b,c;
//     printf("Enter three numbers:");
//     scanf("%d %d %d",&a,&b,&c);
//     printf("The Average: %d",(a+b+c)/3);



// #include<stdio.h>  //percentage
// int main(){
//     float market,selling,per,profit;
//     printf("Enter the Market price and Selling price: ");
//     scanf("%d %d",&market,&selling);
//     profit=selling-market;
//     per= (profit/market)*100;
//     printf("%.2f percent",per);

// }



// #include<stdio.h>  //Age eligibility
// int main(){
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     if (age >= 18) {
//         printf("You are eligible.\n");
//     } else {
//         printf("You are not eligible.\n");
//     }
    
// }




// #include<stdio.h>  //rain
// int main(){
//     char rain;
//     printf("R or r: ");
//     scanf("%c", &rain);
//     if (rain =='R') {
//         printf("bring Umberlla.\n");
//     } else {
//         printf("dont bring Umberlla.\n");
//     }
    
// }


// #include<stdio.h>
// int main(){
//     int a=0;
//     a = 5 < 2 ? 4 : 3;
//     printf("%d", a);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a=10,b=20;
//     printf("%d",b/a);
// }




// #include<stdio.h>  //Check bank balance
// int main(){
//     int set_pin,pin,amount,bal,menu,deposit,withdral;
//     amount=0;
//     printf("Set your PIN :");
//     scanf("%d",&set_pin);
//     printf("Enter your PIN :");
//     scanf("%d",&pin);
//     if (set_pin==pin){
//         printf("\n1.Check Balance. \n2.Deposit. \n3.Withdral. \n4.Exit");
//         printf("\nEnter your Choice number: ");
//         scanf("%d",&menu);
//         switch (menu)
//         {
//         case 1:
//             printf("\nBalance: %d ",bal);
//             break;
//         case 2:
//             printf("\nEnter your amount:");
            
//             scanf("%d",&deposit);
//             amount+=deposit;
//             printf("\nAmount Deposit Successfully");
//             break;
//         case 3:
//             printf("\nEnter your amount:");
//             scanf("%d",&withdral);
//             if(amount<withdral){
//                 printf("\nInsuffient Balance");
//             }
//             else{
//                 amount-=withdral;
//                 printf("\nAmount Received Successfully");
//             }
//             break;

        
//         default:

//             break;
//         }

//     }


// }




// #include<stdio.h> //sum of first 10 numbers
// int main(){
//     int i,sum=0;
//     for(i=1;i<=10;i++){
//         sum+=i;
//     }
//     printf("%d",sum);
// }



// #include<stdio.h> //print 1 to 100
// int main(){
//     for(int i=1;i<=100;i++){
//         printf("%d  ",i);
//     }
    
// }


// #include<stdio.h> //odd or even
// int main(){
//     int i;
//     for(i=1;i<=100;i++){
//         if(i%2==0){
//             printf("%d is Even\n",i);
//         }
//         else{
//             printf("%d is Odd\n",i);
//         }

//     }
    
// }




// #include<stdio.h> //divisible by 5
// int main(){
//     for (int i = 1; i <= 100; i++) {
//         if (i % 5 == 0) {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }





// #include<stdio.h> //square of first 10 number
// int main(){
//     for (int i=1;i<=10;i++){
//         printf("%d ",i*i);
//     }
// }



// #include<stdio.h> //factorial
// int main(){
//     int fact=1,num;
//     printf("Enter a number:");
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++){
//         fact*=i;

//     }
//     printf("%d  ",fact);
// }




// #include<stdio.h> //count digits and check Armstrong number
// int main(){
//     int num, sum = 0, num_copy, count = 0, temp;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     num_copy = num;
//     temp = num;

//     // Count the number of digits
//     while (temp > 0) {
//         count++;
//         temp /= 10;
//     }

//     // Check if the number is an Armstrong number
//     while (num > 0) {
//         int div = num % 10;
//         int power = 1;
//         for (int i = 0; i < count; i++) {
//             power *= div;
//         }
//         sum += power;
//         num /= 10;
//     }

//     if (sum == num_copy) {
//         printf("%d is an Armstrong number.\n", num_copy);
//     } else {
//         printf("%d is not an Armstrong number.\n", num_copy);
//     }

//     printf("Number of digits: %d\n", count);
//     return 0;
// }



// #include<stdio.h>  //prime number
// int main(){
//     int num, i, is_prime = 1;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (num <= 1) {
//         is_prime = 0;
//     } else {
//         for (i = 2; i < num ; i++) {
//             if (num % i == 0) {
//                 is_prime = 0;
//                 break;
//             }
//         }
//     }

//     if (is_prime) {
//         printf("%d is  prime number.\n", num);
//     } else {
//         printf("%d is not  prime number.\n", num);
//     }

//     return 0;
// }



// #include<stdio.h> //sum  of natural number
// int main(){
//     int sum=0,num;
//     printf("Enter a number:");
//     scanf("%d",&num);
//     for (int i=1;i<=num;i++){
//         sum+=i;
//     }
//     printf("%d",sum);
// }




// #include<stdio.h> //check prime number
// int main(){
//     int num,i,prime=1;
//     printf("Enter a number:");
//     scanf("%d",&num);
//     if(num<=1){
//         prime=0;
//     }
//     else{
//         for ( i=2;i<num;i++){
//             if(num%i==0){
//                 prime=0;
//                 break;
//             }
//         }

//     }
//     if(prime){
//         printf("%d is prime",num);
//     }
//     else{
//         printf("%d is not a prime",num);
//     }
// }





// #include<stdio.h> //check prime
// int main(){
//     int num,prime=1;
//     printf("enter a number;");
//     scanf("%d",&num);
//     if(num<=1){
//         prime=0;
//     }
//     else{
//         int i=2;
//         while (i <= num / 2)
//         {
//             if(num%i==0){
//                 prime=0;
//                 break;
//             }
//             else{
//                 prime=1;
//             }i++;

//         }

        
//     }
//     if(prime){
//         printf("%d is prime ",num);
//     }
//     else{
//         printf("%d is not prime",num);
//     }
// }





// #include<stdio.h> //do-while
// int main(){
//     int i=1;
//     do{
//         printf("%d ",i);
//         i++;
//     }while(i<=5);
// }



// #include<stdio.h> //goto
// int main(){
//     int i=1;
//     start:
//     if(i<=5){
//         printf("%d ",i);
//         i++;
//         goto start;
//     }
//     return 0;
// }




// #include<stdio.h> //prime do-while
// int main(){
//     int num, prime = 1, i = 2;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if (num <= 1) {
//         prime = 0;
//     } else {
//         do {
//             if (num % i == 0) {
//                 prime = 0;
//                 break;
//             }
//             i++;
//         } while (i <= num / 2);
//     }
//     if (prime) {
//         printf("%d is a prime number\n", num);
//     } else {
//         printf("%d is not a prime number\n", num);
//     }
//     return 0;
// }



// #include<stdio.h> //odd or even do-while
// int main(){
//     int  num,i=1;
//     printf("enter a number:");
//     scanf("%d",&num);
//     do{
//         if(num%2==0){
//             printf("Even");
//             break;
//         }
//         else{
//             printf("Odd");
//             break;
//         }i++;
//     }while(num);

// }




// #include<stdio.h> //factorial with do while
// int main(){
//     int num,fact=1,i=1;
//     printf("Enter a number:");
//     scanf("%d",&num);
//     do{
//         fact*=i;
//         i++;
//     }while(i<=num);
//     printf("%d",fact);

// }




// #include<stdio.h> //fibonacci series with do-while
// int main(){
//     int num,a=0,b=1,i=1,c=1;
//     printf("Enter a number:");
//     scanf("%d",&num);
//     do{
        
//         printf("%d ",a);
//         a=b;
//         b=c;
//         c=a+b;
//         i++;
//     }while(i<=num);
// }




// #include<stdio.h> //armstromg number
// int main(){
//     int num, temp, power, count = 0, sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     temp = num;

//     // Count the number of digits
//     do {
//         count++;
//         temp /= 10;
//     } while (temp != 0);

//     temp = num;

//     // Check if the number is an Armstrong number
//     do {
//         int div = temp % 10;
//         power = 1;
//         for (int j = 1; j <= count; j++) {
//             power *= div;
//         }
//         sum += power;
//         temp /= 10;
//     } while (temp != 0);

//     if (num == sum) {
//         printf("Armstrong");
//     } else {
//         printf("Not Armstrong");
//     }

//     return 0;
// }




// #include<stdio.h> //square * pattern
// int main(){
//     int num;
//     printf("Enter a number;");
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++){
//         for (int j=1;j<=num;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }




// #include<stdio.h> //right angle triangle * pattern
// int main(){
//     int num;
//     printf("Enter a number;");
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++){
//         for (int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }




// #include<stdio.h> //left angle triangle * pattern
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     for(int i=1; i<=num; i++){
//         for(int j=1; j<=num-i; j++){
//             printf("  ");
//         }
//         for(int k=1; k<=i; k++){
//             printf("* ");
//         }
//         printf("\n");

//     }
//     return 0;
// }




// #include<stdio.h> //pyramid * pattern
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     for(int i=1; i<=num; i++){
//         for(int j=1; j<=num-i; j++){
//             printf(" ");
//         }
//         for(int k=1; k<=2*i-1; k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }




// #include<stdio.h> // sqaure box pattern
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     for(int i=1; i<=num; i++){
//         for(int j=1; j<=num; j++){
//             if(i==1||j==1||i==num||j==num){
//                 printf(" *");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }






// #include<stdio.h> // decrease triangle pattern or inverted right angle triangle
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     for(int i=num; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             printf(" *");

//         }
//         printf("\n");
//     }
//     return 0;
// }






// #include<stdio.h> // decrease triangle pattern or inverted left angle triangle
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     for(int i=1; i<=num; i++){
        
//         for(int k=1;k<=i-1;k++){
//             printf("  ");
//         }
//         for(int j= num; j>=i; j--){
//             printf(" *");

//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>   //check bank balance using functions


// int setAndVerifyPin();
// void displayMenu();
// int depositAmount(int balance);
// int withdrawAmount(int balance);

// int main() {
//     int set_pin, pin, balance = 0, menu;

//     // Set and verify PIN
//     set_pin = setAndVerifyPin();
//     printf("Enter your PIN: ");
//     scanf("%d", &pin);

//     if (set_pin == pin) {
//         do {
//             displayMenu();
//             printf("\nEnter your choice number: ");
//             scanf("%d", &menu);

//             switch (menu) {
//                 case 1:
//                     printf("\nBalance: %d\n", balance);
//                     break;
//                 case 2:
//                     balance = depositAmount(balance);
//                     break;
//                 case 3:
//                     balance = withdrawAmount(balance);
//                     break;
//                 case 4:
//                     printf("\nExiting...\n");
//                     break;
//                 default:
//                     printf("\nInvalid choice. Please try again.\n");
//             }
//         } while (menu != 4);
//     } else {
//         printf("\nIncorrect PIN. Access denied.\n");
//     }

//     return 0;
// }

// // Function to set and verify PIN
// int setAndVerifyPin() {
//     int set_pin;
//     printf("Set your PIN: ");
//     scanf("%d", &set_pin);
//     return set_pin;
// }

// // Function to display the menu
// void displayMenu() {
//     printf("\n1. Check Balance");
//     printf("\n2. Deposit");
//     printf("\n3. Withdraw");
//     printf("\n4. Exit");
// }

// // Function to deposit amount
// int depositAmount(int balance) {
//     int deposit;
//     printf("\nEnter the amount to deposit: ");
//     scanf("%d", &deposit);
//     balance += deposit;
//     printf("\nAmount deposited successfully.\n");
//     return balance;
// }

// // Function to withdraw amount
// int withdrawAmount(int balance) {
//     int withdraw;
//     printf("\nEnter the amount to withdraw: ");
//     scanf("%d", &withdraw);
//     if (balance < withdraw) {
//         printf("\nInsufficient balance.\n");
//     } else {
//         balance -= withdraw;
//         printf("\nAmount withdrawn successfully.\n");
//     }
    
//     return balance;
// }







// int areasqaure();
// int areatriangle();
// int arearectangle();
// void twoD();
// void threeD();
// void square_Menu();
// void triangle_Menu();
// void rectangle_Menu();
// void prism();
// void cone();
// void 



// int main(){
//     float pi=3.14;
//     int dim,shape_type,find;
//     printf("Are you want to Find \n1.2d or 2.3d: ");
//     scanf("%d",&dim);
//     if (dim==1)
//     {
//         do{
//             twoD();
//             printf("Enter your Choice: ");
//             scanf("%d",&shape_type);

//             switch (shape_type)
//             {
//             case 1:
//                 sqaure_Menu();
//                 printf("Enter your Choice: ");
//                 scanf("%d",&find);
//                 break;
//             case 2:
//                 rectangle_Menu();
//                 printf("Enter your Choice: ");
//                 scanf("%d",&find);
//                 break;

//             case 3:
//                 triangle_Menu();
//                 printf("Enter your Choice: ");
//                 scanf("%d",&find);
//                 break;

//             case 4:
//                 break;

//             default:
//                 printf("Invalid Input");
//                 break;
//             }

//         }while(shape_type >=4);
//     }else if (dim==2){
//         do{
//             threeD();
//             printf("Enter your Choice: ");
//             scanf("%d",&shape_type);

//             switch (shape_type)
//             {
//             case 1:
//                 cube_Menu();
//                 printf("Enter your Choice: ");
//                 scanf("%d",&find);
//                 break;
//             case 2:
//                 prism_Menu();
//                 printf("Enter your Choice: ");
//                 scanf("%d",&find);
//                 break;

//             case 3:
//                 cone_Menu();
//                 printf("Enter your Choice: ");
//                 scanf("%d",&find);
//                 break;

//             case 4:
//                 break;

//             default:
//                 printf("Invalid Input");
//                 break;
//             }

//         }while(shape_type >=4);

//     }
    

// }



// void twoD(){
//     printf("\n1.Sqaure \n2.Recangle \nTriangle \n4.Exit ");
// }

// void square_Menu(){
//     printf("\n1.Area \n2.Perimeter \nExit");
// }

// void rectangle_Menu(){
//     printf("\n1.Area \n2.Perimeter \nExit");
// }

// void triangle_Menu(){
//     printf("\n1.Area \n2.Perimeter \nExit");
// }

// void cube_Menu(){
//     printf("\n1.Area \n2.volume \nExit");
// }

// void prism_Menu(){
//     printf("\n1.Area \n2.volume \nExit");
// }

// void cone_Menu(){
//     printf("\n1.Area \n2.volume \nExit");
// }




// #include<stdio.h> //largest and smallest;
// int main(){
//     int n, lar, small;
//     printf("Enter no. of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter values:\n");
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     lar = small = arr[0]; 
//     for(int j = 1; j < n; j++){
//         if(arr[j] > lar){
//             lar = arr[j];
//         }
//         if(arr[j] < small){
//             small = arr[j];
//         }
//     }
//     printf("Largest: %d\n", lar);
//     printf("Smallest: %d\n", small);
//     return 0;
// }



// #include<stdio.h> //linear search
// int main(){
//     int n, target, found = 0;
//     printf("Enter no. of elements: ");
//     scanf("%d", &n);
//     printf("Enter the target number: ");
//     scanf("%d", &target);
//     int arr[n];
//     printf("Enter elements: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for (int j = 0; j < n; j++) {
//         if (target == arr[j]) {
//             printf("Target found at index %d\n", j);
//             found = 1;
//             break;
//         }
//     }
//     if (!found) {
//         printf("Target not found\n");
//     }
//     return 0;
// }




// #include<stdio.h>  //copy array
// int main(){
//     int n;
    
//     printf("Enter no.of elements: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter values :");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int copy[n];
//     for (int j = 0; j < n; j++)
//     {
//         copy[j]=arr[j];
//     }
//     for (int k = 0; k < n; k++)
//     {
//         printf("%d ",copy[k]);
//     }
    
//     return 0;
    
// }




// #include<stdio.h>  //reverse a number of array
// int main(){
//     int size;
//     printf("Enter no.of elements :");
//     scanf("%d", &size);
//     int arr[size];
//     printf("Enter elements : ");
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int rev[size];
//     for (int i = 0; i < size; i++) {
//         rev[i] = arr[size - i - 1];
//     }
//     printf("Reversed array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", rev[i]);
//     }
//     return 0;
// }





// #include<stdio.h> //sum of array
// int main(){
//     int size,sum=0;
//     printf("Enter no.of elements :");
//     scanf("%d", &size);
//     int arr[size];
//     printf("Enter elements : ");
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < size; i++) {
//         sum+=arr[i];
//     }
//     printf("%d ",sum);


// }




// #include<stdio.h> //sum of array
// int main(){
//     int size,avg=0;
//     printf("Enter no.of elements :");
//     scanf("%d", &size);
//     int arr[size];
//     printf("Enter elements : ");
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < size; i++) {
//         avg+=arr[i];
//     }
//     printf("%.2f ",(float)avg/size);


// }






// #include<stdio.h> //bubble sorting
// int main(){
//     int size;
//     printf("Enter no.of elements :");
//     scanf("%d", &size);
//     int arr[size];
//     printf("Enter elements : ");
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(int i = 0; i < size - 1; i++) {
//         for(int j = 0; j < size - i - 1; j++) {
//             if(arr[j] > arr[j + 1]) {
//                 int temp = arr[j];    
//                 arr[j] = arr[j + 1];
//                 arr[j+1] =temp;
//             }
//         }
//     }
//     printf("Sorted array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }




#include<stdio.h> //find unique values
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements are: ");
    for (int i = 0; i < n; i++) {
        int isUnique = 1;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}