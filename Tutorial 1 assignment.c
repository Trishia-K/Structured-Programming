// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
//1.Calculating age
    int yearofbirth;
    int currentyear=2024;
    int age;
    printf("Enter your year of birth:");
    scanf("%d", &yearofbirth);
    age= currentyear-yearofbirth;
    printf("You are %d years old \n",age);
//2.Finding the sum and product
    int A;
    int B;
    int Sum;
    int Product;
    printf("Enter number A: ");
    scanf("%d", &A);
    printf("Enter number B: ");
    scanf("%d", &B);
    Sum= A+B;
    Product= A*B;
    printf("Sum of these numbers is %d",Sum); 
    printf(" and the product is %d \n",Product );
//3.Finding square of the number
    int Value;
    int Square;
    printf("Enter a Value>> ");
    scanf("%d",&Value);
    printf("Number is %d \n", Value);
    Square= Value*Value;
    printf("Its square is %d",Square);
//4.Reads two numbers then prints the sum and product
    int numberA;
    int numberB;
    int Sum;
    int Product;
    printf("Enter number A>>");
    scanf("%d",&numberA);
    printf("Enter number B>>");
    scanf("%d",&numberB);
    Sum=numberA+numberB;
    printf("Sum of %d",numberA);
    printf(" and %d",numberB);
    printf(" is %d", Sum);
    Product=numberA*numberB;
    printf("The product of %d",numberA);
    printf(" and %d",numberB);
    printf(" is %d",Product);
//5. Reads length and breadth to print area and perimeter
    int Length;
    int Breadth;
    int Area;
    int Perimeter;
    printf("Enter Length>> ");
    scanf("%d",&Length);
    printf("Enter Breadth>> ");
    scanf("%d",&Breadth);
    Perimeter=(Length+Breadth)*2;
    printf("Perimeter of rectangle= %d\n",Perimeter);
    Area=Length*Breadth;
    printf("Area of rectangle= %d\n",Area);
//6.Converts from degrees fahrenheit to degrees celcius
    float Celciusvalue;
    float Fahrenheitvalue;
    printf("Enter Celcius value>> ");
    scanf("%f",&Celciusvalue);
    Fahrenheitvalue=(1.8*Celciusvalue)+32;
    printf("Fahrenheit value is %f\n", Fahrenheitvalue);
    printf("Enter Celcius value>> ");
    scanf("%f",&Celciusvalue);
    Fahrenheitvalue=(1.8*Celciusvalue)+32;
    printf("Fahrenheit value is %f", Fahrenheitvalue);
//7.Reads the radius then prints diameter, circumference and area
    float Radius;
    float Diameter;
    float Circumference;
    float Area;
    printf("Enter the Radius>> ");
    scanf("%f",&Radius);
    Diameter=Radius*2;
    printf("Diameter=%f\n",Diameter);
    Area=3.14159*(Radius*Radius);
    printf("Area=%f\n",Area);
    Circumference=3.14159*Diameter;
    printf("Circumference=%f\n",Circumference);
//8. Reads base and height of a triangle and calculates area
    float Base,Height,Area;
    printf("Enter Height>>");
    scanf("%f",&Height);
    printf("Enter Base>>");
    scanf("%f",&Base);
    Area= 0.5*(Base*Height);
    printf("Area of triangle=%f",Area);
//9.Reads price of an article and prints VAT and price with VAT added
    float Price, VAT,VATprice;
    printf("Enter Price>> ");
    scanf("%f",&Price);
    VAT=0.18* Price;
    printf("VAT is:%f \n",VAT);
    VATprice=Price+VAT;
    printf("VAT price is:%f\n",VATprice);
//10.Calculates length of Hypotunese
    double A,B,H;
    printf("Enter side A>>");
    scanf("%f",&A);
    printf("Enter side B>>");
    scanf("%f",&B);
    H = sqrt((A*A) + (B*B));
    printf("Hypotenuse=%f",H);
//11.Reads initial and final values of water consumption in kilolitres and work out the cost
    double Initialreading,Finalreading,Consumption,Cost;
    printf("Enter initial reading: ");
    scanf("%f",&Initialreading);
    printf("Enter final reading: ");
    scanf("%f",&Finalreading);
    //Calculating consumption
    Consumption= (Finalreading)-Initialreading))*1000;
    printf("Consumption=%f L\n",Consumption);
    //Calculating cost
    Cost=1.50*Consumption;
    printf("Cost=Shs.%f",Cost); 
//12.Reads initial and final speeds of a car as well as fuel used and calculates consumption in kilolitres
    float Initial,Final,Fuel,Distance,Consumption;
    printf("Enter initial km: ");
    scanf("%f",&Initial);
    printf("Enter final km: ");
    scanf("%f",&Final);
    printf("Enter fuel in litres: ");
    scanf("%f",&Fuel);
    Distance=Final-Initial;
    printf("Distance=%.2fkm\n",Distance);
    Consumption=Distance/Fuel;
    printf("Consumption=%.2f km/litre",Consumption);
