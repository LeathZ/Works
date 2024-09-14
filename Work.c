#include<stdio.h>
#include<math.h>
int main()
{   
    //1)Area of Triangle
    // int l,w;
    // printf("Enter Length of triangle:");
    // scanf("%d",&l);
    // printf("Enter Width of triangle:");
    // scanf("%d",&w);
    // printf("Area=%d",l*w);

    //2)Celsius To Farenheit
    // int c,f;
    // printf("Enter Tempertaure in celsius:");
    // scanf("%d",&c);
    // f=(c*9/5)+32;
    // printf("Temeprature in farenheit is:%d",f);
    // return 0;

    //3)Simple Interest
    // int p,t,r,SI;
    // printf("Enter Principal,Time and Rate:");
    // scanf("%d%d%d",&p,&t,&r);
    // SI=p*t*r/100;
    // printf("Simple Interest=%d",SI);

    //4)Area of Circle
    // int ra;
    // float A;
    // float P=3.14159;
    // printf("Enter radius:");
    // scanf("%d",&ra);
    // A=ra*ra*P;
    // printf("Area=%f",A);

    //5)Total,Average,Percetnage
    // int a,b,c,d,e,T,A,P;
    // printf("Enter the marks of subjects:");
    // scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    // T=a+b+c+d+e;
    // A=T/5;
    // P=100*T/500;
    // printf("Total marks obtained=%d\n",T);
    // printf("Average marks:%d\n",A);
    // printf("Percentage=%d",P);

    //6)Permieter of rectangle
    // int l,b,P;
    // printf("Enter length and breadth:");
    // scanf("%d%d",&l,&b);
    // P=2*(l+b);
    // printf("Perimeter=",P);

    //7)Volume of cylinder
    // float r,h,V;
    // float P=3.1415;
    // printf("Enter radius and height:");
    // scanf("%f%f",&r,&h);
    // V=r*r*h*P;
    // printf("Volume=%f",V);

    //8)Compound interest
    // int p,t;
    // float CI,r;
    // printf("Enter Principal,Time and Rate:");
    // scanf("%d%d%f",&p,&t,&r);
    // CI=p*pow((1+r/100),t)-p;
    // printf("Compound Interest:%f",CI)

    // 9)Voting Eligibility
    // int age;
    // printf("Enter age:");
    // scanf("%d",&age);
    // if(age>=18)
    // {
    //     printf("You can vote.");
    // }
    // else
    // {
    //     printf("You cant vote.");
    // }

    //10)Vowel
    // char a;
    // printf("Enter a letter:");
    // scanf("%c",&a);
    // if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
    //     printf("Letter is vowel");
    // }
    // else
    // {
    //     printf("Letter is not vowel");
    // }

    //11)Leap year
    // int a;
    // printf("Enter any year.");
    // scanf("%d",&a);
    // if(a%4==0)
    // {
    //     printf("It is a leap year.");
    // }
    // else
    // {
    //     printf("Not a leap year.");
    // }

    //12)Weight Status
    // float h,w;
    // printf("Enter your height and weight.");
    // scanf("%f%f",&h,&w);
    // float bmi = (w/(h*h));
    // if(bmi<18.5){
    //     printf("Underweight.");
    // }
    // else if(bmi>=18.5 && bmi<=24.9){
    //     printf("Normal.");
    // }
    // else if(bmi>=25 && bmi<=29.9){
    //     printf("Overweight.");
    // }
    // else if(bmi>30){
    //     printf("Obese.");
    // }

    //13)Tax
    // int a;
    // printf("Enter your annual salary.");
    // scanf("%d",&a);
    // if(a<=10000){
    //     printf("No tax.");
    // }
    // else if(a>=10001 && a<50000){
    //     printf("10 percent tax.");
    // }
    // else if(a>=50001 && a<100000){
    //     printf("20 percent tax.");
    // }
    // else if(a>100000){
    //     printf("30 percent tax.");
    // }

    //14)Discount
    // int a;
    // float t;
    // printf("Enter the total number of items bought and the total marked price for the items bought: ");
    // scanf("%d%f", &a, &t);
    // float d = 0.0;
    // if (a >= 1 && a <= 10) {
    //     d = (5.0 / 100) * t;
    // } else if (a >= 11 && a <= 50) {
    //     d = (10.0 / 100) * t;
    // } else if (a > 50) {
    //     d = (15.0 / 100) * t;
    // }
    // printf("The discounted amount is %f.\n", d);

    //15)Rent a car
    // int a;
    // char b;
    // printf("Enter your age.");
    // scanf("%d",&a);
    // printf("Do you have a driving license [Y/N].");
    // scanf(" %c",&b);
    // if(a>=21 && b=='Y'){
    //     printf("you can rent a car.");
    // }
    // else{
    //     printf("You can't rent a car.");
    // }

    //16) Positive, Negative, or Zero
    // int a;
    // printf("Enter a number:");
    // scanf("%d",&a);
    // if(a>=0){    
    // if(a==0)
    // {
    //     printf("Zero.");
    // }
    // else{
    //     printf("Positive Number.");
    // }
    // }
    // else{
    //     printf("Negative number");
    // }

    //17)Oldest
    // int a,b,c;
    // printf("Enter age of any 3 people.",a,b,c);
    // scanf("%d%d%d",&a,&b,&c);
    // if(a>b && a>c){
    //     printf ("Person 1 is oldest.");
    // }
    // else if(b>a && b>c){
    //     printf("Person 2 is oldest.");
    // }
    // else{
    //     printf("Person 3 is oldest.");
    // }

    //18)Bill
    // int a;
    // printf("enter the total number of units: \n");
    // scanf("%d",&a);
    // if(a<=100){
    //     int am = a * 5;
    //     printf("Your bill amount is %d.",am);
    // }
    // else if(a>100 && a<=200){
    //     int am = a * 10;
    //     printf("Your bill amouont is %d.",am);
    // }
    // else if(a>200){
    //     int am = a * 15;
    //     printf("Your bill amount is %d.",am);
    // }

    //19)Banking aplication
    // int a;
    // int balance = 10000;
    // printf("Welcome to ABC bank. \nChoose option: (1-3).\n1. Deposit.\n2. Withdraw. \n3. Check Balance.\n");
    // scanf("%d",&a);
    // if(a == 1){
    //     int d;
    //     printf("Enter amount.");
    //     scanf("%d",&d);
    //     if(d>0){
    //     balance += d;
    //     printf("Your new balance is %d.",balance);
    //     }
    //     else{
    //         printf("Enter valid amount.");
    //     }
    // }
    // else if(a == 2){
    //     int w;
    //     printf("Enter amount.");
    //     scanf("%d",&w);
    //     if(w<=balance){
    //         printf("Amount has been withdrawn.\n");
    //         balance -= w;
    //         printf("Your new balance is %d.",balance);
    //     }
    //     else if(w>balance){
    //         printf("Invalid.");
    //     }
    // }
    // else if(a == 3){
    //     printf("Your current balance is %d.",balance);
    // }
    // else{
    //     printf("Please enter a valid number.");
    // }
}

