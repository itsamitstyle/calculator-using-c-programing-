//making a calculator using c++

//choose your country name ;

#include <iostream>
using namespace std ;
//declear the variable 
int a1 , a2 ;
char ch ;
float ca;

void india ();
void america ();


int main (){

    //define the call 
    //this is the main fubction 
    cout <<"enter the value of calculator of '+' , '-' , '*' , '/' \n ";
    scanf("%c" , &ch);
    //define the integer variable 
    cout <<"enter the value of a1 is ";
    scanf("%d" , &a1 );
    cout <<"enter the value of a2 is ";
    scanf("%d" , &a2 );
    //using the if-else statement 
    if (ch == '+')
    {
        ca = a1+a2 ;
        cout <<"the value of posotive is %f\n "<<ca ;

        for (size_t india = 1; india <=10; india++)
        {
            cout <<"welcome to india \n ";

            
        }
        
        
    }
    else if (ch == '-')
    {
        ca = a1 -a2 ;
        cout <<"the value of negative is %f\n "<<ca ;
    }
    else if (ch == '*')
    {
        ca = a1*a2 ;
        cout <<"the value of multiply is %f\n "<<ca ;
    }
    else if (ch == '/')
    {
        int a ;
        int b ;
        cout <<"enter the value of a is ";
        scanf("%d" , &a );
        cout<<"enter the value of b is ";
        scanf("%d" , &b);
        ca = a/b;
        cout <<"the value of divide is %f \n "<<ca ;

    }

    //choose the country name using if-else statement

  
    

    
    
    
    
    
    
    return 0;

}

void india(){ // the return value is 0 
    cout<<"welcome to india \n ";

}
void america (){ // the return value is 0 
    cout<<"welcome to america \n ";
}