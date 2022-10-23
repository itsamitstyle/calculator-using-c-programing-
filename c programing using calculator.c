//making a calculator using c programing language 

#include <stdio.h>
//create a variable 
int a1, a2 ;
char ch ;
float cal;

int main (){
    printf("enter the calcultor value of '+' , '-' , '*' , '/' \n ");
    scanf("%c" , &ch);
    printf("enter the value of a1 is ");
    scanf("%d" , &a1 );
    printf("enter the value of a2 is ");
    scanf("%d " , &a2 );
    //using the if-else statement 

    if (ch =='+')
    {
        cal = a1+a2 ;
        printf("%f\n" , cal );
        printf("the value of posotive value is %f\n" , cal);
        /* code */
    }
    else if (ch =='-')
    {
        cal = a1-a2 ;
        printf("%f\n" , cal );
        printf("the value of negative  value is %f\n" , cal);

        /* code */
    }

    else if (ch == '*')
    {
        cal = a1*a2 ;
        printf("%f\n" , cal );
        printf("the value of multiply  value is %f\n" , cal);
        /* code */
    }

    else if (ch == '/')
    {
        cal = a1/a2 ;
        printf("%f\n" , cal );
        printf("the value of divide  value is %f\n" , cal);

    }

    else{
        printf("this satement if false \n ");
    }
    
    
    
    
    return 0;

}