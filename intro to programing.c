#include <stdio.h>
void main(){

int num1, num2, sum, difference, product, quotient, remainder;
num1=5, num2=6;
sum=num1+num2;
difference= num1-num2;
quotient= num1*num2;
remainder= num1%num2;
printf("sum=%d",sum);
printf("difference= %d",difference);
printf("product= %d",product);
printf("quotient= %d",quotient);
printf("remainder= %d",remainder);

#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Arithmetic operators -used for performing mathematical calculations (+,-,*,/,%)
    int num1 = 10,num2 = 5, sum,multiplication,difference,division,modulus;
    sum = num1 + num2;
    difference = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;
    modulus = num1 % num2;
    printf("The sum is: %d\n",sum);
    printf("The difference is: %d\n",difference);
    printf("The product is: %d\n",multiplication);
    printf("The division is: %d\n",division);
    printf("The modulus is: %d",modulus);




    //Increment and decrement operators - decrease / increase the value of a variable by 1(++,--)
    int num3 = 5;
    printf("Initial value of num 3 is : %d\n",num3);
    num3++;
    printf("New value of num 3 after incrementing is : %d\n",num3);
    num3--;
    printf("Final value of num 3 after decrementing is : %d\n",num3);



    //Assignment Operators - assigns values to a variable or a constant (=,+=,-=,*=,/=,%=)
    int num4 = 12;
    printf("Initial value of num 3 is : %d\n",num4);
    num4 += 3;
    printf("New value of num 3 after assignment is : %d\n\n",num4);
    num4 = 12;
    printf("Initial value of num 3 is : %d\n",num4);
    num4 -= 3;
    printf("Final value of num 3 after decrementing is : %d\n\n",num4);
    num4 = 12;
    printf("Initial value of num 3 is : %d\n",num4);
    num4 *= 3;
    printf("New value of num 3 after assignment is : %d\n\n",num4);
    num4 = 12;
    printf("Initial value of num 3 is : %d\n",num4);
    num4 /= 3;
    printf("New value of num 3 after assignment is : %d\n\n",num4);
    num4 = 12;
    printf("Initial value of num 3 is : %d\n",num4);
    num4 %= 3;
    printf("New value of num 3 after assignment is : %d\n\n",num4);


    //Relational Operators- used to compare 2 values(returns 1 if true and 0 if false(bool)(==,!=,>,<,>=,<=) they are mostly used when writing conditional statements
     int num5 = 6;
     int num6 = 7;
     printf("num5 is equal to num6 :%d\n\n", num5==num6);
    //Logical Operators - combines multiple conditions(&&,||,)
    //introduce selection control structures to demonstrate this
    //if statement,it checks if a condition is true.Only executes if the condition is true.
    int age = 20;
    if(age > 18){
        printf("This is an adult");
    }
     if(age < 18){
        printf("This is a child");
    }


    //Bitwise Operators -used to compare values in the binary level


}

return 0;
}

