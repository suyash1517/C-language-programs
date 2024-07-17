#include<stdio.h>
#include<stdlib.h>
//My first c program
/**
    name - Suyash Manish Danawale
    stream - CE
//-------------------------------------------------------------
int main()
{
    printf("Hello world!\n");
    return 0;
}
//-------------------------------------------------------------
*/
/**
int main()
{
    printf("Name : suyash.manish.danawale");
    printf("Address : A/p 'malwadi',trimurti nivas,baramati");
    printf("Marks : SSC:80%  HSC:82%");
    printf("Height: 5.10ft Weight:55 Gender:'M'");
    printf("Abhiraj is my best friend amit");

    return 0;

}

 escape sequence character
 \n - new  line
 \t - horz.space
 \"-"
 \'-'
 \?-?
 \\-\
 \b - backspace
 \a - beepsound
 %%-%\
 \r - carrige return


//wap to display the personal details using escape sequence character
 int main()
 {
     printf("\nName: Suyash \b.M  \b.D\a\a\a\a\a\a\a\a ");
     printf("\nAdress;A\\P\'Malwadi\',\'Trimurti Nivas\',\'Baramati\'");
     printf("\nMarks :  \bSSC:\'80%%\'\tHSC:\'82%%\'");
     printf("\nHeight:5.6ft\tWeight:55\tGender:\'M\'");
     printf("\nAbhiraj is my best friend\r.amit");


     return 0;

 }
*/


//--------------------------------------------------------------------------
 //WAP to init and display the values
 /**
#include<stdio.h>
int main()
{
  int x=10,y=20;
  char ch='0';
  float ft=45.759;
  double db=89.999;

  printf("\nx:%d \ty:%d \tch:%c \tft:%0.2f \tdb:%.2lf",x,y,ch,ft,db);

  return 0;
}

*/
//------------------------------------------------------------

//WAP to input and display the data on screen
/**
#include<stdio.h>
int main()
{
    int x,y;

    printf("\n enter the value of x and y:");
    scanf("%d%d",&x,&y);

    printf("\n x:%d \ty:%d",x,y);
    return 0;

}
//-------------------------------------------------------------------
Assignment  Operator -->[ = ]
Unary Operator ---> [ - -- ++ (type) sizeof ]
Arithmatic Operator ----> [ - + * / %  ]
Logical Operator ----> [ && || ! ]
Realational Operator ----> [ < <= > >= ]
Equality Operator ----> [ == != ]
Bitwise Operator ----> [ &  | ^ <<  >> ]
Conditional Operator ----> [ ? : ]
Special Operator -----> [ . , ; &(Ampersand) -> *]

//------------------------------------------------------------
//assignment operator

ex. x=20; // Constant value
    y=x;//value of variable
    z=x+y;//ans of expression

*/

//-------------------------------------------------------
// WAP to enter any two values through keyboard and interchange it using third variable
//ex. x=10. y=20
//ans x=20 y=10

/**
#include<stdio.h>
int main()
{
    int x,y,tmp;
    printf("\n enter the value of x and y:");
    scanf("%d%d",&x,&y);

    printf("\n Before exchange x:%d \ty:%d",x,y);
    tmp=x;//tmp=10
    x=y;//x=20
    y=tmp;//y=10

    printf("\n After exchange x:%d \ty:%d",x,y);

    return 0;

}
*/

//----------------------------------------------------------------------------------------------------
// WAP to enter any two values through keyboard and interchange it  without  using third   variable
//ex. x=10. y=20
//ans x=20 y=10

/**
#include<stdio.h>
int main()
{
    int x,y;

    printf("\n Enter the value x and y : ");
    scanf("%d%d",&x,&y);//10 20

    printf("\n Before interchange x:%d \ty:%d",x,y);

    x=x+y;//30
    y=x-y;//30-20-->10
    x=x-y;//30-10-->20

    printf("\n After interchange x:%d \ty:%d",x,y);
    return 0;

}
*/
//------------------------------------------------------------------------------

/**
#include<stdio.h>
int main()
{
    int x,y;

    printf("\n Enter the value x and y : ");
    scanf("%d%d",&x,&y);//10 20

    printf("\n Before interchange x:%d \ty:%d",x,y);

    x=x*y;//200
    y=x/y;//10
    x=x/y;//20

    printf("\n After exchange x:%d \ty:%d",x,y);

    return 0;
}
*/
//----------------------------------------------------------------------------------------
/**
int main ()
{

    int x,y,z,tmp;

    printf("\n Enter the value x,y and z :");
    scanf("%d%d%d",&x,&y,&z);

    printf("\n Before interchange x:%d \t y:%d \t z:%d",x,y,z);

    tmp = z;
    z = y;
    y = x;
    x = tmp;

    printf("\n After exchange x:%d \t y:%d \t z:%d",x,y,z);

    return 0;
}
*/
//---------------------------------------------------------------------------------
/**

int main ()
{
    char a,b,tmp;

    printf("\n Enter the value a and b :");

    fflush(stdin);
    scanf("%c",&a);

    fflush(stdin);
    scanf("%c",&b);

    printf("\n before exchange a:%c \t b:%c",a,b);

    tmp = b;
    b = a;
    a = tmp;

    printf("\n After exchange a:%c \t b:%c",a,b);

    return 0;

}
*/
//---------------------------------------------------------------------------------------------------
/**

int main ()
{
    char a,b,c,tmp;

    printf("\n Enter the value a,b and c:");
    fflush(stdin);
    scanf("%c",&a);

    fflush(stdin);
    scanf("%c",&b);

    fflush(stdin);
    scanf("%c",&c);

    printf("\n before exchange a:%c \t b:%c \t c:%c",a,b,c);

    tmp =c;
    c = b;
    b = a;
    a = tmp;

    printf("\n After exchange a:%c \t b:%c \t c:%c",a,b,c);

    return 0;

}
*/

//------------------------------------------------------------------------------------------------------
//unary operator

/**
int main()
{
    int x=5,y=10,z;

    z=-x;//z =-5
    printf("\n x:%d \ty:%d \tz:%d",x,y,z);

    ++x;
    --y;
    printf("\n x:%d \ty:%d \tz:%d",x,y,z);

    z= ++x + --y;
    printf("\n x:%d \ty:%d \tz:%d",x,y,z);

    return 0;

}

int main()
{
    int x,y,z;
    printf("\n enter the value of x and y:");
    scanf("%d%d",&x,&y);

    z=-x;
    printf("\n x:%d \t y:%d \t z:%d",x,y,z);

    ++x;
    --y;
    printf("\n x:%d\ty:%d\tz:%d ",x,y,z);

    z= ++x + --y;
    printf("\n x:%d\ty:%d\tz:%d",x,y,z);

    return 0;

}


int main()
{
    int x=15,y=7;
    float z;

    z=x/y;
    printf("\n z is %f",z);

    z=(float)x/y;
    printf("\n z is %f",z);

    z=x/(float)y;
    printf("\n z is %f",z);

    z=(float)x/(float)y;
    printf("\n z is %f",z);

    return 0;

}


int main()
{
    int x,y;
    float z;

    printf("\n enter any value of x and y:");
    scanf("%d%d",&x,&y);

    z = x/y;
    printf("\n z is: %.2f",z);

    z = (float)x/y;
    printf("\n z is: %.3f",z);

    z = x/(float)y;
    printf("\n z is: %.2f",z);

    z = (float)x/(float)y;
    printf("\n z is: %.5f",z);

    return 0;
}



int main()
{
    int x= 1467;
    float y;

    printf("\n for int type: %d",sizeof (int));
    printf("\n for int type: %d",sizeof(x));

    printf("\n for float type:%d",sizeof (float));
    printf("\n for float type:%d",sizeof(y));

    printf("\n for char type:%d",sizeof (char));
    printf("\n for double type:%d",sizeof (double));

    return 0;

}

*/

//------------------------------------------------------------------------
// arithmetic operater[+ - * / %]

// WAP to calc the simple interst
//formula: 	si = ( p * r * n ) / 100 ;
/**

int main()
{
    int p,n;
    float si,r;

    printf("\n enter value of p,r,n:");
    scanf("%d%f%d",&p,&r,&n);

    si = p*r*n/100;

    printf("\n Si is:%f",si);
    return 0;

}
*/

//--------------------------------------------------------------------------
/**
// WAP to convert the temp from F to Deg and deg to F.
//formula: (0°C × 9/5) + 32 = 32°F
//(°F − 32) / 1.8 = °C

int main()
{
    float celsius,farheneit;

    printf("\n enter the temp in farheneit:");
    scanf("%f",&farheneit);

    celsius = (farheneit-32)/1.8;
    printf("temp in celsius is :%f",celsius);

    return 0;

}

int main()
{
    float celsius,farheneit;

    printf("\n enter the temp in  celsius:");
    scanf("%f",& celsius);

    farheneit = celsius*9/5 +32;
    printf("temp in  farheneit  is :%f", farheneit );

    return 0;
}
*/

//------------------------------------------------------------------------------------------------------------------------------

// Enter any 3 digit number and display the addition of all 3 digits.
//e.g. 148 -> 8+4+1 ==> 13

//      no	rem sum
//				0
 //      148	8	8
	//	14	4	12
//		1	1	13
//		0

/**
int main()
{
    int no,ans=0,rem;

    printf("\n Enter any 3 digit no: ");
    scanf("%d",&no);

    rem=no%10;
    ans=ans+rem;
    no=no/10;

    rem=no%10;
    ans=ans+rem;
    no=no/10;

    rem=no%10;
    ans=ans+rem;
    no=no/10;

    printf("\n Addition of all digits: %d",ans);
    return 0;
}
*/
//---------------------------------------------------------------------------
//WAP to convert given no into binary and add it by seperating the number
/**
int main()
{
    int no,rem;

    printf("\n enter the number bet 0 and 15 : ");
    scanf("%d",&no);

    rem = no%2;
    no = no/2;
    printf("\n the no. decimal to binary is : %d",rem);

    rem = no%2;
    no = no/2;
    printf("%d",rem);

    rem = no%2;
    no = no/2;
    printf("%d",rem);

    rem = no%2;
    no = no/2;
    printf("%d \n  ",rem);
    return 0;
}
*/
//--------------------------------------------------------------------------------

/**
int main()
{
    int no,quo=0;

    printf("\n enter the number bet 1000 to 9999 : ");
    scanf("%d",&no);

    quo = no/1000;
    no = no%1000;
    printf("\n the no. into the decimal is %d",quo");

    quo = no/100;
    no = no%100;
    printf("%d",quo");

    quo = no/10;
    no = no%10;
    printf("%d",quo");

    quo = no/1;
    no = no%1;
    printf("%d",quo");

    return 0;

}







/**
int main()
{
	int no,rem,rev=0;

	printf("\n Enter any 3 digit number: ");
	scanf("%d",&no);

	rem=no%10; //3
	rev=(rev*10)+rem;//3
	no=no/10; //12

	rem=no%10; // 2
	rev=(rev*10)+rem; // 32
    no=no/10; // 1

	rem=no%10; // 1
	rev=(rev*10)+rem; //321
	no=no/10; // 0

	printf("\n Reverse Number is: %d",rev);

	return 0;
}
*/

//---------------------------------------------------------------------------------
/**
//Write a C program to enter two numbers and find their sum.

int main()
{
    int x,y,z;

    printf("\n enter value of x and y:");
    scanf("%d%d",&x,&y);

    z = x+y;
    printf("\n sum is : %d",z);

    return 0;

}
*/

//--------------------------------------------------------------------------------

//Write a C program to enter two numbers and perform all arithmetic operations.
/**

int main()
{
    int num1, num2;
    int sum, sub, mult, mod;
    float div;

    printf("\n Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;
    mod = num1 % num2;

    printf("\n SUM is :%d", sum);
    printf("\n DIFFERENCE is: %d", sub);
    printf("\n PRODUCT is: %d", mult);
    printf("\n QUOTIENT is:%f", div);
    printf("\n MODULUS is: %d", mod);

    return 0;
}
*/

//-------------------------------------------------------------------------------------------------
//Write a C program to enter length and breadth of a rectangle and find its perimeter.
/**

int main()
{
    float l,b,p=0.0;

    printf("\n enter the length ang breadth of recangle:");
    scanf("%f%f",&l,&b);

    p = 2*(l+b);
    printf("perimeter of rectangle is:%f",p);

    return 0;
}

*/

//-------------------------------------------------------------------------------------------------

