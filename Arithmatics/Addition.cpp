// The below program will perform some arithmetic operations

#include <iostream>

using namespace std;

int main()
{
    /*Declaration of variables */

    int a;          //variable 'a' will contain an interger type number
    float b;        //variable 'b' will contain a floating(decimal piont) type number
    double c;       //variable 'c' will contain a double type number
    
    /*Initialization of varibles */
    a = 34;
    b = 34.78;
    c = 34.789045;

    /* The sum of int data type and float data type will result in float data type*/
    cout << "The sum of a and b is : " << a+b << "\n";  //the output of the resulted addition operation is printed out using 'cout' keyword

    /*
    * Now will try to store the output of two differrent datatypes in    one datatype based on priorities 
    * int < float < double
    * double can store values of double float and int. 
    * float can store values float and int not double.
    * int can only store int not float nor double.
    * 
    * to achive this one needs to type cast the datatypes respectively.
    */

   float floatingSum = 0; //this dynamic declaration i.e declaring and initializing at same time

   floatingSum = a + b;

   cout << "the sum of two numbers is : " << floatingSum << "\n";

   double doubleSum = 0; //this dynamic declaration i.e declaring and initializing at same time

   doubleSum = a + b + c; // adding all types datatypes int + float + double

   cout << "the sum of three numbers is : " << doubleSum << "\n";

   int Sum = 0; //this dynamic declaration i.e declaring and initializing at same time

   Sum = a + b + c; // adding all types datatypes int + float + double but only int value will be printed 

   cout << "the sum of three numbers is : " << Sum << "\n";
    
    return 0;
}