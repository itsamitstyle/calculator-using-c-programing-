//making a 20 country name and choose currency 
//and convet the currency from from one country to another country ;

#include<iostream>
using namespace std ;
//function prototype 
//group of two country 
void india ();
void america ();
//group of two country 
void china ();
void japan ();
//group of two country 
void south_koria ();
void japa ();
//group of two country 
void indian ();
void pakistan();
//group of two country name 
void american ();
void pakista ();
//group of two counry name 
void africa ();
void japanies ();


int main (){
    //function call 
    india();
    america();
    china();
    japan();
    south_koria();
    japa();
    indian();
    pakistan();
    american();
    pakista();
    africa();
    japanies();

    char char1= 'ch';
    
    cout<<"enter the country name india for 'i' , america for 'a' , china for 'c' , japan for 'j ' , south_koria for 's ' , japa for 'j ' , indian for 'i' , pakiastan for 'p' ,ameriaan for 'a' , pakista for 'p' , africa for 'a '  , japanies for 'j' \n  ";
    scanf("%c" , &char1);
    if (char1 == 'a')
    {
        cout <<"welcome to india \n ";
        //convert the currency indian rupees to american rupees 
        int rupees ;
        cout <<"enter the value of rupees is ";
        scanf ("%d" , &rupees);
        float dollar ;
        dollar = 0.012*rupees;
        cout <<"the value  of indian rupees to dollar is %f \n "<<dollar ;


    }
    if (char1 == 'b')
    {
        cout <<"welcome to america \n ";
        //convert the currency dollar to rupees 
        float dollar ;
        cout <<"enter the value of dollar %f\n";
        scanf("%f " , &dollar);
        float rupees ;
        rupees = 82.54 * dollar;
        cout <<"the value of dolllar to indian rupees is %f\n "<<rupees;

    }
    if (char1 == 'c')
    {
        cout <<"welcome to china \n ";
        //convert the currency china to japanies currency 
        float yan ;
        cout <<"enter the value of yan is ";
        scanf("%f" , &yan);
        float japanies ;
        japanies = 20.39*yan;
        cout <<"convert the currency of chinies yan to japanies currency is %f\n "<<japanies;
    }
    if (char1 =='d')
    {
        cout<<"welcome to japan \n ";

        //convert the japanies currency to chinies currency
        float japanies ;
        cout <<"enetr the value of japanies is ";
        scanf("%f" , &japanies);
        float yan ;
        yan = 0.049*japanies;
        cout <<"the convert value of japanies currency to chinies currency is %f\n "<<yan;


    }
    if (char1 == 'e')
    {
        cout <<"welcome to south koria \n ";
        //convert the currency southkorian to japanies 
        float won ;
        cout <<"enter the value of won is ";
        scanf("%f" , &won);
        float japanies ;
        japanies = 0.10*won ;
        cout <<"the currency convet southkorian to japanies is %f\n"<<japanies;
    }
    if (char1 == 'f')
    {
        cout <<"welcome to japa \n";
        float japanies ;
        cout <<"enetr the value of japanies currency ";
        scanf("%f" , &japanies);
        float won ;
        won = 9.68 * japanies;
        cout <<"the value of won is %f\n "<<won ;


    }
    if (char1 == 'g')
    {
        cout <<"welcome to indian \n ";
        //convert the indian currenct to oakistani currency 
        float rupees ;
        cout <<"enter the value of rupees ";
        scanf("%f" , &rupees);
        float pak ;
        pak = 2.68 * rupees ;
        cout <<"convert the value of indian currency to pak currency %f\n "<<pak;


    }
    if (char1 == 'h')
    {
        cout <<"welcome to pakistan \n ";
        //convert the currency of indian currency to pak 
        float pak ;
        cout <<"enter the value %f\n ";
        scanf("%f",  &pak);
        float rupees ;
        rupees = 0.38*pak;
        cout <<"convert the value of pak currency to indian currency %f\n"<<rupees;
    }
    if (char1 == 'i')
    {
        cout <<"welcome to africa \n ";
        //convert the southafrica to japan 
        float south ;
        cout <<"enter the value of south is ";
        scanf ("%f" , &south);
        float japan ;
        japan = 8.15* south ;
        cout <<"convert the south_africa  to japan %f \n "<<japan ;

    }

    if (char1 == 'j')
    {
        cout <<"welcome to japanes \n ";
        //convert the currency japanies to southafrica ;
        float japan ;
        cout <<"enter the value of japan ";
        scanf("%f" , &japan);
        float south;
        south = 8.15 * japan ;
        cout <<"convert the value of japan to southafrica is %f\n "<<south;
        
        }
    
    return 0;


}
//function dectionary 
void india (){
    cout <<"welome to india \n ";
}
void america (){
    cout <<"welcome to america \n ";
}
void china(){
    cout <<"welcome to china \n";
}
void japan(){
    cout <<"welome to japan \n";
}
void south_koria(){
    cout <<"welcome to south_koria\n ";
}
void japa(){
    cout <<"welcome to japan \n ";

}
void indian (){
    cout <<"welcome to india \n ";
}
void pakistan(){
    cout <<"welcome to paistan \n ";
}
void american (){
    cout <<"welcome to america \n";
}
void pakista(){
    cout <<"welcome to pakistan \n";
}
void africa (){
    cout <<"welome to africa \n";
}
void japanies (){
    cout <<"welcome to japan \n ";
}