//Write a C program to enter length and breadth of a rectangle and find its area.
/**

int main()
{
    float len,breadth,area=0.0;

    printf("\n enter the length ang breadth of recangle:");
    scanf("%f%f",&len,&breadth);

    area = len*breadth;
    printf("Area of the reactangle is :%f",area);

    return 0;


}
*/

//-----------------------------------------------------------------------------------------------------------------

//Write a C program to enter radius of a circle and find its diameter, circumference and area.

/**

int main()
{
    float radius,dia,cir,area;

    printf("\n enter the radius of circle:");
    scanf("%f",&radius);

    dia = 2*radius;
    cir = 2*3.14*radius;
    area = 3.14*radius*radius;

    printf("\n diameter of circle is :%f",dia);
    printf("\n circumference of circle is :%f",cir);
    printf("\n area of circle is :%f",area);

    return 0;

}
*/


//------------------------------------------------------------------------------------

//Write a C program to enter length in centimeter and convert it into meter and kilometer.
/**


int main()
{
    float length,l1,l2;

    printf("\n enter the length in cm:");
    scanf("%f",&length);

    l1 = length/100;
    l2 = length/100000;

    printf("\n length into meters is: %f",l1);
    printf("\n length into kilometers is: %f",l2);

    return 0;

}
*/

//--------------------------------------------------------------------------------------
//Write a C program to convert days into years, weeks and days
/**
int main()
{
    float days,weeks,years;

    printf("\n enter the number of Days:");
    scanf("%f",&days);

    weeks = days/7;
    years = days/365;

    printf("\n The numbers Weeks are:%f",weeks);
    printf("\n The numbers Years are:%f",years);

    return 0;

}
*/

//-------------------------------------------------------------------------------
/**

//Write a C program to enter two angles of a triangle and find the third angle.
//formula : angle1+angle2+angle3 = 180

int main ()
{
    float Ang1,Ang2,Ang3;

    printf("\n enter the value of angle1 and angle2 in degrees:");
    scanf("%f%f",&Ang1,&Ang2);

    Ang3 = 180 - (Ang1+Ang2);

    printf("\n the value of third angle is :%f",Ang3 );
    return 0;

}
/*
//-------------------------------------------------------------------------------------------

/**
//Write a C program to enter base and height of a triangle and find its area.

int main()

{
    float base,height,Area;

    printf("\n enter the value of base and height:");
    scanf("%f%f",&base,&height);

    Area = 0.5*base*height;
    printf("\n the area of triangle is :%f",Area);

    return 0;

}
*/

//-----------------------------------------------------------------------------------------

// relational,equality,logical operators :
//[ < <= > >= ] [==, != ] [ && || ! ]
/**

int main ()
{
    int x,y;

    printf("\n enter the value of x and y:");
    scanf("%d%d",&x,&y);

    printf("\n (x>y) is %d",(x>y));
    printf("\n (x<y) is %d ",(x<y));

    printf("\n (y <= 100) is %d",(y<=100));
    printf("\n (x >= 25) is %d",(x >= 25));

    printf("\n (x == y) is %d",(x==y));
    printf("\n (x != 43) is %d",(x != 43));
    printf("\n (x%%2 == 0) is %d",(x%2 == 0) );


    return 0;

}
*/

//----------------------------------------------------------------
/**

int main ()
{
    int x,y;

    printf("\n enter the value of x and y:");
    scanf("%d%d",&x,&y);

    printf("\n (x>y && y<100) is %d", (x>y && y<100));
    printf("\n (x<y) || (y%%2 == 0) is %d",(x<y) || (y%2 == 0) );

    printf("\n (x>y || y<10) is %d",(x>y || y<10));
    printf("\n (y%%5!=0) || (y%%2 == 0) is %d",(y%5!=0) || (y%2 == 0) );


}
*/
//-----------------------------------------------------------------------

//Write a C program to convert days into years, weeks and days.
/**

int main()
{
    float week,year;
    int day;

    printf("\n enter the number of days:");
    scanf("%d",&day);

    year = day/365;
    day = day%365;

    week = day/7;
    day = day%7;

    printf("\n number of years is: %f",year);
    printf("\n number of weeks is: %f",week);
    printf("\n number of day is: %d",day);

    return 0;

}

*/
//------------------------------------------------------------------------------------


// wap to enter the time in sec through keyboard and convert it into hour and minute and sec

/**
int main()
{
    float min,hr;
    int sec;

    printf("\n enter the time in sec :");
    scanf("%d",&sec);

    hr = sec/3600 ;
    sec = sec%3600;

    min = sec/60;
    sec = sec%60;

    printf("\n num of hours is:%f",hr);
    printf("\n num of minutes is:%f",min);
    printf("\n num of seconds is :%d",sec);

    return 0;
}
*/

//----------------------------------------------------------------------------------------------

// condional operator

// wap to find max between entered two nos.
/**

int main()
{
    int a,b;

    printf("\n enter the valye of a and b:");
    scanf("%d%d",&a,&b);

    (a>b)?printf("\n a is maximum : %d",a): printf("\n b is maximum : %d",b);
    return 0;

}
*/
//----------------------------------------------- OR -------------------------------------------------------------------------
/**
int main()
{
    int a,b,max=0;

    printf("\n enter the valye of a and b:");
    scanf("%d%d",&a,&b);

    max=(a>b)?a:b;

    printf("\n Max number is :%d",max);
    return 0;
}

*/

//WAP to find max bet 3 nos
/**
int main ()
{
    int a,b,c,max=0;

    printf("\n enter the value of a,b,c : ");
    scanf("%d%d%d",&a,&b,&c);

    //max=(a>b)? a : b ;
    //max=(max>c)? max : c ;

    max = (a>b)?(a>c)? a : c : (b>c)? b : c ;

    printf("\n max no is %d",max);

    return 0;
}
*/
//-----------------------------------------------------------------------------------

// WAP to enter the prize of 3 items and find total,discount and payable amount
/**
int main()
{
    float a,b,c,tot=0.0,dis,payamt;

    printf("\n enter the prize of 3 items : ");
    scanf("%f%f%f",&a,&b,&c);

    tot = a+b+c;
    printf("\n total amount is :%f",tot);

    (tot>500)? (dis = tot*0.07 ) : (dis = tot*0.03) ;
    payamt = tot - dis;

    printf("\n discount is : %.3f",dis);
    printf("\n payable amount is: %.3f",payamt);

    return 0;

}

*/
//-----------------------------------------------------------------------------------------

//---------------BITWISE operator [ &,|,^,>>,<<]----------------------------------------------------------
/**
int main()
 {
     int x=10,y=12,z;

     z=(x&y);
     printf("\n (x&y) is %d", z);
     printf("\n (x|y) is %d", (x|y));
     printf("\n (x^y) is %d", (x^y));

     printf("\n (x<<2) is %d", (x<<2));
     printf("\n (y>>2) is %d", (y>>2));

     return 0;
 }

*/
//------------------------------------------------------------------------------------

//c basic test analysis:

/**
int main()
{
       printf("%d\t",sizeof(2.5));
       printf("%d\t",sizeof(2));
       printf("%d",sizeof('A'));
       return 0;
}
*/
/**
int main()
{
      float me = 5.25;
      double you = 5.25;
      if(me == you)
        printf("Archer Infotech,pune");
    else
        printf("Archer Infotech,sangli");
    return 0;
 }

*/
/**
 int main()
 {
    float a = 5.0;
    printf ("Result is = %d ", (24 / 5) * a);
    return 0;
 }
*/
/**
int main()
 {
    10;
    printf("%d", 10);
 }
*/
/**
int main()
 {
    int i = 5;
    int a = ++i + ++i + ++i;
    printf("%d",a);
    return 0;
 }
*/



//------------------------------------------------------------------------------------------------

//WAP to display marks of robert in three sub are 78,45,62 cal total marks and percentage
/**

int main ()
{
    int sub1=78,sub2=45,sub3=62;
    float total, percent;

    total = sub1 + sub2 + sub3;
    percent = (total/300)*100;

    printf("\n total marks of robert are:%f",total);
    printf("\n percentage of robert are :%f%%", percent);

    return 0;

}
*/
//-------------------------------------------------------------------------

//WAP to enter amt and purchase platinum,gold,silver sequentially and possibaly in grams and quantity in grams and cash in hand
/**
int main()
{
    int amt,plat,gold,sil;

    printf("\n enter the amount in rs : ");
    scanf("%d",&amt);

    plat = amt/8000;
    amt = amt%8000;

    gold = amt/4000;
    amt = amt%4000;

    sil = amt/700;
    amt = amt%700;

    printf("\n platinum in grams is : %d",plat);
    printf("\n gold in grams is : %d",gold);
    printf("\n silver in grams is : %d",sil);
    printf("\n leftover cash is : %d",amt);

    return 0;
}
*/
//-------------------------------------------------------------------
//WAP to enter any no, display the reverse no and also display the add of reversed no i/p:486,o/p:684,sum=18
/**

int main ()
{
    int no,rem,rev=0,sum=0;

    printf("\n enter the number:");
    scanf("%d",&no);

    rem = no%10;
    rev = (rev*10)+rem;
    no = no/10;

    rem = no%10;
    rev = (rev*10)+rem;
    no = no/10;

    rem = no%10;
    rev = (rev*10)+rem;
    no = no/10;

    printf("\n Reversed Number is :%d",rev);

    rem = rev%10;
    sum = sum+rem;
    rev = rev/10;

    rem = rev%10;
    sum = sum+rem;
    rev = rev/10;

    rem = rev%10;
    sum = sum+rem;
    rev = rev/10;

    printf("\n summation of reversed number is :%d",sum);

    return 0;
}
*/
//--------------------------------------------------------------------------------------
//WAP to find the max from 3 numbers (using nesting condional operator)
/**

int main()
{
    int a,b,c,max;

    printf("\n enter the value of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);

    max = (a>b)?(a>c)? a: b : (b>c)? b : c;
    printf("\n MAX is no is : %d",max);

    return 0;
}
*/
//---------------------------------------------------------------------------------------

//WAP to display entered no is divsible by 5 or not if yes then add 100 otherwise multiply by 10
/**

int main()
{



    int no;

    printf("\n enter the value of number :");
    scanf("%d",&no);

    (no%5 == 0)? printf("\n the no is: %d",(no+100)) : printf("\n the no is : %d",(no*10));
    return 0;

}
*/
//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------


//          *************** CONTROL STATEMENTS  ***********
/*
1. conditional CONTROL statements
a.using if() :-
*/

/**
int main()
{
    int x;

    printf("\n enter the value of x : ");
    scanf("%d",&x);

    if(x%2 == 0)
    {
        printf("\n %d is even ",x);
    }
    else
    {
        printf("\n %d is odd",x);
    }
}
*/
//-------------------------------------------------------------

//WAP to find max bet 3 nos using if ()
/**
int main()
{
    int x,y,z;

    printf("\n enter the value of x,y and z : ");
    scanf("%d%d%d",&x,&y,&z);

    if(x>y && x>z)
    {
        printf("\n X is maximum");
    }
    if (y>z && y>x)
    {
        printf("\n Y is maximum");
    }
    if (z>x && z>y)
    {
        printf("\n Z is maximum");
    }
}
*/
//-------------------------------------------------------------

// b.using if()else :-

//WAP to Enter any no and display the entered  no is even or odd ( using if() else)
/**

int main()
{
    int no;

    printf("\n Enter any no : ");
    scanf("%d",&no);

    if(no%2==0)
    {
        printf("\n %d is Even ",no);
    }
    else
    {
        printf("\n %d is Odd",no);
    }

    return 0;
}
*/

//-----------------------------------------------------------------------------------------

