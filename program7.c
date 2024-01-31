// problem statement:  Accept 2 values from user and perform the addition

// step 1 : understand th problem statement
// conclusion : we have to accept 2  integers and perform its addition.

// step 2: write the algorithm

/*
    START
        Accept first number from user and store it into no1
        Accept first number from user and store it into no2
        create one variable to store the result named as ans
        perform addition of no1 and no2, store the result in ans
        Display  the result from ans to the user
    STOP
*/

// step 3 : decide the programing language (c, c++ , java, python)
// we select c programing

// step 4 : write the program

#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name :     Addition
//  Description :       It is used to Perform addition of 2 integers
//  Input arguments :   Integer, Integer
//  output:             Integer
//  Author :            Nitin Sahadu Sonawane
//  Date :              25/09/2023
//
////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
    int iSum = 0; // variable to store the value of addition
    iSum = iNo1 + iNo2;
    return iSum;
}
/////////////////////////////////////////////////////////
//
//  Entry point function of an application which perform addition of 2 integers
//
/////////////////////////////////////////////////////////

int main()
{
    auto int ivalue1 = 0; // variable to store first input
    auto int ivalue2 = 0; // variable to store second input
    auto int iAns = 0;    // variable to store the result

    printf("Enter first number\n");
    scanf("%d", &ivalue1);

    printf("Enter Second number\n");
    scanf("%d", &ivalue2);

    iAns = Addition(ivalue1, ivalue2); // Function call to perform addition

    printf("Addition is : %d \n", iAns);
    return 0;
}

// step 5 : test the code

/*
    test case 1:
    input 10 11
    output 21

    test case 2:
    input 10 0
    output 10

    test case 3:
    input 12 -6
    output 6

    test case 4:
    input -5 -6
    output -11
*/