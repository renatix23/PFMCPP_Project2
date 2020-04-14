#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 int
 bool
 float
 double
 char
 void
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int soundType = 1;
    int ingredient = 5;
    int x = 7;

    float ambient = 3.5f;
    float surface = 86.4f;
    float material = 123.2f;

    bool shoots = true;
    bool jumps = false;
    bool isGrounded = true;

    double isTurnedOn = 12838.2;
    double isTurnedOff = 0.42;
    double drinks = 1.3;

    char isDown = 'r';
    char isHungry = 'h';
    char barks = '+';
    
    ignoreUnused(number, soundType, ingredient, x, ambient, surface, material, shoots, jumps, isGrounded, isTurnedOn, isTurnedOff, drinks, isDown, isHungry, barks); //passing each variable declared to the ignoreUnused() function

}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool orderFood(bool payFood, int quantity = 1)
{ 
    ignoreUnused(payFood, quantity);
    return {};
} 
/*
 2)
 */
float distanceAB(float distanceA, float distanceB)
{ 
    ignoreUnused(distanceA, distanceB);
    return {};
} 
/*
 3)
 */
void letters(char y ='1', char b = '2')
{ 
    ignoreUnused(y,b);
} 
/*
 4)
 */
double purchase(float price = 9.99f, bool isInInventory = true)
{ 
    ignoreUnused(price, isInInventory);
    return {};
} 
/*
 5)
 */
int weightDP(int weightD = 823, int weightP = 291)
{ 
    ignoreUnused(weightD, weightP);
    return {};
} 
/*
 6)
 */
void playSound(bool keyDown = true)
{ 
    ignoreUnused(keyDown);
} 
/*
 7)
 */
void changeParameters(float ambMain = 6.3f, float mxMain = 1.8f)
{ 
    ignoreUnused(ambMain, mxMain);
} 
/*
 8)
 */
int countHours(int TimeA, int TimeB)
{ 
    ignoreUnused(TimeA, TimeB);
    return {};
} 
/*
 9)
 */
void activateSound(bool characterGetsThrough = true)
{ 
    ignoreUnused(characterGetsThrough);
} 
/*
 10)
 */
bool findObject(bool isFound = true)
{ 
    ignoreUnused(isFound);
    return {};
} 

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto orderDelivered = orderFood(true, 1);
    //2)
    auto calculateDistance = distanceAB(4.3f, 2.12f);
    //3)
    letters('y', 'n');
    //4)
    auto buyDiamonds = purchase(10.3f, true);
    //5)
    auto horseWeight = weightDP(823, 91);
    //6)
    playSound(true);
    //7)
    changeParameters(92.3f, 102.9f);
    //8)
    auto restTime = countHours(24, 12);
    //9)
    activateSound(false);
    //10)
    auto findShirt = findObject(true);
    
    ignoreUnused(carRented, orderDelivered, calculateDistance, buyDiamonds,horseWeight, restTime, findShirt);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