//WAP to enter price of 4 items and calculate total ,discount and payble amount using if() else
//( discount is 14% if amount exceeds more than 500 otherwise 3% )
/**
int main()
{
    float a,b,c,d,dis,tot=0.0,payamt;

    printf("\n enter the value of a,b,c and d : ");
    scanf("%f%f%f%f",&a,&b,&c,&d);

    tot = a+b+c+d;
    printf("\n total amt is : %.3f",tot);

    if(tot>500)
    {
        dis = tot*0.14;
    }
    else
    {
        dis = tot*0.03;
    }

    printf("\n discount is : %.3f",dis);
    printf("\n payable amt is : %.2f",(tot-dis));

    return 0;

}
*/
//-------------------------------------------------------------------------------------------------------------------------
//WAp to enter any no check if it even or odd .if no is even then add 100 in it otherwise multiplyd by 10
/**
int main()
{
    int no,ans;

    printf("\n Enter any no : ");
    scanf("%d",&no);

    if(no%2==0)
    {
        ans=no+100;
        printf("\n %d is even ",no);
    }
    else
    {
        ans=no*10;
        printf("\n %d is Odd",no);

    }

    printf("\n Ans is %d ",ans);

    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------------------

//Wap to find max between 3 nos using if() else
/**
int main ()
{
    int a,b,c;

    printf("\n enter the value of a,b and c : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("\n a is max ");
    }
    if(b>c && b>a)
    {
        printf("\n b is max");
    }
    if(c>a && c>b)
    {
        printf("\n c is max");

    }
    else
    {
        printf("");

    }

    return 0;

}
*/

//--------------------------------------------------------------------------------------------------------------

// WAP to enter any no check no is divisible  by 3 or 5 or divisible by both or not by both

/**
int main()
{
    int no;

    printf("\n enter any no : ");
    scanf("%d",&no);

    if(no%3==0 && no%5!=0)
    {
        printf("\n No is divisible by only 3 ");
    }
    if(no%5==0 && no%3!=0)
    {
        printf("\n No is divisible by only 5 ");
    }
    if(no%3==0 && no%5==0)
    {
        printf("\n No is divisible by 3 and 5 ");
    }
    if(no%3!=0 && no%5!=0)
    {
        printf("\n No is not divisible by 3 and 5 ");
    }
    else
    {

    }
    return 0;
}
*/
//---------------------------------------------------------------------------------------

 //   NESTING OF IF()ELSE

 // WAp to find max between 3 nos .
/**
int main()
{
    int x,y,z;

    printf("\n enter the value of x,y and z : ");
    scanf("%d%d%d",&x,&y,&z);

    if(x>y)
    {
        if(x>z)
        {
            printf("\n x is max");
        }

    }
    else
    {
        if(y>z)
        {
            printf("\n y is max");
        }
        else
        {
            printf("\n z is max");
        }
    }
    return 0;

}
*/
//--------------------------------------------------------------------------

// WAP to enter any no check no is divisible by 3 or 5 or divisible by both or not by both
/**
int main()
{
    int no;

    printf("\n Enter any no : ");
    scanf("%d",&no);

    if(no%3==0)
    {
        if(no%5==0)
        {
            printf("\n number is divisible by 3 and 5",no);
        }
        else
        {
            printf("\n number is divisible by 3 only",no);
        }
    }
    else
    {
        if(no%5 == 0)
        {
            printf("\n number is divisible by 5 only");
        }
        else
        {
            printf("\n no is not divisible by 3 and 5");
        }
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------

//WAp to enter any character through keyboard check whether it is uppercase,lowcase ,digit or special symbol

// A to Z ==> 65 to 90
//a to z ==> 97 to 122
// 0 to 9 ==> 48 to 57

/**
int main()
{
    char ch;

    printf("\n enter any character : ");
    scanf("%c",&ch);

    if (ch>=65 && ch<=90)
    {
        printf("\n %c is an uppercase char",ch);
    }
    else
    {
        if(ch>=97 && ch<=122)
        {
            printf("\n %c is an lowercase character",ch);
        }
        else
        {
            if (ch>=48 && ch<=57)
            {
                printf("\n %c is an digit",ch);
            }
            else
            {
                printf("\n %c is an special symbol");
            }
        }
    }
    return 0;

}
*/
//-------------------------------------------------------------------------------------

// Write a menu driven program to check
//1->no is + - or 0
//2->even or odd
/**
int main()
{
    int no,opt;

    printf("\n enter any no : ");
    scanf("%d",&no);

    printf("\n ***********SELECT YOUR OPTION**********");
    printf("\n 1. + - or 0 \t 2. Even or Odd");
    printf("\n select your option : ");
    scanf("%d",&opt);

    if (opt==1)
    {
        if (no > 0)
        {
            printf("\n %d is positive",no);
        }
        else
        {
            if(no == 0)
            {
                printf("\n %d is zero",no);
            }
            else
            {
                printf("\n %d is an negative no",no);
            }
        }
    }
    else
    {
        if (opt == 2)
        {
            if(no%2==0)
            {
                printf("\n %d is Even",no);
            }
            else
            {
                printf("\n %d is Odd",no);
            }
        }
        else
        {
            printf("\n INCORRECT OPTION !!!!!!!");
        }
    }

    printf("\n THANK YOU VISIT AGAIN !!!!!!!");
    return 0;
}
*/
//--------------------------------------------------------------------------------------------

//EXERCISE

//              ********condional operator**********
//Write a C program to find maximum between two numbers using conditional operator
/**
int main()
{
    int a,b;

    printf("\n enter the valye of a and b:");
    scanf("%d%d",&a,&b);

    (a>b)?printf("\n a is maximum : %d",a): printf("\n b is maximum : %d",b);
    return 0;

}
*/
//----------------------------------------------------------------------------------------------

 //Write a C program to find maximum between three numbers using conditional operator.
/**
int main()
{
    int a,b,c,max;

    printf("\n enter the value of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);

    max = (a>b)?(a>c)? a: b : (b>c)? b : c;
    printf("\n MAX is no is : %d",max);

    return 0;
}
*/
//-----------------------------------------------------------------------------------------------

//Write a C program to check whether a number is even or odd using conditional operator
/**
int main()
{
    int no;

    printf("\n enter any no : ");
    scanf("%d",&no);

    (no%2==0)? printf("\n %d is even",no):printf("\n %d is odd",no);
    return 0;

}
*/
//-----------------------------------------------------------------------------------------------

//Write a C program to check whether year is leap year or not using conditional operator
/**
int main()
{
    int year;

    printf("\n enter any year no : ");
    scanf("%d",&year);

    (year%4==0)?printf("\n the entered year is leap year : %d",year): printf("\n the entered year is not leap year :%d",year);
    return 0;

}
*/
//-------------------------------------------------------------------------------------------------------------

//Write a C program to check whether character is an alphabet or not using a conditional operator


//----------------------------------------------------------------------------------------------------------------

//List of if...else programming exercises
///Write a C program to find the maximum between two numbers

/**
int main ()
{
    int x,y;

    printf("\n enter the x and y : ");
    scanf("%d%d",&x,&y);

    if(x>y)
    {
        printf("\n x is max");
    }
    else
    {
        printf("\n y is max");
    }
    return 0;

}
*/

//----------------------------------------------------------------------------------------------------------------------

//Write a C program to find maximum between three numbers.
/**
int main ()
{
    int a,b,c;

    printf("\n enter the value of a,b and c : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("\n a is max ");
    }
    if(b>c && b>a)
    {
        printf("\n b is max");
    }
    if(c>a && c>b)
    {
        printf("\n c is max");

    }
    else
    {
        printf("");

    }

    return 0;

}
*/
//---------------------------------------------------------------------------------------------------------

//Write a C program to check whether a number is negative, positive or zero.

/**
int main ()
{
    int no;

    printf("\n enter any number : ");
    scanf(" %d",&no);

    if (no > 0)
    {
        printf("\n %d is positive",no);
    }
    else
    {
        if(no == 0)
        {
            printf("\n %d is zero",no);
        }
        else
        {
                printf("\n %d is an negative no",no);
        }
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------

//Write a C program to check whether a number is divisible by 5 and 11 or not.

/**
int main()
{
    int no;

    printf("\n enter any no : ");
    scanf("%d",&no);

    if(no%5==0 && no%11==0)
    {
        printf("\n No is divisible by 5 and 11 ");
    }
    else
    {
        printf("\n No is not divisible by 5 and 11");
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------

//Write a C program to check whether a number is even or odd.
/**
int main()
{
    int no;

    printf("\n Enter any no : ");
    scanf("%d",&no);

    if(no%2==0)
    {
        printf("\n %d is even ",no);
    }
    else
    {
        printf("\n %d is Odd",no);
    }



    return 0;
}

*/
//-------------------------------------------------------------------------------------------------------

//Write a C program to check whether a character is an alphabet or not.
/**
int main()
{
    char ch;

    printf("\n enter any character : ");
    scanf("%c",&ch);

    if (ch>=65 && ch<=90)
    {
        printf("\n %c is an uppercase alphabet",ch);
    }
    else
    {
        if(ch>=97 && ch<=122)
        {
            printf("\n %c is an lowercase alphabet",ch);
        }
        else
        {
            printf("\n %c is not an alphabet",ch);
        }
    }
    return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------

//Write a C program to input any alphabet and check whether it is a vowel or consonant.
/**
int main()
{
    char ch;

    printf("\n enter the value of alphabet : ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )
        {
            printf("\n  %c is an vowel  ",ch);
        }
        else
        {
            printf("\n %c is an constant",ch);
        }
    }
    else
    {
        printf("\n WRONG INPUT");
    }

    return 0;

}
*/
//-------------------------------------------------------------------------------------------------

//------------------------------if else ladder------------------------------------------------

// // Enter any number and find it is +ve, -ve or zero.
/**
int main()
{
    int no;

    printf("\n enter any number : ");
    scanf("%d",&no);

    if(no>0)
    {
        printf("\n Number is positive");
    }
    else if(no<0)
    {
        printf("\n Number is negative");
    }
    else
    {
        printf("\n Number is zero");
    }

    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------


// Enter the salary of person and display his position in the company
/**
            - salary range
            < 2000 = worker
            2000 - 5000 = tr
            5000 - 9000 = jr
            9000 - 11000 = sr
            11000 - 15000 = dr
            >15000 - ceo
*/

/**
int main()
{
    int salary;

    printf("\n enter the salary of the person : ");
    scanf("%d",&salary);

    if (salary<2000)
    {
        printf("\n position : Worker");
    }
    else  if(salary>=2000 && salary<5000)
    {
        printf("\n position : Traniee");
    }
    else if(salary>=5000 && salary<9000)
    {
        printf("\n position : Jounior");
    }
    else if(salary>=9000 && salary<11000)
    {
        printf("\n position : Senior");
    }
    else if(salary>=11000 && salary<15000)
    {
        printf("\n position : Director");
    }
    else
    {
        printf("\n position : CEO");
    }
    return 0;

}
*/
//------------------------------------------------------or---------------------------------------------------------------
/**
int main()
{
    int salary;

    printf("\n enter the salary of the person : ");
    scanf("%d",&salary);

    if (salary<2000)
    {
        printf("\n position : Worker");
    }
    else  if( salary<5000)
    {
        printf("\n position : Traniee");
    }
    else if( salary<9000)
    {
        printf("\n position : Jounior");
    }
    else if( salary<11000)
    {
        printf("\n position : Senior");
    }
    else if(salary<15000)
    {
        printf("\n position : Director");
    }
    else
    {
        printf("\n position : CEO");
    }
    return 0;

}
*/
//-----------------------------------------------------------------------------------------------
// Enter the co-ordinates of point in the 2D system, and find its exact location

/**

                                 y axis

               II qd                ^               I qd
               (-,+)                |
                                    |           (+,+)
                                    |
                                    |
                                    |
-x axis                             |
     <------------------------------|---------------------------------> x axis
                                    |(0,0)
                                    |
                                    |
                                    |
                                    |
                                    |
            (-,-)                   |               (+,-)
            III qd                  |               IV qd
                                    |
                                    V
                                -y axis
 */



/**
 int main()
 {
     int x,y;

     printf("\n enter the x and y coordinates of point : ");
     scanf("%d%d",&x,&y);

     if (x>0 && y>0)
     {
         printf("\n The point lies in 1st quadrant");
     }
     else if(x<0 && y>0)
     {
         printf("\n The point lies in 2nd quadrant");
     }
     else if(x<0 && y<0)
     {
         printf("\n The point lies in 3rd quadrant");
     }
     else if(x>0 && y<0)
     {
         printf("\n The point lies in 4th quadrant");
     }
     else if(x==0 && (y>0 || y<0)) // (x==0 && y!=0)
     {
         printf("\n The point lies on y axis ");
     }
     else if((x>0 || x<0) && y==0) // (x!=0 && y==0)
     {
         printf("\n The point lies on x axis ");
     }
     else
     {
         printf("\n The point lies on the origin");
     }

     return 0;
 }

 */
 //------------------------------------------------------------------------------------------------------------------------------------

//            ******************EXERCISE*****************************************
//Write a C program to input any character and check whether it is alphabet, digit or special caharacter

