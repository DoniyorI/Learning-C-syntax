#include <stdio.h>                                  //standard import for things like printf, scanf, etc.
#include "math.h"                                   // import Math
#include <stdbool.h>                                // import bool to use bool instead of _Bool and true and false for 1,0



/// Create variables
//int myNum = 5;             // Integer (whole number)
//float myFloatNum = 5.99;   // Floating point number
//char myLetter = 'D';       // Character
//
/// Print variables
//printf("%d\n", myNum); or "%i"
//printf("%f\n", myFloatNum);
//printf("%c\n", myLetter); or "%s"

void complementMachine(){
    char name[31];
    printf("what is your name:" );
    scanf("%s",name); //no need to do address or operator for strings
    printf("Hello %s!\nYou looking extra fine today\n",name);        //%s for string
}


int main() {
    complementMachine();
//    printf("Hello, World!\n");                    // how to print string //"\n" is go to next line
//    return 0;

//    int x = 10; // how to enter vars              // vars are hard coding
//    int y = x/2;
//    printf("The value of y is %i\nThe value of x is %i\n", y,x);
                                                    // how to print int // to enter string and use ints at the same time just  add text before "%i"

//    int radius;
//    printf("please enter a radius:");
//    scanf("%i",&radius); //address of operator using "&"
//    printf("The radius you said was: %i\n",radius);
//    double area=pow(radius,2)*M_PI;
//    printf("The area is %f\n",area);              //use "%f" for floating point numbers

    //type casting
    //when dividing two ints c automatically gives an output of another int ex. 18/12 --> 1.5 --> 1
    //to make it result ina  double you need to either make it a 18.0/12.0 or if itd a variable use (double) in font of the variable
    int num=18;
    double ans =(double) num / 12.0;
    printf("%f\n",ans);

    _Bool bool1 = 1; // _Bool is a boolean variable //0 is false while 1 is true
    printf("Is this a boolean %i", bool1);
    bool bool2 = true; // After #include <stdbool.h> we can now use bool instead of _Bool and use true and false instead of 1,0
    printf("Is this a boolean %i", bool2);

    return 0; //return 0 since its and int main and 0 to show everything ran correctly
}

//%f - Decimal notation, %lf for floating point
//%e - Scientific notation
//%g - Computer decides
