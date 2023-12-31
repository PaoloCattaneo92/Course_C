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
void calculator();
void madLibs();
void arrays();
void functions();
void ifStatements();
void betterCalculator();
void switchOp();
void structs();
void whileLoop();
void guessingGame();
void forLoops();
void array2D();
void memory();
void pointers();

int main() {

    // Uncomment to execute

    // variables();
    // dataTypes();
    // examplePrintf();
    // comments();
    // constants();
    // userInput();
    // calculator();
    // madLibs();
    // arrays();
    // functions();
    // ifStatements();
    // betterCalculator();
    // switchOp();
    // structs();
    // whileLoop();
    // guessingGame();
    // forLoops();
    // array2D();
    // memory();
    pointers();

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
    printf("%d", integer);
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

void calculator() {
    // 8. Build a calculator
    double a;
    double b;
    printf("Enter number A: ");
    scanf("%lf", &a);
    printf("Enter number B: ");
    scanf("%lf", &b);
    double result = a + b;
    printf("Result = %f", result);
}

void madLibs() {
    const int BUFF_SIZE = 20;
    char color[BUFF_SIZE];
    char pluralNoun[BUFF_SIZE];
    char celebrityF[BUFF_SIZE];
    char celebrityL[BUFF_SIZE];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity name: ");
    scanf("%s%s", celebrityF, celebrityL);  //support only 1 word

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);
}

void arrays() {
    int lostNumbers[] = {4, 8, 15, 16, 23, 42};
    int index = 2;
    printf("Before element at index %d is %d\n", index, lostNumbers[index]);
    lostNumbers[index] = 100;
    printf("Later element at index %d is %d\n", index, lostNumbers[index]);

    printf("All elements:\n");
    const int SIZE_OF_INT = sizeof(lostNumbers[0]);
    int size = sizeof(lostNumbers) / SIZE_OF_INT;
    for (int i = 0; i < size; i++) {
        printf("[%d]:\t%d\n", i, lostNumbers[i]);
    }
}

double cube(double value);  //must declare before calling it
void functions() {
    double value = 2;
    printf("Cube of %f = %f", value, cube(value));
}

double cube(double value) {
    return pow(value, 3);
}

int max(int a, int b);
int max2(int a, int b);
int max3(int a, int b, int c);

void ifStatements() {
    int a = 10;
    int b = 20;
    printf("Max value (v1) between %d and %d is %d\n", a, b, max(a, b));
    printf("Max value (v2) between %d and %d is %d\n", a, b, max2(a, b));

    int c = 6;
    printf("In 3 values [%d,%d,%d] max is %d", a, b, c, max3(a, b, c));
}

int max(int a, int b) {
    if(a >= b) {
        return a;
    }
    
    return b;
}

int max2(int a, int b) {
    return (a >= b) ? a : b;
}

int max3(int a, int b, int c) {
    if(a >= b && a >= c) return a;
    if(b >= a && b >= c) return b;
    if(c >= a && c >= b) return c;
    return -1;
}

void betterCalculator() {
    double a;
    double b;
    char op;

    printf("Enter number A: ");
    scanf("%lf", &a);
    printf("Enter OPERATOR: ");
    scanf(" %c", &op);
    printf("Enter number B: ");
    scanf("%lf", &b);

    double result;
    if(op == '+') {
        result = a + b;
    }
    else if(op == '-') {
        result = a - b;
    }
    else if(op == '*') {
        result = a * b;
    }
    else if(op == '/' && b != 0) {
        result = a / b;
    }
    else {
        printf("Operation not allowed");
        return;
    }

    printf("Result of %f %c %f = %f", a, op, b, result);
}


void switchOp() {
    char grade = 'B';
    
    const int SIZE = 20;
    char message[SIZE];
    switch (grade)
    {
    case 'A':
        strcpy(message, "You did great");
        break;
    case 'B':
        strcpy(message, "You did alright");
        break;
    case 'C':
        strcpy(message, "You did poorly");
        break;
    case 'D':
        strcpy(message, "You did very bad");
        break;
    case 'E':
    case 'F':
        strcpy(message, "You failed badly");
        break;
    default:
        strcpy(message, "Unknown grade");
        break;
    }

    printf(message);
}


struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

void structs() {
    struct Student student1;
    strcpy(student1.name, "Paolo");
    strcpy(student1.major, "MyMajor");
    student1.age = 31;
    student1.gpa = 3.2;

    printf("Student %s gpa: %fs", student1.name, student1.gpa);
}

void whileLoop() {
    int index = 1;
    while(index <= 10) {
        printf("I am at index:\t%d\n", index);
        index++;
    }

    index = 1;
    do {
        printf("(do while) I am at index:\t%d\n", index);
    } while(index++  <= 10);
}

void guessingGame() {
    const int SECRET = 5;
    const int GUESS_LIMIT = 3;
    int guess;
    int tries = 0;

    while(guess != SECRET) {
        if(tries > GUESS_LIMIT) {
            printf("Too many tries! You can only guess %d times\n", GUESS_LIMIT);
            break;
        }

        if(tries > 0) {
            printf("Wrong! Try again!\n");
        }
        
        printf("Guess the number: ");
        scanf("%d", &guess);
        tries++;
    }

    if(guess == SECRET) {
        printf("You guessed right after %d tries!\n", tries);
    }
    else {
        printf("You lost!\n");
    }
}

void forLoops() {
    int values[] = { 1, 2, 3, 4, 5};
    int size = sizeof(values) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        if(values[i] % 2 == 0) {
            printf("Value %d is even\n", values[i]);
        }
    }
}

void array2D() {
    
    int nums[2][3] = { 
        { 1, 2, 3},
        { 4, 5, 6}
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d][%d]:\t%d\n", i, j, nums[i][j]);
        }
    }
}

void memory() {
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("%p\n", &age);
    printf("%p\n", &gpa);
    printf("%p\n", &grade);
}

void pointers() {
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    int* pAge = &age;
    double* pGpa = &gpa;
    char* pGrade = &grade;

    printf("age's memory address: %p\n", &age);
}