//13.Calculates force working on two masses using Newton's law of gravitation formula
    float M1,M2,R,Force;
    printf("Mass of M1(kg): ");
    scanf("%f",&M1);
    printf("Mass of M2(kg): ");
    scanf("%f",&M2);
    printf("Enter the distance R in metres: ");
    scanf("%f",&R);
    Force=(6.7E-11*M1*M2)/R;
    printf("The force is %f Newton",Force);
//14.Calculates populaion over three years if increase rate is 12.3%
     float population=43000000;
     float increaserate=0.123;
     population*=(1+increaserate);
     printf("2025=%.0f\n",population);
     population*=(1+increaserate);
     printf("2026=%.0f\n",population);
     population*=(1+increaserate);
     printf("2027=%.0f\n",population);
// 15.Finds the midpoint of two points
     float x1,x2,y1,y2,x,y,;
    printf("Enter 1st x-coordinate>>" );
    scanf("%f",&x1);
    printf("Enter 1st y-coordinate>> ");
    scanf("%f",&y1);
    printf("Enter 2nd x-coordinate>> ");
    scanf("%f",&x2);
    printf("Enter 2nd y-coordinate>> ");
    scanf("%f",&y2);
    x=((x1+x2)/2);
    y=((y1+y2)/2);
    printf("Midpoint is at (%.1f,%.1f) ",x,y);
 //16.Reads in two points and calculates the gradient
     float x1,x2,y1,y2,Gradient;
     printf("Enter 1st x-coordinate>> ");
     scanf("%f",&x1);
     printf("Enter 1st y-coordinate>> ");
     scanf("%f",&y1);
     printf("Enter 2nd x-coordinate>> ");
     scanf("%f",&x2);
     printf("Enter 2nd y-coordinate>> ");
     scanf("%f",&y2);
     Gradient=(y2-y1)/(x2-x1);
     printf("Gradient is: %.1f",Gradient);
//17.Finds the value of N for x=5
    int x=5;
    float N;
    N=((x^4)-(x^3)+(x*x)-(x))/((x+1)*(x+1)-(x^1/2));
    printf("N=%.5f",N);
//18.Reads in agiven mark out of a given total A and converts it to a mark out of a total B
    int mark,originaltotal,newtotal,newmark;
    printf("Enter mark: ");
    scanf("%d",&mark);
    printf("Enter original total: ");
    scanf("%d",&originaltotal);
    printf("Enter new total: ");
    scanf("%d",&newtotal);
    newmark=(mark*newtotal)/originaltotal;
    printf("Converted mark= %d",newmark);
//19.Calculates velocity of a body
     float s;
     float v;
     int a=10;
    printf("Enter distance in meters: ");
    scanf("%f",&s);
    v = sqrt(2 * a * s);
    printf("Speed in metres/sec= %.1f",v);
//20.Calculates distance between two points
    float x1,x2,y1,y2,distance;
    printf("Enter 1st x-coordinate>> ");
    scanf("%f",&x1);
    printf("Enter 1st y-coordinate>> ");
    scanf("%f",&y1);
    printf("Enter 2nd x-coordinate>> ");
    scanf("%f",&x2);
    printf("Enter 2nd y-coordinate");
    scanf("%f",&y2);
    distance= sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("Distance is %.1f",distance);
//21.Finds solutions of a quadratic equation
     int a,b,c;
     float x1,x2,z;
     printf("Enter value of a: ");
     scanf("%d",&a);
     printf("Enter value of b: ");
     scanf("%d",&b);
     printf("Enter value of c: ");
     scanf("%d",&c);
     z=sqrt((b*b)-(4*a*c));
     x1=(-b+z)/2*a;
     printf("1st solution is:%.2f\n",x1);
     x2=(-b-z)/2*a;
     printf("2nd solution is:%.2f",x2);
//22.Converts number of seconds(N) to hours, minutes and seconds it represents
    int N, minutes, hours,seconds;
    printf("Enter value in seconds>> ");
    scanf("%d",&N);
    hours =N/3600; //Calculating hours
    minutes=N%60;//Calculating minutes
    seconds=(N%60)%60;
    printf("%dseconds=%dhours=%dminutes",N,hours,minutes,seconds);
//23.Reads minutes and represents them in number of days, minutes and seconds
    int M,days,seconds,minutes,hours;
    printf("Enter value in minutes>> ");
    scanf("%d",&M);
    days=M/1440;
    hours=(M % 1440)/60;
    minutes=(M % 1440)%60;
    seconds=0;
    printf("%ddays= %dhours= %dminutes= %dseconds",days,hours,minutes,seconds);
//24.Reads in number of pupils and calculates how many teachers are allowed
    int pupils;
    float teachers;
    printf("Enter number of pupils>>");
    scanf("%d",&pupils);
    teachers=pupils/(5);
    printf("The school may have %.0f teachers.",teachers);
//25.Reads in two numbers and prints how many times the 1st number divides into the 2nd as well as the remainder
    int num1,num2,quotient,remainder;
    printf("Enter 1st number>> ");
    scanf("%d",&num1);
    printf("Enter 2nd number>> ");
    scanf("%d",&num2);
    quotient=num2/num1;
    remainder=num2%num1;
    printf("%d divides into %d %d times with a remainder of %d",num1,num2,quotient,remainder);
    return 0;
}