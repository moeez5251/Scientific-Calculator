#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<math.h>
#include<string>
#define M_PI 3.14159265358979323846 
using namespace std;
float addition( float array[],int value){
float sum=0;
for (int i = value-1; i>=0; i--)
{
    sum=sum+array[i];
}
return sum;
}
float Subtarction( float array[],int value){
float Subtarction=array[0];
for (int i = 1; i<value; i++)
{
    Subtarction=Subtarction-array[i];
}
return Subtarction;
}
float multiplication( float array[],int value){
float product=1;
for (int i = value-1; i>=0; i--)
{
    product=product*array[i];
}
return product;
}
int factorial(int n){
if (n==0)
{
    return 1;
}
else{
    int fact=1;
    for (int i = n; i>0; i--)
    {
        fact=fact*i;
    }
    return fact;
}
}

void binary(int a){
string b=" ";
while (a>0)
{
    b=to_string(a%2)+b;
    a=a/2;
}
cout<<"\n Your Binary value is = "<<b;
}
void Octal(int a){
string b=" ";
while (a>0)
{
    b=to_string(a%8)+b;
    a=a/8;
}
cout<<"\n Your Octal value is = "<<b;
}
void Hexa(int a){
string b=" ";
while (a>0)
{
    if (a%16==10)
    {
        b="A"+b;
    }
    else if (a%16==11)
    {
        b="B"+b;
    }
    
    else if (a%16==12)
    {
        b="C"+b;
    }
    else if (a%16==13)
    {
        b="D"+b;
    }
    else if (a%16==14)
    {
        b="E"+b;            }
    else if (a%16==15)
    {
        b="F"+b;
    }
    else{
        b=to_string(a%16)+b;

    }
    
    a=a/16;
}
cout<<"\n Your Hexa-Decimal value is = "<<b;
}
void Rectangle(double a,double b){
    cout<<"Area of Rectangle is :"<<a*b;
}
void Triangle(double a,double b){

    cout<<"Area of Triangle is :"<<(a*b)/2;
}
void Circle(double r){
    cout<<"Area of Circle is :"<<M_PI*pow(r,2);
}
void Trapezoid(double a,double b,double c){
    double  d=a+b;
    cout<<"Area of Trapezoid is :"<<(d*c)/2;
}
void Ellipse(double a,double b){
        cout<<"Area of Ellipse is :"<<M_PI*a*b;
}
void Pentagon(double a,double b){
    cout<<"\nArea of Pentagon is :"<<(5/2)*a*b;
}
void RegularPentagon(double a){
    cout<<"\nArea of Regular Pentagon is : "<<1.0/4*sqrt(5*(5+2*sqrt(5)))*pow(a,2) ;
}
void RegularHexagon(double a){
    cout<<"\nArea of Regular Hexagon is : "<<(3*sqrt(3)*pow(a,2))/2;
}           
void Regularoctagon(double a){
    cout<<"\nArea of Regular Octagon is : "<<2*(1+sqrt(2)*pow(a,2));
}
void Paralellogram(double a,double b){
    cout<<"\nArea of Paralellogram is : "<<a*b;
}
void Insin(double angle);
void Incos(double angle);
void Intan(double angle);
void Perimeterofcircle(double radius);
void CtoF(double Celsius);
void FtoK(double Fahrenheit);
void FtoC(double Fahrenheit);
void KtoF(double kelvin);
int main(){
    
A1:
    int main_value;
   cout<<"                                        __________________________________"<<endl;
   cout<<"                                       |";
   cout<<setw(35)<<"|"<<endl;
   cout<<"                                       |";
cout<<"     SCIENTIFIC CALCULATOR"<<"        |"<<endl;
   cout<<"                                       |";
   cout<<setw(35)<<"|"<<endl;
   cout<<"                                       |";
   cout<<"__________________________________"<<"|";


   cout<<"\n\n                                        Which function you want to use";
   cout<<"\n\n\n1)Operators                          2)Factorial                        3)Trigonometric Functions";
   cout<<"\n\n4)Base-n Values                      5)Logarithmatic Functions          6)Areas";
   cout<<"\n\n7)Exponential Functions              8)Bytes Coversions                 9)Discount";
   cout<<"\n\n10)Inverse Trigonometric Functions   11)Perimeters                      12)Temperature";
   cout<<"\n\n                                     13)Fractional Value                        ";

    cout<<"\n\n                                    Now Enter value to Continue..";
    cin>>main_value;
    switch (main_value)
B1:
    {
        case 1:{
        char Previous;
        int OP;
         system("cls"); 
         cout<<"\n                                       Welcome to Operators Page";
         cout<<"\n\n                               Kindly Enter value  For Further continue";
         cout<<"\n\n1)Addition(+)                 2) Subtarction(-)";
         cout<<"\n\n3)Multiplication(*)           4)Divide(/)";
         cout<<"\n\n               5)Modulus(%)";
       cout<<"\n   Do You Want to go back to Previous page? YES/NO. TYPE Y/N:";
        cin>>Previous;
        if (Previous=='Y'||Previous=='y')
        {
             system("cls"); 
            goto A1;
        }
        
        cout<<"\nNow Enter value To Continue..";
        cin>>OP;
        switch (OP)
        {
        case 1:{
        char Previous_page1;
        int values1;
         system("cls"); 
        cout<<"Enter number of values :";
        cin>>values1;
        float Values_array1[values1]={};
        for (int i = 0; i <values1; i++)
        {
            cout<<"Enter Value "<<i+1<<":";
            cin>>Values_array1[i];
        }
       float sum= addition(Values_array1,values1);
       cout<<"Your Answer is "<<sum;
       cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page1;
        if (Previous_page1=='Y'||Previous_page1=='y')
        {
             system("cls"); 
            goto B1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;}
        case 2:{
        char Previous_page2;
        int values2;
         system("cls"); 
        cout<<"Enter number of values :";
        cin>>values2;
        float Value_array2[values2]={};
        for (int i = 0; i <values2; i++)
        {
            cout<<"Enter Value "<<i+1<<":";
            cin>>Value_array2[i];
        }
        float Subtarct=Subtarction(Value_array2,values2);
        cout<<"\nYour Result is:"<<Subtarct;
       cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page2;
        if (Previous_page2=='Y'||Previous_page2=='y')
        {
             system("cls"); 
            goto B1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
        break;}
        case 3:{
        char Previous_page3;
        int values3;
         system("cls"); 
        cout<<"Enter number of values :";
        cin>>values3;
        float Value_array3[values3]={};
        for (int i = 0; i <values3; i++)
        {
            cout<<"Enter Value "<<i+1<<":";
            cin>>Value_array3[i];
        }
        float Multiply=multiplication(Value_array3,values3);
        cout<<"\nYour Result is:"<<Multiply;
       cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto B1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
         break;
        }  
        case 4:{           
            char Previous_page3;
       float first,second;
         system("cls"); 
        cout<<"Enter 1st value:";
        cin>>first;
        cout<<"Enter 2nd value:";
        cin>>second;
        if (second==0) 
        {
            cout<<"\nInvalid Input";
            
        }
        else{

        cout<<"Your result is :"<<first/second;
        }
        cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto B1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
         break;
        }  
        case 5:{
            char Previous_page3;
        int first,second;
         system("cls"); 
        cout<<"Enter 1st value:";
        cin>>first;
        cout<<"Enter 2nd value:";
        cin>>second;
        if (second==0)
        {
            cout<<"\nInvalid Input";
        
        }
        else{

        cout<<"Your result is :"<<first%second;
        }
        cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto B1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
         break;
        }  
     default:{
            cin.clear();
        goto B1;
        break;

     }   

    }
    break;
        }
    case 2:{
        int number;
        char Previous_page3;
        system("cls");
         cout<<"\n                                       Welcome to Factorial Page";
        cout<<"\n\n\nEnter number you want to get factorial:";
        cin>>number;
        int fact=factorial(number);
        cout<<"\n\nFactorial of "<<number<<" is "<<fact;
        cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto A1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
         break;
        }

        case 3:{
C1:
            char Previous_page2;
            int switch_value;
            system("cls");
         cout<<"\n                                       Welcome to Trigonometric Functions Page";

         cout<<"\n\nChoose Number from the below ";
         cout<<"\n\n1)sine (sin)                2) cosine (cos)";
         cout<<"\n\n3)tangent (tan)             4) secant (sec)";
         cout<<"\n\n5)cosecant (csc)            6) cotangent (cot)";
         cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page2;
        if (Previous_page2=='Y'||Previous_page2=='y')
        {
             system("cls"); 
            goto A1;
        }
         cout<<"\n\n                               Kindly Choose Option  For Further Continue..";
        cin>>switch_value;
        switch (switch_value)
        {
        case 1:{
            double Angle;
            char Previous_page3;
            system("cls");
            cout<<"Enter Angle in Degree:";
        cin>>Angle;
        Angle=(Angle*M_PI)/180;
        cout<<"Your answer is:"<<sin(Angle);
             cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto C1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 2:{
            double Angle;
            char  Previous_page3;
            system("cls");
            cout<<"Enter Angle in Degree:";
        cin>>Angle;
        Angle=(Angle*M_PI)/180;
        cout<<"Your answer is:"<<cos(Angle);
             cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto C1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 3:{
            double Angle;
            char  Previous_page3;
            system("cls");
            cout<<"Enter Angle in Degree:";
        cin>>Angle;
        if (Angle==90)
        {
        cout<<"\nMATH ERROR";
        }
        else{
        Angle=(Angle*M_PI)/180;
        cout<<"Your answer is :"<<tan(Angle);

        }
             cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto C1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 4:{
            double Angle;
            char  Previous_page3;
            system("cls");
            cout<<"Enter Angle in Degree:";
        cin>>Angle;
        Angle=(Angle*M_PI)/180;
        cout<<"Your answer is:"<<1/cos(Angle);
             cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto C1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 5:{
            double Angle;
            char  Previous_page3;
            system("cls");
            cout<<"Enter Angle in Degree:";
        cin>>Angle;
        Angle=(Angle*M_PI)/180;
        cout<<"Your answer is:"<<1/sin(Angle);
             cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto C1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 6:{
            double Angle;
            char  Previous_page3;
            system("cls");
            cout<<"Enter Angle in Degree:";
        cin>>Angle;
        if (Angle==90)
        {
        cout<<"\nYour answer is:"<<0;
        }
        else{
        Angle=(Angle*M_PI)/180;
        cout<<"Your answer is:"<<1/tan(Angle);

        }
        
             cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto C1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        default:{
            cin.clear();
            goto C1;
        break;


        }
        }

            break;
        }  
        case 4:{
D1:
            char Previous_page2;
            int value;
            system("cls");
            cout<<"\n                                             Welcome to Base-n Values page";
            cout<<"\n Choose Form The Following Options Below";
            cout<<"\n\n1)Binary";
            cout<<"\n\n2)Octal";
            cout<<"\n\n3)Hexa-Decimal";
            cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page2;
        if (Previous_page2=='Y'||Previous_page2=='y')
        {
             system("cls"); 
            goto A1;
        }
         cout<<"\n\n                               Kindly Choose Option  For Further Continue..";
        cin>>value;
        switch (value)
        {
        case 1:{
        int decimal_value;
        char Previous_page3;
        system("cls");
        cout<<"\n Enter Value:";
        cin>>decimal_value;
        binary(decimal_value);

        cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto D1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 2:{
        int decimal_value;
        char Previous_page3;
        system("cls");
        cout<<"\n Enter Value:";
        cin>>decimal_value;
       Octal(decimal_value);

        cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto D1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 3:{
        int decimal_value;
        char Previous_page3;
        system("cls");
        cout<<"\n Enter Value:";
        cin>>decimal_value;
       Hexa(decimal_value);

        cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto D1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        default :{
            cin.clear();
            goto D1;
        break;

        }
        
        }
            break;
        }

        case 5:{
E1:
            int value;
            char Previous_page2;
            system("cls");
            cout<<"\n                                             Welcome to Logarithm Functions page";

            cout<<"\n\nChoose the option from the below:";
            cout<<"\n\n1)Natural Logarithm";
            cout<<"\n\n2)Logarithm to the Base 10";
            cout<<"\n\n3)Logarithm to the Base 2";
             cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page2;
        if (Previous_page2=='Y'||Previous_page2=='y')
        {
             system("cls"); 
            goto A1;
        }
         cout<<"\n\n                               Kindly Choose Option  For Further Continue..";
        cin>>value;
        switch (value)
        {
        case 1:{
            char Previous_page3;
        double value;
            system("cls");
            cout<<"\nEnter value:";
            cin>>value;
            cout<<"Your answer is "<<log(value);
            cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto E1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        
        case 2:{
            char Previous_page3;
        double value;
            system("cls");
            cout<<"\nEnter value:";
            cin>>value;
            cout<<"Your answer is "<<log10(value);
            cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto E1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        
        case 3:{
            char Previous_page3;
        double value;
            system("cls");
            cout<<"\nEnter value:";
            cin>>value;
            cout<<"Your answer is "<<log2(value);
            cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto E1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        
        }
       default :{
            cin.clear();

       goto E1;     
       }
       
        }
            break;
        }
    case 6:{
F1:
        char Previous_page2;
        int value;
        system("cls");
        cout<<"\n                                               Welcome to  Areas Page ";
        cout<<"\n\nKindly choose the option from the below:";
        cout<<"\n\n1)Rectangle";
        cout<<"\n\n2)Square";
        cout<<"\n\n3)Triangle";
        cout<<"\n\n4)Circle";
        cout<<"\n\n5)Trapezoid";
        cout<<"\n\n6)Ellipse";
        cout<<"\n\n7)Pentagon";
        cout<<"\n\n8)Regular Pentagon";
        cout<<"\n\n9)Regular Hexagon";
        cout<<"\n\n10)Regular Octagon";
        cout<<"\n\n11)Paralellogram";
        cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page2;
        if (Previous_page2=='Y'||Previous_page2=='y')
        {
             system("cls"); 
            goto A1;
        }
         cout<<"\n\n                               Kindly Choose Option  For Further Continue..";
        cin>>value;
    switch (value)
    {
    case 1:{
        char Previous_page3;
    double Length,width;
    system("cls");
        cout<<"\nEnter Length:";
        cin>>Length;
        cout<<"Enter Width:";
        cin>>width;
    Rectangle(Length,width);
     cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto F1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
        break;
    }
    case 2:{
        char Previous_page3;
    double side;
    system("cls");
        cout<<"\nEnter side of a Square:";
       cin>>side;
       cout<<"Area of Square is :"<<pow(side,2);
     cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto F1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
        break;
    }
    case 3:{
        char Previous_page3;
    double base,height;
    system("cls");
        cout<<"\nEnter Base:";
       cin>>base;
       cout<<"Enter Height:";
       cin>>height;
       Triangle(base,height);
     cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto F1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
        break;
    }
    case 4:{
        char Previous_page3;
    double Radius;
    system("cls");
       cout<<"Enter Radius:";
       cin>>Radius;
       Circle(Radius);
     cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto F1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
        break;
    }
    case 5:{
        char Previous_page3;
    double base1,base2,height;
    system("cls");
       cout<<"Enter Base 1:";
       cin>>base1;
       cout<<"Enter Base 2:";
       cin>>base2;
       cout<<"Enter Vertical Height:";
       cin>>height;
       Trapezoid(base1,base2,height);
     cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto F1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
        break;
    }
    case 6:{
        char Previous_page3;
    double major,minor;
    system("cls");
       cout<<"Enter Radius of the major axis:";
       cin>>major;
       cout<<"Enter Radius of the minor axis:";
       cin>>minor;
       Ellipse(major,minor);
     cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto F1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
        break;
    }
    case 7:{
        char Previous_page3;
    double side,length;
    system("cls");
    cout<<"Enter Side:";
    cin>>side;
    cout<<"Enter Apothem length:";
    cin>>length;
    Pentagon(side,length);
     cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto F1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
        break;
    }
    case 8:{
        char Previous_page3;
    double side;
    system("cls");
    cout<<"Enter Side:";
    cin>>side;
    RegularPentagon(side);
     cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto F1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
        break;
    }
    case 9:{
        char Previous_page3;
    double side;
    system("cls");
    cout<<"Enter Side:";
    cin>>side;
    RegularHexagon(side);
     cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto F1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
        break;
    }
    case 10:{
        char Previous_page3;
    double side;
    system("cls");
    cout<<"Enter Side:";
    cin>>side;
    Regularoctagon(side);
     cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto F1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
        break;
    }
    case 11:{
        char Previous_page3;
    double base,height;
    system("cls");
    cout<<"\nEnter Base:";
    cin>>base;
    cout<<"\nEnter Height:";
    cin>>height;
    Paralellogram(base,height);
     cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto F1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
        break;
    }
    default:{
            cin.clear();
        goto F1;
        break;

    }
  
    }
    break;
    }
    case 7:{
G1:
    char Previous_page2;
    int value;
        system("cls");
        cout<<"\n                                               Welcome to  Exponential Functions Page ";
        cout<<"\nChoose from the following options below:";
        cout<<"\n1)Square ";
        cout<<"\n2)Square Root ";
        cout<<"\n3)Cube ";
        cout<<"\n4)Cube Root ";
        cout<<"\n5)Add custom Power";
        cout<<"\n6)Add custom Under Root";
         cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page2;
        if (Previous_page2=='Y'||Previous_page2=='y')
        {
             system("cls"); 
            goto A1;
        }
         cout<<"\n\n                               Kindly Choose Option  For Further Continue..";
        cin>>value;
        switch (value)
        {
        case 1:{
            char Previous_page3;
            system("cls");
           double base;
            cout<<"\nEnter Base:";
            cin>>base;
            cout<<"\nSquare of "<<base<<" is :"<<pow(base,2);
             cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto G1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 2:{
            char Previous_page3;
            system("cls");
           double base;
            cout<<"\nEnter Value:";
            cin>>base;
            cout<<"\nSquare Root of "<<base<<" is :"<<pow(base,0.5);
             cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto G1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 3:{
            char Previous_page3;
            system("cls");
            double base;
            cout<<"\nEnter Value:";
            cin>>base;
            cout<<"\nCube of "<<base<<" is :"<<pow(base,3);
             cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto G1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 4:{
            char Previous_page3;
            system("cls");
           double base;
            cout<<"\nEnter Value:";
            cin>>base;
            double power=1.0/3;
            cout<<"\nCube Root of "<<base<<" is :"<<pow(base,power);
             cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto G1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 5:{
            char Previous_page3;
            system("cls");
            double base,exponent;
            cout<<"\nEnter Base:";
            cin>>base;
            cout<<"\nEnter Exponent:";
            cin>>exponent;
            cout<<"\nCube Root of "<<base<<" is :"<<pow(base,exponent);
             cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto G1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        
        case 6:{
            char Previous_page3;
            system("cls");
            double base,exponent;
            cout<<"\nEnter Base:";
            cin>>base;
            cout<<"\nEnter root you want to find:";
            cin>>exponent;
            cout<<"\nCube Root of "<<base<<" is :"<<pow(base,1.0/exponent);
             cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto G1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        
        default:{
            cin.clear();
            goto G1;
        break;

        }
        }
        break;
    }
    case 8:{
H1:
        system("cls");
        cout<<"\n                                               Welcome to  Bytes Conversion Page ";
         char Previous_page2;
    int value;
        cout<<"\n\nChoose from the following options below:";
        cout<<"\n\n1)Kilobytes to Megabytes ";
        cout<<"\n\n2)Kilobytes to Gigabytes ";
        cout<<"\n\n3)Megabytes to Kilobytes";
        cout<<"\n\n4)Megabytes to Gigabytes";
        cout<<"\n\n5)Gigabytes to Kilobytes";
        cout<<"\n\n6)Gigabytes to Megabytes";
        cout<<"\n\n7)Terabytes to Gigabytes";
        cout<<"\n\n8)Terabytes to Megabytes";
        cout<<"\n\n9)Terabytes to Kilobytes";
         cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page2;
        if (Previous_page2=='Y'||Previous_page2=='y')
        {
             system("cls"); 
            goto A1;
        }
         cout<<"\n\n                               Kindly Choose Option  For Further Continue..";
        cin>>value;
        switch (value)
        {
        case 1:{
            char Previous_page3;
            double Bytes;
            system("cls");
            cout<<"\nEnter KBs:";
            cin>>Bytes;
            cout<<"MBs in "<<Bytes<<" KBs are:"<<Bytes/1024;
                   cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto H1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
         
            break;
        }
        case 2:{
            char Previous_page3;
            double Bytes;
            system("cls");
            cout<<"\nEnter KBs:";
            cin>>Bytes;
            cout<<"GBs in "<<Bytes<<" KBs are:"<<Bytes/(pow(1024,2));
                   cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto H1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
         
            break;
        }
        case 3:{
            char Previous_page3;
            double Bytes;
            system("cls");
            cout<<"\nEnter MBs:";
            cin>>Bytes;
            cout<<"KBs in "<<Bytes<<" MBs are:"<<Bytes*1024;
                   cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto H1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
         
            break;
        }
        case 4:{
            char Previous_page3;
            double Bytes;
            system("cls");
            cout<<"\nEnter MBs:";
            cin>>Bytes;
            cout<<"GBs in "<<Bytes<<" MBs are:"<<Bytes/1024;
                   cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto H1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
         
             break;
        }
        case 5:{
            char Previous_page3;
            double Bytes;
            system("cls");
            cout<<"\nEnter GBs:";
            cin>>Bytes;
            cout<<"KBs in "<<Bytes<<" GBs are:"<<Bytes*(pow(1024,2));
                   cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto H1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
         
             break;
        }
        case 6:{
            char Previous_page3;
            double Bytes;
            system("cls");
            cout<<"\nEnter GBs:";
            cin>>Bytes;
            cout<<"MBs in "<<Bytes<<" GBs are:"<<Bytes*(pow(1024,1));
                   cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto H1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
         
             break;
        }
        case 7:{
            char Previous_page3;
            double Bytes;
            system("cls");
            cout<<"\nEnter TBs:";
            cin>>Bytes;
            cout<<"GBs in "<<Bytes<<" TBs are:"<<Bytes*(pow(1024,1));
                   cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto H1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
         
             break;
        }
        case 8:{
            char Previous_page3;
            double Bytes;
            system("cls");
            cout<<"\nEnter TBs:";
            cin>>Bytes;
            cout<<"MBs in "<<Bytes<<" TBs are:"<<Bytes*(pow(1024,2));
                   cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto H1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
         
             break;
        }
        case 9:{
            char Previous_page3;
            double Bytes;
            system("cls");
            cout<<"\nEnter TBs:";
            cin>>Bytes;
            cout<<"MBs in "<<Bytes<<" TBs are:"<<Bytes*(pow(1024,3));   
                   cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto H1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
         
             break;
        }
        
        default:{
            cin.clear();
            goto H1;
        break;

        }
        }
    break;
    }
    case 9:{ 
        char Previous_page3;
         float Percentage,Total;
        system("cls");
        cout<<"\n                                               Welcome to  Discount Page ";
        cout<<"\n\nEnter Discount Percentage:";
        cin>>Percentage;
        cout<<"\nEnter Total:";
        cin>>Total;
        cout<<"\n"<<Percentage<<"% of "<<Total<<" is :"<<(Percentage*Total)/100;
         cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto A1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
        break;
    }
    case 10:{
I1:
        char Previous_page2;
        int value;
        system("cls");
        cout<<"\n                                               Welcome to  Inverse Trigonometric Function Page ";
        cout<<"\n\nChoose from the following options below:";
        cout<<"\n\n1)sin-1";
        cout<<"\n\n2)cos-1";
        cout<<"\n\n3)tan-1";
         cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page2;
        if (Previous_page2=='Y'||Previous_page2=='y')
        {
             system("cls"); 
            goto A1;
        }
         cout<<"\n\n                               Kindly Choose Option  For Further Continue..";
        cin>>value;
        switch (value)
        {
        case 1:{
            char Previous_page3;
            double angle;
            system("cls");
            cout<<"Enter angle in Radian:";
            cin>>angle;
            if (angle<=1)
            {
        Insin(angle);
            }
            else{
                cout<<"\nMATH ERROR";
            }
                cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto I1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            
            break;
        }
        
        case 2:{
            char Previous_page3;
            double angle;
            system("cls");
            cout<<"Enter angle in Radian:";
            cin>>angle;
            if (angle<=1)
            {
        Incos(angle);
            }
            else{
                cout<<"\nMATH ERROR";
            }
                cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto I1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            
            break;
        }
        
        case 3:{
            char Previous_page3;
             double angle;
            system("cls");
            cout<<"Enter angle in Radian:";
            cin>>angle;
            
          Intan(angle);
            
            
                cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto I1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            
            break;
        }
    
        default:{
            cin.clear();
            goto I1;
        break;

        }
        }
    }
    case 11:{
J1:
        char Previous_page2;
        int value;
        system("cls");
        cout<<"\n                                               Welcome to  Perimeters Page ";
        cout<<"\n\nChoose from the following options below:";
        cout<<"\n\n1)Circle";
        cout<<"\n\n2)Triangle";
        cout<<"\n\n3)Square";
        cout<<"\n\n4)Rectangle";
        cout<<"\n\n5)Paralellogram";
        cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page2;
           if (Previous_page2=='Y'||Previous_page2=='y')
        {
             system("cls"); 
            goto A1;
        }
        cout<<"\n\n                               Kindly Choose Option  For Further Continue..";
        cin>>value;
        switch (value)
        {
        case 1:{
            char Previous_page3;
            double radius;
            system("cls");
            cout<<"\nEnter Radius:";
            cin>>radius;
            Perimeterofcircle(radius);
             cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto J1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 2:{
            char Previous_page3;
            double side1,side2,side3;
            system("cls");
            cout<<"\nEnter 1st side Length:";
            cin>>side1;
            cout<<"\nEnter 2nd side Length:";
            cin>>side2;
            cout<<"\nEnter 3rd side Length:";
            cin>>side3;
            cout<<"\nPerimeter of Triangle is:"<<side1+side2+side3;
             cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto J1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 3:{
            char Previous_page3;
            double side;
            system("cls");
            cout<<"\nEnter Length of side :";
            cin>>side;
            
            cout<<"\nPerimeter of Square is:"<<4*side;
             cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto J1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 4:{
            char Previous_page3;
            double Length,width;
            system("cls");
            cout<<"\nEnter Length :";
            cin>>Length;
            cout<<"\nEnter Width :";
            cin>>width;
            cout<<"\nPerimeter of Rectangle is:"<<2*(Length+width);
             cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto J1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 5:{
            char Previous_page3;
            double side,base;
            system("cls");
            cout<<"\nEnter side :";
            cin>>side;
            cout<<"\nEnter Base :";
            cin>>base;
            cout<<"\nPerimeter of Paralellogram is:"<<2*(side+base);
             cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto J1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        
        default:{
            cin.clear();
            goto J1;
        break;
        }
        }
        break;

    }
    case 12:{
K1:
        char Previous_page2;
        int value;
        system("cls");
        cout<<"\n                                         Welcome to  Temperature Conversion Page ";
        cout<<"\n\nChoose from the following options below:";
        cout<<"\n\n1)Celsius to Fahrenheit";
        cout<<"\n\n2)Celsius to Kelvin";
        cout<<"\n\n3)Fahrenheit to Kelvin";
        cout<<"\n\n4)Fahrenheit to Celsius";
        cout<<"\n\n5)Kelvin to Celsius";
        cout<<"\n\n6)Kelvin to Fahrenheit";
         cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page2;
        if (Previous_page2=='Y'||Previous_page2=='y')
        {
             system("cls"); 
            goto A1;
        }
         cout<<"\n\n                               Kindly Choose Option  For Further Continue..";
        cin>>value;
        switch (value)
        {
        case 1:{
            char Previous_page3;
            double Celsius;
            system("cls");
            cout<<"Enter Temperature in Celsius:";
            cin>>Celsius;
            CtoF(Celsius);
            cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto K1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 2:{
            char Previous_page3;
            double Celsius;
            system("cls");
            cout<<"Enter Temperature in Celsius:";
            cin>>Celsius;
           cout<<"\nTemperature in Kelvin is:"<<Celsius + 273.15;
            cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto K1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        
        case 3:{
            char Previous_page3;
            double Fahrenheit;
            system("cls");
            cout<<"Enter Temperature in Fahrenheit:";
            cin>>Fahrenheit;
            FtoK(Fahrenheit);
            cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto K1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 4:{
            char Previous_page3;
            double Fahrenheit;
            system("cls");
            cout<<"Enter Temperature in Fahrenheit:";
            cin>>Fahrenheit;
            FtoC(Fahrenheit);
            cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto K1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 5:{
            char Previous_page3;
            double kelvin;
            system("cls");
            cout<<"Enter Temperature in Kelvin:";
            cin>>kelvin;
           cout<<"\nTemperature in Celsius is:"<<kelvin - 273.15;
          
            cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto K1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 6:{
            char Previous_page3;
            double kelvin;
            system("cls");
            cout<<"Enter Temperature in Kelvin:";
            cin>>kelvin;
            KtoF(kelvin);
            cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto K1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        
        default:{
            cin.clear();
              goto K1;
        break;

        }
        }
        break;
    }
    case 13:{
L1:
        char Previous_page2;
        int value;
        system("cls");
        cout<<"\n                                         Welcome to Fractional Values Page ";
        cout<<"\nChoose  the option from below :";
        cout<<"\n\n1)Addition";
        cout<<"\n\n2)Subtraction";
        cout<<"\n\n3)Multiplication";
        cout<<"\n\n4)Division";
        cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page2;
           if (Previous_page2=='Y'||Previous_page2=='y')
        {
             system("cls"); 
            goto A1;
        }
        cout<<"\n\n                               Kindly Choose Option  For Further Continue..";
        cin>>value;
        switch (value)
        {
        case 1:{
            char Previous_page3;
            system("cls");
            int Fractions;
             int sumNum = 0, sumDenom = 1;
                cout<<"\nEnter Number of Fractions:";
        cin>>Fractions;
        float numerator[Fractions];
        float denominator[Fractions];
        for (int i = 0; i <Fractions; i++)
        {   
            cout<<"\nEnter Fraction " <<i+1<< " Numerator:" ;
            cin>>numerator[i];
            cout<<"\nEnter Fraction " <<i+1<< " Denominator:";
            cin>>denominator[i];
        }
        for (int i = 0; i <Fractions; i++)
       {
        if (denominator[i]==0)
        {
            cout<<"\nMATH ERROR.. Denominator can not be 0";
           goto OO1;
        }
        
       }
       
       
        
        for (int i = 0; i <Fractions; i++)
        {
            sumNum = sumNum * denominator[i] + numerator[i] * sumDenom;
    sumDenom = sumDenom * denominator[i];
        }
        cout<<"\nYour Answer is :";
        cout<<"\n\nBefore Dedcution :"<<sumNum<<"/"<<sumDenom<<endl;
        for (int i = sumNum; i>1; i--)
        {
        if (sumNum%i==0&&sumDenom%i==0)
        {
            cout<<"\n\nAfter Dedcution :"<<sumNum/i;
            cout<<"/";
            cout<<sumDenom/i;
            cout<<"\n=";
            float s=sumNum/i;
            float d=sumDenom/i;
            cout<<(s)/(d);
            break;
        }
        
        }
        OO1:
        cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto L1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
            break;
        }
        case 2:{
            char Previous_page3;
            system("cls");
            int Fractions;
             int sumNum , sumDenom;
                cout<<"\nEnter Number of Fractions:";
        cin>>Fractions;
       float numerator[Fractions];
        float denominator[Fractions];
        for (int i = 0; i <Fractions; i++)
        {
            cout<<"\nEnter Fraction " <<i+1<< " Numerator:" ;
            cin>>numerator[i];
            cout<<"\nEnter Fraction " <<i+1<< " Denominator:";
            cin>>denominator[i];
        }
       for (int i = 0; i <Fractions; i++)
       {
        if (denominator[i]==0)
        {
            cout<<"\nMATH ERROR.. Denominator can not be 0";
            goto P1;
        }
        
       }
      sumNum = numerator[0];
    sumDenom = denominator[0];
        
        for (int i = 1; i <Fractions; i++)
        {
             sumNum = (sumNum * denominator[i]) - (numerator[i] * sumDenom);
        sumDenom = sumDenom * denominator[i];
        }
        cout<<"\nYour Answer is :";
        cout<<"\n\nBefore Dedcution :"<<sumNum<<"/"<<sumDenom<<endl;

        
            for (int i = sumDenom; i>1; i--)
        {
        if (sumNum%i==0&&sumDenom%i==0)
        {
            cout<<"\n\nAfter Deduction :"<<sumNum/i;
            cout<<"/";
            cout<<sumDenom/i;
             cout<<"\n=";
            float s=sumNum/i;
            float d=sumDenom/i;
            cout<<(s)/(d);
            break;
        }
        }
        P1:
        cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto L1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
        
            break;
        }
        case 3:{
            char Previous_page3;
            system("cls");
            int Fractions;
             int sumNum = 0, sumDenom = 1;
                cout<<"\nEnter Number of Fractions:";
        cin>>Fractions;
       float numerator[Fractions];
        float denominator[Fractions];
        for (int i = 0; i <Fractions; i++)
        {
            cout<<"\nEnter Fraction " <<i+1<< " Numerator:" ;
            cin>>numerator[i];
            cout<<"\nEnter Fraction " <<i+1<< " Denominator:";
            cin>>denominator[i];
        }
       int numproduct=1;
       int denomproduct=1;
       for (int i = 0; i <Fractions; i++)
       {
        if (denominator[i]==0)
        {
            cout<<"\nMATH ERROR.. Denominator can not be 0";
            goto M1;
        }
        
       }
        for (int i = 0; i <Fractions; i++)
        {
            numproduct=numproduct*numerator[i];
            denomproduct=denomproduct*denominator[i];
        }
      
                cout<<"\n\nBefore Dedcution :"<<numproduct<<"/"<<denomproduct<<" "<<endl;

        for (int i =denomproduct; i>1; i--)
        {
            if (numproduct%i==0&&denomproduct%i==0)
            {
                cout<<"\n\nAfter Dedcution :"<<numproduct/i<<"/"<<denomproduct/i<<endl;
                 cout<<"\n=";
                goto M1;
            }
            
        }
        
    M1:  
        cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto L1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
        
            break;
        }
        case 4:{
            char Previous_page3;
            system("cls");
            int Fractions;
             int sumNum = 0, sumDenom = 1;
                cout<<"\nEnter Number of Fractions:";
        cin>>Fractions;
      float  numerator[Fractions];
        float denominator[Fractions];
        for (int i = 0; i <Fractions; i++)
        {
            cout<<"\nEnter Fraction " <<i+1<< " Numerator:" ;
            cin>>numerator[i];
            cout<<"\nEnter Fraction " <<i+1<< " Denominator:";
            cin>>denominator[i];
        }
           int numproduct=1;
       int denomproduct=1;
       for (int i = 0; i <Fractions; i++)
       {
        if (denominator[i]==0)
        {
            cout<<"\nMATH ERROR.. Denominator can not be 0";
            goto N1;
        }}
        
       for (int i = 1; i <Fractions; i++)
       {
        int temp=numerator[i];
        numerator[i]=denominator[i];
        denominator[i]=temp;
       }
    
        for (int i = 0; i <Fractions; i++)
        {
            numproduct=numproduct*numerator[i];
            denomproduct=denomproduct*denominator[i];
        }
                cout<<"\n\nBefore Deduction :"<<numproduct<<"/"<<denomproduct<<endl;

        for (int i =denomproduct; i>1; i--)
        {
            if (numproduct%i==0&&denomproduct%i==0)
            {
                cout<<"\n\nAfter Deduction :"<<numproduct/i<<"/"<<denomproduct/i<<endl;
                goto N1;
            }
            
        }
N1:  
       

        
        cout<<"\n\nDo You Want to go back to Previous page? YES/NO. TYPE Y/N:";
       cin>>Previous_page3;
        if (Previous_page3=='Y'||Previous_page3=='y')
        {
             system("cls"); 
            goto L1;
        }
        else{
            cout<<"\n\nTHANKS FOR USING CALCULATOR";
            cout<<"\nGood Bye:)";
            exit(0);
        }
        
            break;
        }
        
        default:{
            cin.clear();
            goto L1;
        break;
            
        }
        }

        
        
        break;
    }
    default :{
            cin.clear();
        system("cls");
        goto A1;
        
        break;
    }
    }
    return(0);
}

void Insin(double angle){
    
    cout<<"\n\nAnswer is:"<<asin(angle)*(180/M_PI)<<" degree";
}
void Incos(double angle){
    
    cout<<"\n\nAnswer is:"<<acos(angle)*(180/M_PI)<<" degree";
}
void Intan(double angle){
    
    cout<<"\n\nAnswer is:"<<atan(angle)*(180/M_PI)<<" degree";
}
void Perimeterofcircle(double radius){
    cout<<"\nCircumference of Circle is:"<<2*M_PI*radius;
}
void CtoF(double Celsius){
    cout<<"\nTemperature in Fahrenheit is :"<<(Celsius*(9.0/5.0))+32;
}
void FtoK(double Fahrenheit){
    cout<<"\nTemperature in Kelvin is :"<<(Fahrenheit-32)*(5.0/9.0)+273.15;
}
void FtoC(double Fahrenheit){
    cout<<"\nTemperature in Kelvin is :"<<(Fahrenheit-32)*(5.0/9.0);
}
void KtoF(double kelvin){
    cout<<"\nTemperature in Fahrenheit is :"<<(kelvin-273.15)*(9.0/5.0)+32;
}
