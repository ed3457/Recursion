// Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int Fact1(int num)
{
    int res = 1;
    for (int i = 1;i <= num;i++)
    {
        res = res * i;

    }

    return res;

}

int Fact2(int num)
{
    if (num == 1)
        return 1;
    else
        return Fact2(num - 1) * num;


}

int Fibonacci(int num)
{
    if (num == 0 || num == 1)
        return num;
    else

        return Fibonacci(num - 1) + Fibonacci(num - 2);



}

int main()
{
    std::cout << "Hello World!\n";

    int input;

    cin >> input;

    cout << Fact1(input)<<endl;
    cout << Fact2(input)<<endl;
    cout << Fibonacci(input);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
