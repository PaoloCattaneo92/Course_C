#include <stdio.h>
#include <string.h> //required for strcpy
#include <math.h>

// COURSE AT: https://www.youtube.com/watch?v=KJgsSFOSQv0&t=195s

// Function declarations
void variables();
void dataTypes();
void examplePrintf();
void workingWithNumbers();
void comments();
void constants();
void userInput();

int main() {

    // Uncomment to execute

    // variables();
    // dataTypes();
    // examplePrintf();
    // comments();
    // constants();
    // userInput();

    return 0;
}

// Function implementations
void variables() {
    // 1. Variables
    char name[] = "Paul";
    int age = 15;

    char type[] = "man";
    if(age <= 18) {
        strcpy(type, "boy");    //if lengths are different it leaks to other variables!
    }

    printf("1. -> \n");
    printf("There once was a %s named %s\n",type, name);
    printf("He was %i years old.\n", age);
    printf("He really liked the name %s...\n", name);
    printf("... but not being %i!\n", age);
}

void dataTypes() {
    // 2. Data types
    int integer = 42;
    double x = 3.6;
    float y = 2.5;
    char grade = 'A';
    char message[] = "Hello world";
}

void examplePrintf() {
    // 3. Printf
    printf("\n3. -> \nHello\nWorld"); //splits with \ns
}

void workingWithNumbers() {
     // 4. Working with numbers
    printf("\n4. -> \n");
    double a = 5;
    double b = 4.5;
    printf("Result of %f + %f = %f\n", a, b, a + b);

    printf("Power: %f\n", pow(2, 3));
    printf("Square root: %f\n", sqrt(2));
    printf("Floored: %f\n", floor(sqrt(2)));
}

void comments() {
    // 5. Comments... well... this is a comment :)
    // printf("I don't want this line to be executed!")
    /* printf("Not even this 1");
    printf("Not even this 2");
    printf("Not even this 3"); */
}

void constants() {
    // 6. Constants
    printf("6. ->\n");
    int num = 5;
    printf("%d\n", num);
    num = 10;   //this variable can be modified
    printf("%d\n", num);
    const int ANOTHER_NUM = 5;
    //ANOTHER_NUM++; //this would throw an error
    const char MESSAGE_TEMPLATE[] = "My name is %s\n";
    char myName[] = "Paolo";
    printf(MESSAGE_TEMPLATE, myName);
}

void userInput() {
    // 7. User input
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old\n", age);
    if(age < 18) {
        printf("You are a minor!\n");
    }
    else {
        printf("You are an adult!\n");
    }

    const int BUFF_SIZE = 20;
    char name[BUFF_SIZE];
    printf("Enter your name: ");
    fgets(name, BUFF_SIZE, stdin); //scanf would stop at first whitespace
    printf("Your name is %s", name);
}