/**
int main()
{
    char ch;

    printf("\n enter any character : ");
    scanf("%c",&ch);

    if ((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
    {
        printf("\n %c is an alphabet",ch);
    }
    else if (ch>=48 && ch<=57)
    {
        printf("\n %c is an digit",ch);
    }
    else
    {
        printf("\n %c is an special symbol",ch);
    }
    return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------

//Write a C program to check whether a character is uppercase or lowercase alphabet

/**
int main()
{
    char ch;

    printf("\n enter any character : ");
    scanf("%c",&ch);

    if (ch>=65 && ch<=90)
    {
        printf("\n %c is an uppercase character",ch);
    }
    else if (ch>=97 && ch<=122)
    {
        printf("\n %c  is an lowercase character",ch);
    }
    else
    {
        printf("\n WRONG INPUT");
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------

//Write a C program to input week number and print week day.
/**
int main ()
{
    int weekno;

    printf("\n enter the respective week no : ");
    scanf("%d",&weekno);

    if (weekno==1)
    {
        printf("\n today is Monday");
    }
    else if(weekno==2)
    {
        printf("\n today is Tuesday");
    }
    else if(weekno==3)
    {
        printf("\n today is Wednesday");
    }
    else if(weekno==4)
    {
        printf("\n today is thursday");
    }
    else if(weekno==5)
    {
        printf("\n today is friday");
    }
    else if(weekno==6)
    {
        printf("\n today is saturday");
    }
    else if(weekno==7)
    {
        printf("\n today is sunday");
    }
    else
    {
        printf("\n WRONG INPUT !!!!!!!!!!");
    }
    return 0;

}
*/
//--------------------------------------------------------------------------------------------------

//Write a C program to input month number and print number of days in that month.
/**
int main ()
{
    int No;

    printf("\n enter the  month number :");
    scanf("%d",&No);

    if (No==1)
    {
        printf("\n no of days in janauary are 31");
    }
    else if (No==2)
    {
        printf("\n no of days in feb are 28");
    }
    else if (No==3)
    {
        printf("\n no of days in march are 31");
    }
    else if (No==4)
    {
        printf("\n no of days in april are 30");
    }
    else if (No==5)
    {
        printf("\n no of days in may are 31");
    }
    else if (No==6)
    {
        printf("\n no of days in june are 30");
    }
    else if (No==7)
    {
        printf("\n no of days in july are 31");
    }
    else if (No==8)
    {
        printf("\n no of days in august are 31");
    }
    else if (No==9)
    {
        printf("\n no of days in sept are 30");
    }
    else if (No==10)
    {
        printf("\n no of days in oct are 31");
    }
    else if (No==11)
    {
        printf("\n no of days in nov are 30");
    }
    else if (No==12)
    {
        printf("\n no of days in dec are 31");
    }
    else
    {
        printf("\n WRONG INPUT !!!!!!");
    }
    return 0;


}
*/
//------------------------------------------------------------------------------

//Write a C program to count total number of notes in given amount.

/**
int main ()
{
     int amt,a,b,c;

     printf("\n enter the amt in numbers : ");
     scanf("%d",&amt);

     if(amt>2000)
     {
         a = amt/2000;
         amt = amt%2000;
         printf("\n %d are notes of 2000",a);
     }
     if(amt>500)
     {
         b = amt/500;
         amt = amt%500;
         printf("\n %d are notes of 500",b);
     }
     if (amt >100)
     {
         c = amt/100;
         amt = amt%100;
         printf("\n %d are notes of 100",c);
     }
     return 0;
}
*/

//------------------------------------------------------------------------------------------------------

//Write a C program to input all sides of a triangle and check whether triangle is  valid or not

/**
int main ()
{
    float side1,side2,side3;

    printf("\n enter the sides of the Triangle : ");
    scanf("%f%f%f",&side1,&side2,&side3);

    if(side1+side2>side3 && side1+side3>side2 && side2+side3>side1)
    {
        printf("\n the Triangle is valid one ");
    }
    else
    {
        printf("\n Invalid Triangle");
    }

    return 0;
}
*/
//----------------------------------------------------------------------------------------

//Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle
/**
int main ()
{
    float s1,s2,s3;

    printf("\n enter the sides of the Triangle : ");
    scanf("%f%f%f",&s1,&s2,&s3);

    if(s1==s2 && s1 == s3)
    {
        printf("\n the triangle is equilateral");
    }
    else if(s1==s2 || s2==s3 || s1==s3)
    {
        printf("\n the triangle is isoscales");
    }
    else
    {
        printf("\n the triangle is scalene");
    }

    return 0;

}
*/
//--------------------------------------------------------------------------------

//Write a C program to calculate profit or loss.

/**
 int main ()
 {
     int sell,cost,profit,loss;

     printf("\n enter the cost price of item : ");
     scanf("%d",&cost);

     printf("\n enter the selling price of item : ");
     scanf("%d",&sell);

     if (sell>cost)
     {
         profit= sell-cost;
         printf("\n %d is profit",profit);
     }
     else if (sell<cost)
     {
         loss = cost - sell;
         printf("\n %d is loss",loss);

     }
     else if(sell==cost)
     {
         printf("\n NO PROFIT & NO LOSS");
     }
     else
     {
         printf("\n no output");
     }

     return 0;

 }
 */
 //-----------------------------------------------------------------------------------

 //Write a C program to input marks of five subjects Physics, Chemistry, Biology,Mathematics and Computer. Calculate percentage and grade according to following:
 /**
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade
*/
/**

int main ()
{
    int math,phy,chem,bio,comp;
    float total,percent;

    printf("\n enter the marks of 5 subjects : ");
    scanf("%d%d%d%d%d",&math,&phy,&chem,&bio,&comp);

    total = (math+phy+chem+bio+comp);
    printf("\n total is : %f",total);

    percent =(total/500)*100;
    printf("\n total percentage is : %f",percent);

    if(percent>=90)
    {
        printf("\n the grade is A");
    }
    else if (percent>=80)
    {
        printf("\n the grade is B");
    }
    else if (percent>=70)
    {
        printf("\n the grade is C");
    }
    else if (percent>=60)
    {
        printf("\n the grade is D");
    }
    else if (percent>=40)
    {
        printf("\n the grade is E");
    }
    else
    {
        printf("\n the grade is F");
    }

    return 0;

}
*/
//------------------------------------------------------------------------------------------------------------

//Write a C program to input basic salary of an employee and calculate its Gross salary according to the following:
/**
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

/**
int main()
{
    float GS,BS,HRA,DA;

    printf("\n enter the basic salary : ");
    scanf("%f",&BS);

    if(BS<=10000)
    {
        GS = BS + (BS*0.2) + (BS*0.8);
        printf("\n 1. %f is gross salary ",GS);
    }
    else if (BS<=20000)
    {
        GS = BS + (BS*0.25) + (BS*0.9);
        printf("\n 2. %f is gross salary ",GS);
    }
    else if (BS>20000)
    {
        GS = BS + (BS*0.3) + (BS*0.95);
        printf("\n 3. %f is gross salary ",GS);

    }
    else
    {
        printf("\n ........");
    }
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------
/*
Write a C program to input electricity unit charges and calculate total electricity bill
according to the given condition: For the first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/
/*
int main ()
{

}
*/


//------------------------------------------------------------------------------------------------------

//                              *************LOOPS***********
/**
1. for() loop

syntax : for(<init>;<condition>;<incre,decrem,statement,expression)
*/

//wap to display hi msg
/**
int main()
{
    printf("Hiii");

    return 0;
}

//---------------------------------------------------------\

//wap to display hi msg 5 times

int main()
{
    printf("\n hii");
    printf("\n hii");
    printf("\n hii");
    printf("\n hii");
    printf("\n hii");
    return 0;

}

*/
//----------------------------------------------------------------------------------------------------

//wap to display hi msg  using loop
/**
int main ()
{
    int i;

    for(i=0;i<5;i++)
    {
        printf("\n hii");
    }
    return 0;
}

*/
//             ********************************or*********************
/**
int main ()
{
    int i;

    for(i=0;i<10;i+=2)
    {
        printf("\n hii");

    }
    return 0;
}
*/

//                   **************************or*********************************

/**
int main ()
{
    int i;

    for(i=50;i<75;i+=5)
    {
        printf("\n hii");

    }
    return 0;
}
*/

//                   ***********************or***************************************
/**
int main ()
{
    int i;

    for(i=75;i>50;i-=5)
    {
        printf("\n hii");

    }
    return 0;
}
*/

//---------------------------------------------------------------------------------

//WAP to display even nos from 1 to 100
/**
int main()
{
    int i;

    printf("\n Even nos from 1 to 100 are : ");
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("\t  %d",i);
        }

    }
    return 0;
}
*/

//-----------------------------------------------------------------------------------

//WAP to display even  and odd nos from 1 to 100
/**
int main()
{
    int i;

    printf("\n Even nos from 1 to 100 are : \n");
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("\t  %d",i);
        }

    }

    printf("\n Odd nos from 1 to 100 are : \n");
    for(i=1;i<=100;i++)
    {
       if(i%2!=0)
        {
            printf("\t  %d",i);
        }
    }
}
*/
//----------------------------------------------------------------------------------------------

//Another way to display even and odd nos

//WAP to display even nos from 1 to 100
/**
int main()
{
    int i;

    printf("\n Even nos from 1 to 100 are : ");
    for(i=0;i<=100;i=i+2)
    {
        printf("\t  %d",i);

    }
    return 0;
}
*/

//-----------------------------------------------------------------------------------------------------------------------

//WAP to display Odd nos from 1 to 100
/**
int main()
{
    int i;

    printf("\n Odd nos from 1 to 100 are : ");
    for(i=1;i<=100;i=i+2)
    {

        printf("\t  %d",i);
    }
    return 0;
}
*/

//-------------------------------------------------------------------------------------------------------------------------------------

// WAP to display All natural nos from 1 to n ..
/**
int main()
{
    int i,n;

    printf("\n Enter the last nos :");
    scanf("%d",&n);//ending point

    printf("\n All Natural nos from 1 to n nos ");
    for(i=1;i<=n;i++)
    {
        printf("\t %d",i);
    }
    return 0;
}

*/
//-----------------------------------------------------------------------------------------------------

// WAP to display All natural nos from N to N

/**
int main()
{
    int i,start,end;

    printf("\n enter the starting no : ");
    scanf("%d",&start);

    printf("\n enter the ending no : ");
    scanf("%d",&end);

    printf("\n Natural Numbers from N to N are :");
    for(i=start;i<=end;i++)
    {
        printf("\t %d ",i);
    }
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------

//WAP to display addition of 1 to 10 nos

/**
int main()
{
    int i,add=0;

    for(i=1;i<=10;i++)
    {
        add=add+i;
        printf("\n %d",add);
    }

    printf("\n addition of 1 to 10 nos is :%d",add);
    return 0;
}
*/

//----------------------------------------------------------------------------------------------------

//WAP to display addition of 1 to 100 nos

/**
int main()
{
    int i,add=0;

    for(i=1;i<=100;i++)
    {
        add=add+i;
        printf("\n Sum:%d",add);
    }

    printf("\n addition of 1 to 10 nos is :%d",add);
    return 0;
}
*/

//----------------------------------------------------------------------------------------------------

//WAP to add any 10 number entered through keyboard
/**
int main()
{
    int i,add=0,no;

    printf("\n enter any 10 numbers through keyboard : ");

    for(i=0;i<10;i++)
    {
        scanf("%d",&no);
        add = add+no;
        printf("\n No :       %d    ",no);

    }
    printf("\n addition of ten nos is : %d",add);
    return 0;

}
*/

//-----------------------------------------------------------

