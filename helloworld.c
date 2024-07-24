#include <stdio.h>
#include <string.h>
#include <math.h>

/*void birthday(char name[],int age){
    printf("\nHi you arrrr %s",name);
    printf("\nHi you arrrr %d",age);
    printf("\nHi you arrrr");
    printf("\nHi you arrrr");
}*/

int findmax(int x, int y){
    return (x>y) ? x:y; // ternary operator
}
    /*{
        return x;
    }
    else{
        return y;
    }
}*/
/*double square(double x){
    return x*x;
}*/
int main(){
//one line comment
/*many line comment


\n newline
\t tab
\"bla bla\"
*/
   /* printf("i hate pizza!\n");
    printf("i \nhate \npvvizza! \"bla bla\"\n");
    printf("1\t2\t3\n4\t5\t6\n");
    int x;//decleration int=interger %d
    x = 123;//initialization
    int y = 22;//declaration+ initialization
    float z; //%f
    z = 1.222;
    char name;
    name = 'c'; //single character %c
    char word[] = "bro"; // array of letters %s
    //bool e = false; // %d
    double g = 2.3333333; // for longer floats $lf
    // %d decimal %s string %c character %f float


    printf("hello my name is %s\n",word);
    printf("my age is %d\n",y);
    printf("my gpa is %f\n",z);
    printf("my grade is %c\n",name);*/

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align


   /* float item1 = 3.33;
    float item2 = 3.22;
    float item3 = 4.22;

    printf("Item 1:%8.4f\n",item1);
    printf("Item 2:%8.4f\n",item2);
    printf("Item 3:%-8.4f\n",item3); */

    //constant cannot be changed

   // const float pi = 3.14;
    //printf("pi is %.2f\n",pi);


    // Arithmatic Operators

    // + (Addition)
    // - (Subtraction)
    // * (Multipication)
    // / (Division)
    // % (Modulus)(gives remainder)
    // ++ (Increment)(Increase a variable by 1)
    // -- (Decrement)(Decrease a variable by 1)

   /* int q = 20;
    int w = 3;

    float r = q / (float) w; // convert divisor to float if decimals needed

    q++;
    printf("%f\t%d\n",r,q);
    char naame[20];
    char fname[30];
   
    printf("Your full name?\n");
    fgets(fname, 30, stdin); // fgets function is used for inputs with spaces automatically apply new line after
    fname[strlen(fname)-1]='\0';// this line used for when  new line not needed
    printf("Thank You %s\n",fname);
    printf("What is your name?\n");
    scanf("%s",&naame);
    printf("You are %s\n",naame);*/

   /* double a = sqrt(9);
    double b = pow(9,2); //9^2
    int c = round(9.22); //round out no
    int d = ceil(9.22); //round to upper no
    int e = floor(9.22);// rounf to bottom no
    double f = fabs(-1000);// make negetive no positive
    double g = log(10);
    double h = sin(45);
    double i = cos(60);
    double j = tan(45);*/
    /*const double pi= 3.14;
    double radius;
    double circumference;
    double area;

    printf("Enter radius:\n");
    scanf("%lf",&radius);
    circumference = 2 * pi * radius;
    area = pi * radius * radius;
    printf("Circumference=%lf\nArea=%lf\n",circumference,area);

    if (circumference > 25){
        printf("Its a large circle\n");
    }
    else {
        printf("Its averrage\n");
    }*/
    /*char grade;
    printf("\nenter grade\n");
    scanf("%c",&grade);

    switch(grade){
        case 'ss':
        printf("\nAin humen");
        break;
        case 'a':
        printf("\ngood");
        break;
        case 'b':
        printf("\nmehhh");
        break;
        }  */
    /*char unit;
    float temp;
    printf("\nIs the temperature in (f) or (c)?\n");
    scanf("%c",&unit);
    unit = toupper(unit);

    if (unit == 'C'){
        printf("Enter temp in C\n");
        scanf("%f",&temp);
        printf("The current temp is %.0f",temp);
        printf("%c",unit);
    }
    else if (unit == 'F'){
        printf("Enter temp in F\n");
        scanf("%f",&temp);
        printf("The current temp is %.0f",temp);
        printf("%c",unit);
        

    }
    else{
        printf("Enter valid unit\n");

    }
    */
  /* float temp = 34;
   if(temp >= 0 && temp < 30){ // && reprents 'and'
    printf("Wheather is good\n");
   }
   else if(temp <= 40 || temp >= -10 ){//|| represents "or"
    printf("Wheather is mid\n");
   }
   else {
    printf("Wheather is bad\n");
   }
   //if(!sunny) ! represents not
*/

  /* char name[] = "Bro";
   int age = 20;
    birthday(name, age);
*/
   // double cc = square(3.14);
    //printf("%lf",cc); 
   // int max = findmax(3,4); 
    //printf("%d",max);

    char string1[]="Omira";
    char string2[]="Omira";

   // strlwr(string1);//turn to lower case
   // strupr(string1);//turns to upper case
   // strcat(string1,string2);//attach 2 to end of 1
    //strncat(string1,string2,3);//copies front letters from 2 to 1(attach at end)
   // strcpy(string1,string2);//changes 1 to 2
    //strncpy(string1,string2,2);//copy front of 2 to 1(replace at front)
    //strset(string1,'o');//changes all letter to given one
    //strnset(string1,'o',3);//changes first n letters to set letter
   //strrev(string1);//reverses a strng
    //printf("%s",string1);
   // int result=strlen(string1);//set int to no of letters
   // int result=strcmp(string1,string2);///if no of letters equal get 1
    //int result=strcmpi(string1,string2);string compare all(ignore case)
    //int result=strnicmp(string1,string2);//string compare n charaCTERS(IGNORE CASE)

    //printf("%d",result);

    //for(int i=2 ; i<=10; i+=2){ //loop
       // printf("%d\n",i);

    /*char name[25];

    printf("\nWhats your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    while(strlen(name)==0){
        printf("\nYou did not enter a name!");
        printf("\nWhats your name?: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';


    }     
    printf("Hello %s",name);*/
    
    int number = 0;
    int sum = 0;
    //while loop checks condition first 
    // do while loop check last
    do{
        printf("Enter a # above 0:");
        scanf("%d",&number);
        if(number > 0)
        {
            sum+=number;
        }
    }while(number>0);

    printf("\nSum:%d",sum);

    return 0;
}