//WAP to enter any no and add all digits in it.
/**
int main ()
{
    int i,no,rem,add=0;

    printf("\n enter any number : ");
    scanf("%d",&no);

    for(  ;no!=0;  )
    {
        rem = no%10;
        add = add+rem;
        no = no/10;
    }
    printf("\n addition of all digits is : %d",add);
    return 0;
}
*/
//----------------------------------------OR--------------------------------------------------------
/**
int main ()
{
    int i,no,rem,add;

    printf("\n enter any number : ");
    scanf("%d",&no);

    for(add=0;no!=0;no=no/10)
    {
        rem = no%10;
        add = add+rem;
    }
    printf("\n addition of all digits is : %d",add);
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------

//WAP to Enter any nos and display the reverse no
/**
int main ()
{
    int i,no,rem,rev=0;

    printf("\n enter any number : ");
    scanf("%d",&no);

    for(  ;no!=0;  )
    {
        rem = no%10;
        rev = (rev*10)+rem;
        no = no/10;
    }
    printf("\n The Reversed no is : %d",rev);
    return 0;
}
*/
//-------------------------------------------OR--------------------------------------------------------------
/**
int main ()
{
    int i,no,rem,rev;

    printf("\n enter any number : ");
    scanf("%d",&no);

    for(rev=0;no!=0;no=no/10  )
    {
        rem = no%10;
        rev = (rev*10)+rem;
    }
    printf("\n The Reversed no is : %d",rev);
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------

//WAP to enter any no and add even and odd digits  separately

/**
int main()
{
    int i,no,rem,even=0,odd=0;

    printf("\n enter any number : ");
    scanf("%d",&no);

    for (  ;no!=0;no = no/10)
    {
        rem = no%10;
        if(no%2==0)
        {
            even = even+rem;
        }
        else
        {
            odd=odd+rem;
        }
    }

    printf("\n the addition of even no is : %d",even);
    printf("\n the addition of odd no is : %d",odd);
    return 0;
}
*/

//-----------------------------------------------------------------------------------------------

//WAP to enter any no and count even digit and odd digit from it .


/**
int main()
{
    int i,no,rem,evencount=0,oddcount=0;

    printf("\n enter any number : ");
    scanf("%d",&no);
    printf("\n No is : %d",no);

    for (  ;no!=0;no = no/10)
    {
        rem = no%10;
        if(rem%2==0)
        {
            evencount++;
            printf("\t  evencountss : %d",evencount );
        }
        else
        {
            oddcount++;
            printf("\t  oddcountss : %d",oddcount);
        }
    }

    printf("\n no of evencounts is : %d ",evencount);
    printf("\n no of oddcounts is : %d",oddcount);

    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------------

//WAP to enter any no and count the digits in it.
/*
 no         rem         count=0
 5498       8               1
 549        9               2
 54         4               3
 5          5               4
 0          0               4
*/
/**
int main()
{
    int no,rem,count=0;

    printf("\n enter any number : ");
    scanf("%d",&no);

    for( ;no!=0; )
    {
        rem = no%10;
        count++;
        no = no/10;
    }
    printf("\n the number of digits are : %d",count);
    return 0;
}
*/
//                     ---------------OR-----------------------

/**
 int main()
 {
    int no,count;

    printf("\n Enter any no : ");
    scanf("%d",&no);

    for(count=0 ;no!=0;count++,no=no/10);//one line execution

    printf("\n the no of digits is : %d",count);
    return 0;
 }
 */
 //-----------------------------------------------------------------------------------------------

//WAP to enter any number and find max digit from it

/*
no            rem        max=0
38569          9          9
3856           6          9
385            5          9
38             8          9
3              3          9
0              0          9
*/

/**
int main()
{
    int no,rem,max=0;

    printf("\n enter any number : ");
    scanf("%d",&no);

    for( ;no!=0;no=no/10)
    {
        rem = no%10;
        if(rem>max)
        {
            max = rem;
        }
    }
    printf("\n the max no is : %d",max);
    return 0;
}
*/
//----------------------------------------------------------------------------------------

//WAP to find min digit from entered no

/**
int main()
{
    int no,rem,min;

    printf("\n Enter any no : ");
    scanf("%d",&no);

    for(min=9;no!=0;no=no/10)
    {
        rem=no%10;
        if(rem<min)
        {
            min=rem;

        }
    }
    printf("\n Minimum digit is : %d",min);
    return 0;
}
*/
//------------------------------------

//wap to display even max,even min,odd max,odd min from entered no      ********doubt**********
/**
int main()
{
    int no,rem,max=0,evenmax=0,oddmax=0,;

    printf("\n Enter any no : ");
    scanf("%d",&no);

    for( ;no!=0;no=no/10)
    {
        rem = no%10;
        if(rem>max)
        {
            if(rem%2==0)
            {
                evenmax=rem;
            }
            else
            {
                oddmax=rem;
            }

        }

        else if(rem<min)
        {
            if(rem%2==0)
            {
                evenmin = rem;
            }
            else
            {
                oddmin = rem;
            }
        }


    }
    printf("\n evenmax is : %d \t oddmax is : %d ",evenmax,oddmax);
    return 0;
}


*/
//--------------------------------------------------------------------------------------------------------------------

//wap to enter any  no and add alternate digits
/**
int main()
{
    int no,rem,s1=0,s2=0,i;

    printf("\n Enter any no : ");
    scanf("%d",&no);

    for(i=0;no!=0;i++)
    {
            rem=no%10;
            if(i%2==0)
            {
                s1=s1+rem;//6 4  2
            }
            else
            {
                s2=s2+rem;//1 8
            }
            no=no/10;

    }

    printf("\n S1 : %d \t s2 : %d",s1,s2);
    return 0;
}
*/
//-------------------------------------------ANOTHER WAY--------------------------------------------------

/**
int main()
{
    int no,rem,s1=0,s2=0,flg=0;

    printf("\n Enter any no : ");
    scanf("%d",&no);

    for( ;no!=0; )
    {
        rem = no%10;
        if(flg==0)
        {
            s1=s1+rem;
            flg=1;
        }
        else
        {
            s2=s2+rem;
            flg=0;
        }
        no = no/10;

    }
    printf("\n s1 : %d \t s2 : %d",s1,s2);
    return 0;
}
*/
//------------------------------------------------------------------------------------------------------------

//WAP to find the max no from entered no
/**
ex- 182943     max no - 984321

no          rem        d=9          max no=0
182943      3          3==9           0
18294       4          4==9           0
1829        9          9==9           9
182         2          2==9           9
18          8          8==9           9
1           1          1==9           9

no          rem        d=8          max no= (max no*10)+rem
182943      3          3==8           90
18294       4          4==8           90
1829        9          9==8           90
182         2          2==8           90
18          8          8==8           90 +8=98
1           1          1==8           98
               .
               .
               .
*/
/**
int main()
{
    int no,rem,d,maxno=0,tmp;

    printf("\n enter any no : ");
    scanf("%d",&no);
    tmp=no;

    for(d=9;d>=0;d--)
    {
        no=tmp;
        for( ;no!=0; )
        {
            rem=no%10;
            if(rem==d)
            {
                maxno = (maxno*10)+rem;
            }
            no = no/10;
        }

    }
    printf("\n max no generated is : %d",maxno);
    return 0;
}
*/

//------------------------------------------------------------------------------------------------------

//     *******************WHILE LOOP************************************

//WAP to display 1-10 nos
/**
int main()
{
    int i;

    i=1;
    while(i<=10)
    {
        printf("\n %d",i);
        i++;
    }
    return 0;
}
/

//Write a C program to print multiplication table of any number.
/**
int main ()
{
    int i,no;

    printf("\n enter any number :");
    scanf("%d",&no);

    printf("\n the table of entered no is :");

    i=1;
    while(i<=10)
    {
        printf("\n %d*%d --> %d",no,i,(no*i));
        i++;
    }
    return 0;
}
*/
//-------------------------------------------------------------

//Write a C program to calculate factorial of a number.
/**
int main()
{
    int no,fact=1,tmp;

    printf("\n enter any number ; ");
    scanf("%d",&no);
    tmp=no;


    while(no>1)
    {
        fact=fact*no;
        no--;
    }
    no=tmp;

    printf("\n the factorial of %d is %d",no,fact);
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------
//WAP to find evenmax and oddmax from entered no
/*
no      rem     d=9    evenmax       oddmax
43892   2       2==9    0               0
4389    9       9==9    0               9
438     8       8==9    0               9
43      3       3==9    0               9
4       4       4==9    0               9
0-----> loop false  d will decrease  by 1 i.e 8
-------------------------------------------

no      rem     d=8    evenmax       oddmax
43892   2       2==8    0               0
4389    9       9==8    0               9
438     8       8==8    8               9
43      3       3==8    8               9
4       4       4==8    8               9
0-----> loop false  d will decrease  by 1 i.e 7
-------------------------------------------
            .
            .
            .
no      rem     d=2    evenmax       oddmax
43892   2       2==2    842             93
4389    9       9==2    842             93
438     8       8==2    842             93
43      3       3==2    842             93
4       4       4==2    842             93
0-----> loop false  d will decrease  by 1 i.e 1
*/
/**
int main()
{
    int no,rem,evenmax=0,oddmax=0,d,tmp;;

    printf("\n Enter any no : ");
    scanf("%d",&no);

    tmp=no;
    d=9;
    while(d>=0)
    {
        no=tmp;
        while( no!=0)
        {
            rem=no%10;
            if(rem==d)
            {
                if(rem%2==0)
                {
                    evenmax=(evenmax*10)+rem;
                }
                else
                {
                    oddmax=(oddmax*10)+rem;
                }
            }
            no=no/10;
        }
        d--;
    }

    printf("\n Evenmax is %d \t Oddmax is %d ",evenmax,oddmax);

    return 0;
}
*/

//------------------------------------------------------------------------------------------

//Write a C program to check whether a number is palindrome or not.
/**
int main ()
{
    int i,no,rem,rev=0,tmp;

    printf("\n enter any number : ");
    scanf("%d",&no);
    tmp=no;

    while(no!=0)
    {

        rem = no%10;
        rev = (rev*10)+rem;
        no=no/10;
    }
    //printf("\n The Reversed no is : %d",rev);

    no=tmp;
    if(rev==no)
    {
         printf("\n the reversed number is palindrome : %d",rev);
    }
    else
    {
       printf("\n the reversed number is not palindrome : %d",rev);
    }
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------

//WAP to find digit count and add every digit^count
/**
int main()
{
    int no,rem,ans=1,dc,tmp,a,sum=0;

    printf("\n Enter any no : ");
    scanf("%d",&no);
    tmp=no;

    for(dc=0;no!=0;dc++,no/=10);
    printf("\n Digit Count  is  %d",dc);


    no=tmp;

    while(no!=0)
    {
        rem=no%10;
        a=0;
        ans=1;
        while(a<dc)
        {
            ans=ans*rem;
            a++;
        }
        sum=sum+ans;
        no=no/10;

    }
    printf("\n sum is : %d",sum);
    return 0;
}
*/
//---------------------------------------------------------------------

//WAP to find digit count and add every digit^count and check whether it is armstrong or not
/*
no      dc=0        rem         ans=1(ans=ans*rem)      sum=0
153     3            3          3*3*3=27                   27
15      3            5          5*5*5=125                  27+125=152
1       3            1          1*1*1=1                    152+1=153
0-----------------------------------------
*/
/**
int main()
{
    int no,rem,ans=1,dc,tmp,a,sum=0;

    printf("\n Enter any no : ");
    scanf("%d",&no);
    tmp=no;

    for(dc=0;no!=0;dc++,no/=10);
    printf("\n Digit Count  is  %d",dc);


    no=tmp;

    while(no!=0)
    {
        rem=no%10;
        a=0;
        ans=1;
        while(a<dc)
        {
            ans=ans*rem;

            a++;
        }
        sum=sum+ans;
        no=no/10;
    }
    no=tmp;
    if(sum==no)
    {
        printf("\n %d  is Armstrong no ",no);
    }
    else
    {
        printf("\n %d is not Armstrong",no);
    }


    return 0;

}
*/
//----------------------------------------------------------------------------------------------------

//Write a C program to find frequency / repitition  of each digit in a given integer.

/**
int main()
{
    int no,rem,d=0,count,tmp;

    printf("\n Enter any no : ");
    scanf("%d",&no);
    tmp=no;

    while(d<10)
    {
        count=0;
        no=tmp;
        while(no!=0)
        {
            rem=no%10;
            if(rem==d)
            {
               count++;
            }
            no=no/10;

        }
        if(count>1)
        {
            printf("\n %d ocuured %d times",d,count);
        }
        d++;
    }

    return 0;
}
*/
//------------------------------------------------------------------------------
// WAP to find missing digits from entered no
/*
no      rem         d=0          md
3951    1           1==0
395     5           5==0
39      9           9==0
3       3           3==0
.
.
.

MISSING DIGIT IS 0 2 4 6 7 8
-----------------------------------------
*/
/**
int main()
{
    int no,rem,md,d,flg,tmp;

    printf("\n Enter any no : ");
    scanf("%d",&no);
    tmp=no;

    printf("\n missing digits are :");
    for(d=0;d<10;d++)
    {
        flg=0;
        no=tmp;
        while(no!=0)
        {
            rem=no%10;
            if(rem==d)
            {
                flg=1;
                break;
            }
            no=no/10;
        }
        if(flg==0)
        {
            printf("\n %d ",d);
        }
    }
    return 0;
}
*/

//-----------------------------------------
//WAP to display entered no is prime or not
/**
int main()
{
    int no,d=2,flg=0;

    printf("\n Enter any no : ");
    scanf("%d",&no);//50

    while(d<=(no/2)) //2<=25
    {
        if(no%d==0)
        {
            flg=1;
            break;
        }
        d++;
    }
    if(flg==0 && no!=1)
    {
        printf("\n %d is prime ",no);
    }
    else
    {
        printf("\n %d is not prime ",no);
    }
    return 0;
}
*/

//------------------------------------------------------------------------------------------------------------

//        *********** do{}whlie***************

//WAP to display 1 to 10 nos usiong do while loop
/**
#include<stdio.h>
int main()
{
    int i=1;

    do
    {
        printf("\n %d ",i);
        i++;
    }while(i<=10);

    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------

//WAP to display all character set with its ascii value.
/**
#include<stdio.h>
int main()
{
    int i=0;

    do
    {
        if((i>=48 && i<=57) ||(i>=65 && i<=97)||(i>=97 &&i<=122))
        printf("\n %d --->%c",i,i);
        i++;
    }while(i<256);
    return 0;

}
*/

//-----------------------------------------------------------------------------------------------------------
//WAP to display entered no prime or not
/**
int main()
{
    int no,d=2,flg=0;

    printf("\n Enter any no : ");
    scanf("%d",&no);

    do
    {
        if(no%d==0)
        {
            flg=1;
            break;
        }
        d++;
    }while(d<=(no/2));

    if(flg==0 && no!=1)
    {
        printf("\n %d no is prime ",no);
    }
    else
    {
        printf("\n %d no is not  prime ",no);
    }
    return 0;
}
*/
//------------------------------------------------------------------------------------------------------------
//WAP to display prime list between 1 to 100
/**
int main()
{
    int i,d,flg;

    printf("\n Prime no are  : ");
    printf("\n %d",2);
    for(i=1;i<=100;i++)
    {
        d=2;
        flg=0;
        do
        {
            if(i%d==0)
            {
                flg=1;
                break;
            }
            d++;
        }while(d<=(i/2));

        if(flg==0 && i!=1)
        {
            printf("\n %d",i);
        }

    }
    return 0;
}
*/


//-----------------------------------------------------------------------------------------------------------
//      *******list of questions on for(),while() and d0{}while

//      FOR LOOP
//Write a C program to print all natural numbers from 1 to n.
/**
int main()
{
    int i,n;

    printf("\n enter the last number : ");
    scanf("%d",&n);

    printf("\n natural nos from 1 to n are : ");

    for(i=0;i<=n;i++)
    {
        printf("\t %d",i);
    }
    return 0;

}
*/
//------------------------------------------------------------------------------

//Write a C program to print all natural numbers in reverse (from n to 1)
/**
int main()
{
    int i,n;

    printf("\n enter the last number : ");
    scanf("%d",&n);

    printf("\n natural nos from n to 1 are : ");

    for(i=n;i>=1;i--)
    {
        printf("\t %d",i);
    }
    return 0;

}
*/
//-----------------------------------------------------------------------------------

//Write a C program to print all alphabets from a to z.
/**
int main()
{
    char ch;

    printf("\n alphabets from a to z are : ");

    for (ch=97;ch<=122;ch++)
    {
        printf("\t %c",ch);
    }
    return 0;
}
*/
//------------------------------------------------------------------------------------------

//Write a C program to print all even numbers between 1 to 100.
/*
int main()
{
    int i;

    printf("\n Even nos from 1 to 100 are : ");
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("\t  %d",i);
        }

    }
    return 0;
}
*/
//                 *****OR******
/**
int main()
{
    int i;

    printf("\n Even nos from 1 to 100 are : ");
    for(i=0;i<=100;i+=2)
    {
        printf("\t %d",i);
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------

//Write a C program to print all odd numbers between 1 to 100.
/**
int main()
{
    int i;

    printf("\n Even nos from 1 to 100 are : ");
    for(i=1;i<=100;i+=2)
    {
        printf("\t %d",i);
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------
//Write a C program to find the sum of all natural numbers between 1 to n.
/**
int main()
{
    int i,n,add=0;

    printf("\n enter the Nth no :");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        add = add+i;
    }
    printf("\n addition of all natural nos from 1 to n is : %d",add);
    return 0;
}
*/
//--------------------------------------------------------------------------

//Write a C program to find the sum of all even numbers between 1 to n.
/**
int main()
{
    int i,n,add=0;

    printf("\n enter the Nth no :");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
           add = add+i;
        }
    }
    printf("\n addition of all  even natural nos from 1 to n is : %d",add);
    return 0;
}
*/
//--------------------------------------------------------------------------------------
//Write a C program to find sum of all odd numbers between 1 to n.
/**
int main()
{
    int i,n,add=0;

    printf("\n enter the Nth no :");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
           add = add+i;
        }
    }
    printf("\n addition of all natural nos from 1 to n is : %d",add);
    return 0;
}
*/
//----------------------------------------------------------------------------------------

//Write a C program to print multiplication table of any number.
/**
int main ()
{
    int i,no;

    printf("\n enter any number :");
    scanf("%d",&no);

    printf("\n the table of entered no is :");
    for(i=1;i<=10;i++)
    {
        printf("\n %d*%d --> %d",no,i,(no*i));
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------

//Write a C program to count number of digits in a number.
/**
int main()
{
    int no,count;

    printf("\n enter any number : ");
    scanf("%d",&no);

    for(count=0;no!=0;count++,no=no/10);
    {
        printf("\n count is :%d",count);
    }
    return 0;
}
*/
//------------------------------------------------------------------------------------------
//Write a C program to enter a number and print its reverse.
/**
int main ()
{
    int i,no,rem,rev;

    printf("\n enter any number : ");
    scanf("%d",&no);

    for(rev=0;no!=0;no=no/10  )
    {
        rem = no%10;
        rev = (rev*10)+rem;
    }
    printf("\n The Reversed no is : %d",rev);
    return 0;
}
*/
//-------------------------------------------------------------------------------------------

//Write a C program to check whether a number is palindrome or not.
/**
int main ()
{
    int i,no,rem,rev=0,tmp;

    printf("\n enter any number : ");
    scanf("%d",&no);
    tmp=no;

    for( ;no!=0;no=no/10 )
    {

        rem = no%10;
        rev = (rev*10)+rem;
    }
    //printf("\n The Reversed no is : %d",rev);

    no=tmp;
    if(rev==no)
    {
         printf("\n the reversed number is palindrome : %d",rev);
    }
    else
    {
       printf("\n the reversed number is not palindrome : %d",rev);
    }
    return 0;
}
*/

//------------------------------------------------------------------------------------
//Write a C program to find frequency of each digit in a given integer.
/**
int main()
{
    int no,rem,d,count,tmp;

    printf("\n Enter any no : ");
    scanf("%d",&no);
    tmp=no;

    for(d=0;d<10;d++)
    {
        count=0;
        no=tmp;
        while(no!=0)
        {
            rem=no%10;
            if(rem==d)
            {
               count++;
            }
            no=no/10;
        }
        if(count>1)
        {
            printf("\n %d occurred  %d time ",d,count);
        }
     }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------

//Write a C program to enter a number and print it in words.
/**
int main ()
{
    int no,rem,rev=0,tmp;

    printf("\n enter any number : ");
    scanf("%d",&no);
    tmp=no;

    for( ;no!=0;no=no/10 )
    {

        rem = no%10;
        rev = (rev*10)+rem;
    }
    //printf("\n The Reversed no is : %d",rev);

    for( ;rev!=0;rev=rev/10)
    {
        rem = rev%10;
        if(rem==1)
        {
            printf("\t one ",rem);
        }
        else if(rem==2)
        {
            printf("\t two ",rem);
        }
        else if(rem==3)
        {
            printf("\t three ",rem);
        }
        else if(rem==4)
        {
            printf("\t four ",rem);
        }
        else if(rem==5)
        {
            printf("\t five ",rem);
        }
        else if(rem==6)
        {
            printf("\t six ",rem);
        }
        else if(rem==7)
        {
            printf("\t seven ",rem);
        }
        else if(rem==8)
        {
            printf("\t eight ",rem);
        }
        else if(rem==9)
        {
            printf("\t nine ",rem);
        }
    }
    return 0;
}
*/

//-----------------------------------------------------------------------------------------\

//Write a C program to print all ASCII character with their values.
/**
int main()
{
    int i;

    for(i=0;i<256;i++)
    {
        if((i>=48 && i<=57) ||(i>=65 && i<=97)||(i>=97 &&i<=122))
        printf("\n %d --->%c",i,i);

    }
    return 0;

}
*/
//-------------------------------------------------------------------------------------------

//Write a C program to find power of a number using for loop.
/**
int main()
{
    int i,x,y,pow=1;

    printf("\n enter the value of x : ");
    scanf("%d",&x);

    printf("\n enter the value of y : ");
    scanf("%d",&y);


    for (i=1;i<=y;i++)
    {
        pow = pow*x;
    }

    printf("\n the power of a number is : %d",pow);
    return 0;
}
*/

//----------------------------------------------------------------------------------------
// Write a C program to find first and last digit of a number.
/**
int main()
{
    int no,firstD,lastD;

    printf("\n enter any number : ");
    scanf("%d",&no);

    lastD = no%10;

    firstD = no;
    for(firstD=0 ;firstD>=10; )
    {
        firstD = firstD/10;
    }
    printf("\n first digit is : %d",firstD);
    printf("\n last digit is : %d",lastD);

    return 0;
}
*/
//-------------------------------------------------------------------------
//Write a C program to find sum of first and last digit of a number.
/**
int main()
{
    int no,firstD,lastD,sum=0;

    printf("\n enter any number : ");
    scanf("%d",&no);

    lastD = no%10;

    firstD = no;
    for( ;firstD>=10; )
    {
        firstD = firstD/10;
    }
    sum = firstD+lastD;
    printf("\n sum of first and last digit is : %d",sum);

    return 0;
}
*/
//---------------------------------------------------------------------------------------
//Write a C program to swap first and last digits of a number.

/**
int main()
{
    int no,dc=0,rem,ld,fd,nn=0,nno=0,i;

    printf("\n enter any number : ");
    scanf("%d",&no);
    ld=no%10;
    while(no!=0)
    {
        rem=no%10;
        nn=(nn*10)+rem;
        dc++;
        no=no/10;
    }
    fd=rem;

    printf("\n Digit count %d \t First digit %d \t LAst digit %d \t Reverse no %d ",dc,fd,ld,nn);
    //---------fd ld dc nn--------------------------------------
    //4982 ==> 2894
    for(i=1;i<=dc;i++)
    {
        rem=nn%10;//4
        if(rem==fd && i==1)
        {
            nno=(nno*10)+ld;//2
            //printf("\n 1st  %d ",nno);
        }
        else if(rem==ld && i==dc)
        {
            nno=(nno*10)+fd;//d2
            //printf("\n 2nd %d ",nno);
        }
        else
        {
            nno=(nno*10)+rem;
            //printf("\n3rd Is %d ",nno);
        }
        nn=nn/10;
    }

    printf("\n New Number is %d ",nno);
    return 0;
}
*/
//-----------------------------------------------------------------------------------------
//Write a C program to calculate sum of digits of a number.
//Write a C program to calculate product of digits of a number
/**
int main ()
{
    int i,no,rem,add=0,prod=1;

    printf("\n enter any number : ");
    scanf("%d",&no);

    for(  ;no!=0;  )
    {
        rem = no%10;
        add = add+rem;
        prod = prod*rem;
        no = no/10;
    }
    printf("\n addition of all digits is : %d \t product is :%d",add,prod);
    return 0;
}
*/
//---------------------------------------------------------------------------
//Write a C program to check whether a number is Armstrong number or not.
/*
no      dc=0        rem         ans=1(ans=ans*rem)      sum=0
153     3            3          3*3*3=27                   27
15      3            5          5*5*5=125                  27+125=152
1       3            1          1*1*1=1                    152+1=153
0-----------------------------------------
*/
/**
int main()
{
    int no,rem,ans,dc,tmp,a,sum=0;

    printf("\n Enter any no : ");
    scanf("%d",&no);
    tmp=no;

    for(dc=0;no!=0;dc++,no/=10);
    printf("\n Digit Count  is  %d",dc);


    no=tmp;

    for( ;no!=0;no=no/10)
    {
        rem=no%10;
        a=0;
        ans=1;
        while(a<dc)
        {
            ans=ans*rem;
            a++;
        }
        sum=sum+ans;
    }

    printf("\n sum is :%d",sum);
    no=tmp;
    if(sum==no)
    {
        printf("\n %d  is Armstrong no ",no);
    }
    else
    {
        printf("\n %d is not Armstrong",no);
    }
    return 0;
}
*/
//------------------------------------------------------------------------------
//Write a C program to find all factors of a number.
/**
int main()
{
    int i,no;

    printf("\n enter any no : ");
    scanf("%d",&no);

    printf("\t factors of enterd no are :");
    for(i=1;i<=(no/2);i++)
    {
        if(no%i==0)
        {
           printf("\t %d",i);
        }
    }
    return 0;
}
*/
//------------------------------------------------------------------------------
//Write a C program to check whether a number is Perfect number or not.
/**
int main()
{
    int i,no,sum=0;

    printf("\n enter any no : ");
    scanf("%d",&no);

    for(i=1;i<=(no/2);i++)
    {
        if(no%i==0)
        {
           //printf("\t %d",i);
           sum=sum+i;
        }
    }
    printf("\n the sum of factors of enterd no is %d",sum);

    if(sum==no)
    {
        printf("\n the enterd no is perfect no");
    }
    else
    {
        printf("\n it is not a perfect number");
    }

    return 0;
}
*/
//-------------------------------------------------------------------------------
//Write a C program to print all Perfect numbers between 1 to n.
/**
int main()
{
    int i,no,n,sum=0,tmp;

    printf("\n enter the nth number : ");
    scanf("%d",&n);


    printf("\n perfect no from 1 to n are :");
    for(no=1;no<=n;no++)
    {
        sum=0;
        tmp=no;
        for(i=1;i<=(no/2);i++)
        {
            if(no%i==0)
            {
               //printf("\t %d",i);
               sum=sum+i;
            }
        }

        no=tmp;
        if(no== sum)
        {
            printf("\n %d",no);
        }

    }
    return 0;
}
*/
//---------------------------------------------------------------------------
//Write a C program to find HCF of two numbers.
/**
int main()
{
    int x,y,i,fact=1,max=0;

    printf("\n enter the value of x and y : ");
    scanf("%d%d",&x,&y);

    max=(x>y)? x : y;
    printf("\n maxinum no is %d",max);

    for(i=2;i<(max/2);i++)
    {
        if(x%i==0 && y%i==0)
        {
            fact = fact*i;
        }
    }
    printf("\n HCF of entered nos is :%d",fact);
    return 0;
}
*/
//--------------------------------------------------------------
// WAP to Find the LCM of two entered number
/**
int main()
{
    int x,y,i,HCF=1,max=0,z=0,LCM;

    printf("\n enter the value of x and y : ");
    scanf("%d%d",&x,&y);

    max=(x>y)? x : y;
    //printf("\n maxinum no is %d",max);

    for(i=2;i<(max/2);i++)
    {
        if(x%i==0 && y%i==0)
        {
            HCF = HCF*i;
        }
    }
    //printf("\n HCF of entered nos is :%d",HCF);

    z=x*y;
    LCM = z/HCF;

    printf("\n LCM of entered number is :%d",LCM);
    return 0;
}
*/
//------------------------------------------------------------------------
//Write a C program to check whether a number is Strong number or not.


//------------------------------------------------------------------------------------------------

//                         WHILE LOOP

//Write a C program to print all natural numbers from 1 to n.
/**
int main()
{
    int i,n;

    printf("\n enter the last number : ");
    scanf("%d",&n);

    printf("\n natural nos from 1 to n are : ");

    i=0;
    while(i<=n)
    {
        printf("\t %d",i);
        i++;
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------

//Write a C program to print all natural numbers in reverse (from n to 1)

/**
int main()
{
    int i,n;

    printf("\n enter the last number : ");
    scanf("%d",&n);

    printf("\n natural nos from n to 1 are : ");

    i=n;
    while(i>=1)
    {
        printf("\t %d",i);
        i--;
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------
//Write a C program to print all alphabets from a to z.
/**
int main()
{
    char ch;

    printf("\n alphabets from a to z are : ");

    ch=97;
    while (ch<=122)
    {
        printf("\t %c",ch);
        ch++;
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------------
//Write a C program to print all even numbers between 1 to 100.
/**
int main()
{
    int i;

    printf("\n Even nos from 1 to 100 are : ");

    i=0;
    while(i<=100)
    {
        printf("\t %d",i);
        i+=2;
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------
//Write a C program to print all odd numbers between 1 to 100.
/**
int main()
{
    int i;

    printf("\n Even nos from 1 to 100 are : ");

    i=1;
    while(i<=100)
    {
        printf("\t %d",i);
        i+=2;
    }
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------
//Write a C program to find the sum of all natural numbers between 1 to n.
/**
int main()
{
    int i,n,add=0;

    printf("\n enter the Nth no :");
    scanf("%d",&n);

    i=0;
    while(i<=n)
    {
        add = add+i;
        i++;
    }
    printf("\n addition of all natural nos from 1 to n is : %d",add);
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------
//Write a C program to find the sum of all even numbers between 1 to n.
/**
int main()
{
    int i,n,add=0;

    printf("\n enter the Nth no :");
    scanf("%d",&n);

    i=0;
    while(i<=n)
    {
        if(i%2==0)
        {
           add = add+i;

        }
        i++;
    }
    printf("\n addition of all natural nos from 1 to n is : %d",add);
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------------

//Write a C program to find sum of all odd numbers between 1 to n.
/**
int main()
{
    int i,n,add=0;

    printf("\n enter the Nth no :");
    scanf("%d",&n);

    i=0;
    while(i<=n)
    {
        if(i%2!=0)
        {
           add = add+i;
        }
        i++;
    }
    printf("\n addition of all odd natural nos from 1 to n is : %d",add);
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------

//Write a C program to print multiplication table of any number.
/**
int main ()
{
    int i,no;

    printf("\n enter any number :");
    scanf("%d",&no);

    printf("\n the table of entered no is :");

    i=1;
    while(i<=10)
    {
        printf("\n %d*%d --> %d",no,i,(no*i));
        i++;
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------------
//Write a C program to count number of digits in a number.

/**
int main()
{
    int no,count;

    printf("\n enter any number : ");
    scanf("%d",&no);

    count=0;
    while(no!=0)
    {
        count++;
        no=no/10;
    }

    printf("\n count is :%d",count);
    return 0;
}
*/
//--------------------------------------------------------------------------------------------
//Write a C program to enter a number and print its reverse.

/**
int main ()
{
    int i,no,rem,rev;

    printf("\n enter any number : ");
    scanf("%d",&no);

    rev=0;
    while(no!=0)
    {
        rem = no%10;
        rev = (rev*10)+rem;
        no=no/10;
    }
    printf("\n The Reversed no is : %d",rev);
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------
//Write a C program to check whether a number is palindrome or not.
/**
int main ()
{
    int i,no,rem,rev=0,tmp;

    printf("\n enter any number : ");
    scanf("%d",&no);
    tmp=no;

    while(no!=0)
    {

        rem = no%10;
        rev = (rev*10)+rem;
        no=no/10;
    }
    //printf("\n The Reversed no is : %d",rev);

    no=tmp;
    if(rev==no)
    {
         printf("\n the reversed number is palindrome : %d",rev);
    }
    else
    {
       printf("\n the reversed number is not palindrome : %d",rev);
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------------

//Write a C program to find frequency of each digit in a given integer.

/**
int main()
{
    int no,rem,d=0,count,tmp;

    printf("\n Enter any no : ");
    scanf("%d",&no);
    tmp=no;

    while(d<10)
    {
        count=0;
        no=tmp;
        while(no!=0)
        {
            rem=no%10;
            if(rem==d)
            {
               count++;
            }
            no=no/10;

        }
        if(count>1)
        {
            printf("\n %d ocuured %d times",d,count);
        }
        d++;
    }

    return 0;
}
*/
//------------------------------------------------------------------------------

//Write a C program to enter a number and print it in words.
/**
int main ()
{
    int no,rem,rev=0,tmp;

    printf("\n enter any number : ");
    scanf("%d",&no);
    tmp=no;

    for( ;no!=0;no=no/10 )
    {

        rem = no%10;
        rev = (rev*10)+rem;
    }
    //printf("\n The Reversed no is : %d",rev);

    while( rev!=0)
    {
        rem = rev%10;
        if(rem==1)
        {
            printf("\t one ",rem);
        }
        else if(rem==2)
        {
            printf("\t two ",rem);
        }
        else if(rem==3)
        {
            printf("\t three ",rem);
        }
        else if(rem==4)
        {
            printf("\t four ",rem);
        }
        else if(rem==5)
        {
            printf("\t five ",rem);
        }
        else if(rem==6)
        {
            printf("\t six ",rem);
        }
        else if(rem==7)
        {
            printf("\t seven ",rem);
        }
        else if(rem==8)
        {
            printf("\t eight ",rem);
        }
        else if(rem==9)
        {
            printf("\t nine ",rem);
        }
        rev=rev/10;
    }
    return 0;
}
*/


//----------------------------------------------------------------------------------

//Write a C program to print all ASCII character with their values.

/**
int main()
{
    int i=0;

    while(i<256)
    {
        if((i>=48 && i<=57) ||(i>=65 && i<=97)||(i>=97 &&i<=122))
        printf("\n %d --->%c",i,i);
        i++;

    }
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------

//Write a C program to find power of a number using while loop.
/**
int main()
{
    int i,x,y,pow=1;

    printf("\n enter the value of x : ");
    scanf("%d",&x);

    printf("\n enter the value of y : ");
    scanf("%d",&y);

    i=1;
    while (i<=y)
    {
        pow = pow*x;
        i++;
    }

    printf("\n the power of a number is : %d",pow);
    return 0;
}
*/

//------------------------------------------------------------------------------------------------------------
//Write a C program to calculate factorial of a number.
/**
int main()
{
    int no,fact=1,tmp;

    printf("\n enter any number ; ");
    scanf("%d",&no);
    tmp=no;


    while(no>1)
    {
        fact=fact*no;
        no--;
    }
    no=tmp;

    printf("\n the factorial of %d is %d",no,fact);
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------
// Write a C program to find first and last digit of a number.
/**
int main()
{
    int no,firstD,lastD;

    printf("\n enter any number : ");
    scanf("%d",&no);

    lastD = no%10;

    firstD = no;
    while(firstD>=10)
    {
        firstD = firstD/10;
    }
    printf("\n first digit is : %d",firstD);
    printf("\n last digit is : %d",lastD);

    return 0;
}
*/
//------------------------------------------------------------------------------------
//Write a C program to find sum of first and last digit of a number.
/**
int main()
{
    int no,firstD,lastD,sum=0;

    printf("\n enter any number : ");
    scanf("%d",&no);

    lastD = no%10;

    firstD = no;
    while(firstD>=10)
    {
        firstD = firstD/10;
    }
    sum = firstD+lastD;
    printf("\n sum of first and last digit is : %d",sum);

    return 0;
}
*/
//------------------------------------------------------------------------------
//Write a C program to swap first and last digits of a number.
/**
int main()
{
    int no,dc=0,rem,ld,fd,nn=0,nno=0,i;

    printf("\n enter any number : ");
    scanf("%d",&no);
    ld=no%10;
    while(no!=0)
    {
        rem=no%10;
        nn=(nn*10)+rem;
        dc++;
        no=no/10;
    }
    fd=rem;

    printf("\n Digit count %d \t First digit %d \t LAst digit %d \t Reverse no %d ",dc,fd,ld,nn);
    //---------fd ld dc nn--------------------------------------
    //4982 ==> 2894
    i=1;
    while(i<=dc)
    {
        rem=nn%10;//4
        if(rem==fd && i==1)
        {
            nno=(nno*10)+ld;//2
            //printf("\n 1st  %d ",nno);
        }
        else if(rem==ld && i==dc)
        {
            nno=(nno*10)+fd;//d2
            //printf("\n 2nd %d ",nno);
        }
        else
        {
            nno=(nno*10)+rem;
            //printf("\n3rd Is %d ",nno);
        }
        i++;
        nn=nn/10;
    }

    printf("\n New Number is %d ",nno);
    return 0;
}
*/

//-------------------------------------------------------------------------------------
//Write a C program to calculate sum of digits of a number.
//Write a C program to calculate product of digits of a number
/**
int main ()
{
    int i,no,rem,add=0,prod=1;

    printf("\n enter any number : ");
    scanf("%d",&no);

    while( no!=0)
    {
        rem = no%10;
        add = add+rem;
        prod = prod*rem;
        no = no/10;
    }
    printf("\n addition of all digits is : %d \t product is :%d",add,prod);
    return 0;
}
*/
//-----------------------------------------------------------------------------------
//Write a C program to check whether a number is Armstrong number or not.

/**
int main()
{
    int no,rem,ans=1,dc,tmp,a,sum=0;

    printf("\n Enter any no : ");
    scanf("%d",&no);
    tmp=no;

    for(dc=0;no!=0;dc++,no/=10);
    printf("\n Digit Count  is  %d",dc);


    no=tmp;

    while(no!=0)
    {
        rem=no%10;
        a=0;
        ans=1;
        while(a<dc)
        {
            ans=ans*rem;

            a++;
        }
        sum=sum+ans;
        no=no/10;
    }
    no=tmp;
    if(sum==no)
    {
        printf("\n %d  is Armstrong ",no);
    }
    else
    {
        printf("\n %d is not Armstrong",no);
    }


    return 0;

}
*/
//--------------------------------------------------------------------------------
//Write a C program to find all factors of a number.
/**
int main()
{
    int i,no;

    printf("\n enter any no : ");
    scanf("%d",&no);

    printf("\t factors of enterd no are :");

    i=1;
    while(i<=(no/2))
    {
        if(no%i==0)
        {
           printf("\t %d",i);
        }
        i++;
    }
    return 0;
}
*/
//----------------------------------------------------------------------------
//Write a C program to check whether a number is Perfect number or not.
/**
int main()
{
    int i,no,sum=0;

    printf("\n enter any no : ");
    scanf("%d",&no);

    printf("\t factors of enterd no are :");

    i=1;
    while(i<=(no/2))
    {
        if(no%i==0)
        {
           printf("\t %d",i);
           sum=sum+i;
        }
        i++;
    }
    printf("\n the sum of factors of enterd no is %d",sum);

    if(sum==no)
    {
        printf("\n the enterd numbder is perfect no");
    }
    else
    {
        printf("\n it is not a perfect number");
    }

    return 0;
}
*/
//------------------------------------------------------------------------------------------------
//Write a C program to print all Perfect numbers between 1 to n.
/**
int main()
{
    int i,no,n,sum=0,tmp;

    printf("\n enter the nth number : ");
    scanf("%d",&n);


    printf("\n perfect no from 1 to n are :");
    no=1;
    while(no<=n)
    {
        sum=0;
        tmp=no;
        i=1;
        while(i<=(no/2))
        {
            if(no%i==0)
            {
               //printf("\t %d",i);
               sum=sum+i;
            }
            i++;
        }

        no=tmp;
        if(no== sum)
        {
            printf("\n %d",no);
        }
        no++;
    }

    return 0;
}
*/
//-----------------------------------------------------------------------------------
//Write a C program to find HCF (gcd) of two numbers entered through keyboard.
/**
int main()
{
    int x,y,i,HCF=1,max=0;

    printf("\n enter the value of x and y : ");
    scanf("%d%d",&x,&y);

    max=(x>y)? x : y;
    //printf("\n maxinum no is %d",max);

    i=2;
    while(i<(max/2))
    {
        if(x%i==0 && y%i==0)
        {
            HCF = HCF*i;
        }
        i++;
    }
    printf("\n HCF of entered nos is :%d",fact);
    return 0;
}
*/
//------------------------------------------------------------------------
//Write a C program to find LCM of two numbers.
/**
int main()
{
    int x,y,i,HCF=1,max=0,z=0,LCM;

    printf("\n enter the value of x and y : ");
    scanf("%d%d",&x,&y);

    max=(x>y)? x : y;
    //printf("\n maxinum no is %d",max);

    i=2;
    while(i<(max/2))
    {
        if(x%i==0 && y%i==0)
        {
            HCF = HCF*i;
        }
        i++;
    }
    //printf("\n HCF of entered nos is :%d",HCF);

    z=x*y;

    LCM = z/HCF;
    printf("\n LCM of entered number is :%d",LCM);

    return 0;
}
*/

//--------------------------------------------------------------------------------------------------------------

//                      ************patterns************************

/**
int main()
{
    printf("*");
    return 0;
}
*/
//---------------------------------------------
/**
int main ()
{
    printf("*****");
    return 0;
}
*/

//                 ****with loop***
/**
int main ()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("*");

    }
    return 0;
}
*/

//-------------------------------------------------------------------------------------
/*
display it
     *****
     *****
     *****
     *****
     *****
*/
/**
int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n *****");

    }
    return 0;
}
*/
//                 ***wuth loop*****

/**
int main()
{
    int i,j;

    for(i=0;i<5;i++) //Number of lines
    {
        for(j=0;j<5;j++) // Number of * per line
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

//------------------------------------------------------------------------------------
/*
//dispay it using loop
*****
*   *                         i=0&&4-->*****
*   *                         j=0&&4-->*****
*   *
*****
*/
/**
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==0 || i==4)
            {
                printf("*");
            }
            else if(j==0 || j==4)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/


//-----------------------------------------------------------------
/*
display it using loops

*----
**---
***--
****-
*****

*/

/**
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
           //if(j<=i)
           printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

//---------------------------------------------------------------------------------------------------------
//display it with loop
//     *****
//     -****
//     --***
//     ---**
//     ----*

/**
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
           if(j>=i)
           {
               printf("*");
           }
           else
           {
               printf("_");
           }
        }
        printf("\n");
    }
    return 0;
}
*/

//---------------------------------------------------------------------
/*

*****
****
***
**
*
*/
/**
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<(5-i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------

/*

    *
   **
  ***
 ****
*****

*/
/**
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<4-i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------
//wap to display

/*
     *
    * *
   * * *
  * * * *
 * * * * *

 */
/**
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<4-i)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------------
//wap to display
/*
 * * * * *
  * * * *
   * * *
    * *
     *
*/
/**
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if (j>=i)
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//-----------------------------------------------------------------------
//  WAP to display
/*
***********
 *********
  *******
   *****
    ***
     *
*/

/**
int main ()
{
    int i,j;

    for(i=0;i<6;i++)
    {
        for(j=0;j<11-i;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//---------------------------------------------------------------------------------------------

// WAP to display
/*
     *
    ***
   *****
  *******
 *********
***********
*/

/**
int main()
{
    int i,j;

    for(i=0;i<6;i++)
    {
        for (j=0;j<(6 +i);j++)
        {
            if(j<5-i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;

}
*/
//----------------------------------------------------------------------------------------------------------------------------------
//WAP to display
/*

     *
    **
   ***
  ****
 *****
******
 *****
  ****
   ***
    **
     *
*/

/**
int main()
{
    int i,j;

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(j<(5-i))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(j<=i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//                ********ANOTHGER way******

/**
 int main()
 {
     int i,j,;

     for(i=0;i<11;i++)
     {
         for(j=0;j<6;j++)
         {
            if(i<6)
            {
                if(j<(5-i))
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                if(j+6<=i)
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("*");
                    }
            }
         }
         printf("\n");
     }
     return 0;
 }
*/
//                    in terms of n;
/**
int main()
 {
     int i,j,n;

     printf("\n enter the n :");
     scanf("%d",&n);

     for(i=0;i<(2*n-1);i++)
     {
         for(j=0;j<n;j++)
         {
            if(i<n)
            {
                if(j<((n-1)-i))
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                if(j+n<=i)
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("*");
                    }
            }
         }
         printf("\n");
     }
     return 0;
 }
*/
//-----------------------------------------------------------------------------------------------------------
//WAP to display
/*
*
**
***
****
*****
******
*****
****
***
**
*

*/
/**
int main()
{
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
        {
           //if(j<=i)
           printf("*");
        }
        printf("\n");
    }

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(j<(5-i))
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//----------------------------------------------------------------------------------
//  Square Star Pattern
/*
*******
*******
*******
*******
*******
*******
*******
*/
/**
int main()
{
    int i,j,n;

    printf("\n enter the value of n :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------
//Mirrored Rhombus Star Pattern
/*
*****
 *****
  *****
   *****
    *****
*/
/**
int main()
{
    int i,j,n;

    printf("\n enter the value of n :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<(n+i);j++)
        {
            if(j>=i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//------------------------------------------------------------------------------------
//hollow square
/*
*****
*   *
*   *
*   *
*****
*/
/**
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==0 || i==4)
            {
                printf("*");
            }
            else if(j==0 || j==4)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//---------------------------------------------------------------------------------
// Hollow Mirrored Rhombus Star Pattern
/*
******
 *    *
  *    *
   *    *
    *    *
     ******
*/
/**
int main()
{
    int i,j,n;

    printf("\n enter the value of n :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0 ;j<(n+i);j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else if(i==0 || i==(n-1))
            {
                printf("*");
            }
            else if(j<=i)
            {
                printf("*");
            }
            else if (j<((n-1)+i))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//------------------------------------------------------------------------
/*
 *
 **
 ***
 ****
 *****
*/
/**
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
//-----------------------------------------------------------
/*
 *
 **
 * *
 *  *
 *****
*/
/**
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
           if(i==4 || j==0 || j==i)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
        }
        printf("\n");
    }
    return 0;
}
*/
//------------------------------------------------------------------------
/*
*****
** **
* * *
** **
*****
*/
/**
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
           if(i==4 || i==0 || j==0 || j==4 || j==i)
           {
               printf("*");
           }
           else if(i==1 && j==3 || i==3 && j==1)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
        }
        printf("\n");
    }
    return 0;
}
*/


//---------------------------------------------------------------------------------------------------------------------------------------
//                             ***********CHARACTER PATEERNS*************
//                               --------------------------------------
/*
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
*/
/**
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch='A';
        for(j=0;j<5;j++)
        {
            printf("%c",ch++);
        }
        printf("\n");
    }
    return 0;
}
*/
//---------------------------------------------------------------------
/*
A
AB
ABC
ABCD
ABCDE
*/
/**
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch='A';
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%c",ch++);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//----------------------------------------------------------------
/*
A
BC
DEF
GHIJ
KLMNO
*/
/**
int main()
{
    int i,j;
    char ch='A';

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%c",ch++);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//----------------------------------------------------------------
/*
A
BB
CCC
DDDD
EEEEE
*/
/**
int main()
{
    int i,j;
    char ch = 'A';

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%c",ch);
            }
        }
        ch++;
        printf("\n");
    }
    return 0;
}
*/
//-------------------------------------------------------------
/*
A
BB
AAA
BBBB
AAAAA
*/
/**
int main()
{
    int i,j;
    char ch='A';

    for(i=0;i<5;i++)
    {

        for(j=0;j<=i;j++)
        {
             printf("%c",ch);
        }
        printf("\n");
        if(ch=='A')
        {
            ch++;
        }
        else
        {
            ch--;
        }
    }
    return 0;
}
*/
//----------------------------------------------------------------


//---------------------------------------------------------------------------------------------------
//           *********NUMBER PATTERNS**************
//              --------------------------------
/*
12345
12345
12345
12345
12345
*/
/**
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
*/
//-----------------------------------------------------------------
/*
1
12
123
1234
12345
*/
/**
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//-------------------------------------------------------------------
/*
 1
 2 3
 4 5 6
 7 8 9 10
 11 12 13 14 15
*/
/**
int main()
{
    int i,j,k=1;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf(" %d",k++);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//-------------------------------------------------------------------
/*
1
10
101
1010
10101
*/
/**
 int main()
 {
     int i,j,k=1,m=0;

     for(i=0;i<5;i++)
     {
         for(j=0;j<5;j++)
         {
             if(j<=i)
             {
                 if(j%2==0)
                 {
                     printf("%d",k);
                 }
                 else
                 {
                     printf("%d",m);
                 }
             }
         }
         printf("\n");
     }
     return 0;
 }
*/
//------------------------------------------------------------------------------------------------------------
/*
1
22
333
4444
55555
*/
/**
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf("%d",i);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------

