//          this is calculator of caoacity 2 numbers it does not take bad inputs. and written purely in C++ language
#include <iostream>
using namespace std;
void addition();
void subtraction();
void multiply();
void division();
void mod();
int main()
{
    int choice = 'n';
    char choice1 = 'n';
    do
    {
        do
        {
            cout << "Please select from following options (0-5)" << endl;
            cout << "0. Exit" << endl;
            cout << "1. Addition" << endl;
            cout << "2. Subtraction" << endl;
            cout << "3. Multiplication" << endl;
            cout << "4. Division" << endl;
            cout << "5. Modulus" << endl;
            cout << "Enter choice: ";
            cin >> choice;
            if (choice < 0 || choice > 5)
            {
                cout << endl
                     << "-----Inavlid choice-----\a" << endl
                     << endl;
            }
        } while (choice != 0 && choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5);
        if (choice == 0)
        {

            cout << "Do you really wish to exit(y/n): ";
            cin >> choice1;
            while (choice1 != 'n' && choice1 != 'N' && choice1 != 'y' && choice1 != 'Y')
            {

                cin.ignore(1000, '\n');
                cout << endl
                     << "-----INVALID INPUT-----" << endl;
                cout << "Input only contain (y/n)!\a" << endl;
                cout << "Do you really wish to exit(y/n): ";
                cin >> choice1;
            }
            cin.ignore();
            if (choice1 == 'y' || choice1 == 'Y')
            {
                return 0;
            }
        }

        else if (choice == 1)
        {
            addition();
        }
        else if (choice == 2)
        {
            subtraction();
        }
        else if (choice == 3)
        {
            multiply();
        }
        else if (choice == 4)
        {
            division();
        }
        else if (choice == 5)
        {
            mod();
        }
    } while (choice1 == 'n' || choice1 == 'N' || choice == 'n' || choice == 'N');
}

// FUNCTIONS
void addition()
{
    double num1 = 0, num2 = 0;
    char choice;
    do
    {
        cout << "Please enter first number: ";
        cin >> num1;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (integer/decimal) value!\a" << endl;
            cout << "Please enter first number again: ";
            cin >> num1;
        }
        cin.ignore();
        cout << "Please enter second number: ";
        cin >> num2;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (integer/decimal) value!\a" << endl;
            cout << "Please enter second number again: ";
            cin >> num2;
        }
        cin.ignore();
        float sum = num1 + num2;
        cout << endl;
        cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
        cout << endl;

        cout << "Do you wish to add more numbers(y/n): ";
        cin >> choice;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (y/n)!\a" << endl;
            cout << "Do you wish to add more numbers(y/n): ";
            cin >> choice;
        }

        while (choice != 'n' && choice != 'N' && choice != 'y' && choice != 'Y')
        {

            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (y/n)!\a" << endl;
            cout << "Do you wish to add more numbers(y/n): ";
            cin >> choice;
        }
        cin.ignore();
    } while (choice == 'y' || choice == 'Y');
}
void subtraction()
{
    double num1 = 0, num2 = 0;
    char choice;
    do
    {
        cout << "Please enter first number: ";
        cin >> num1;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (integer/decimal) value!\a" << endl;
            cout << "Please enter first number again: ";
            cin >> num1;
        }
        cin.ignore();
        cout << "Please enter second number: ";
        cin >> num2;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (integer/decimal) value!\a" << endl;
            cout << "Please enter second number again: ";
            cin >> num2;
        }
        cin.ignore();
        float diff = num1 - num2;
        cout << endl;
        cout << "The difference of " << num1 << " and " << num2 << " is: " << diff << endl;
        cout << endl;

        cout << "Do you wish to subtract more numbers(y/n): ";
        cin >> choice;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (y/n)!\a" << endl;
            cout << "Do you wish to subtract more numbers(y/n): ";
            cin >> choice;
        }
        while (choice != 'n' && choice != 'N' && choice != 'y' && choice != 'Y')
        {

            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (y/n)!\a" << endl;
            cout << "Do you wish to subtract more numbers(y/n): ";
            cin >> choice;
        }
        cin.ignore();
    } while (choice == 'y' || choice == 'Y');
}
void multiply()
{
    double num1 = 0, num2 = 0;
    char choice;
    do
    {
        cout << "Please enter first number: ";
        cin >> num1;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (integer/decimal) value!\a" << endl;
            cout << "Please enter first number again: ";
            cin >> num1;
        }
        cin.ignore();
        cout << "Please enter second number: ";
        cin >> num2;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (integer/decimal) value!\a" << endl;
            cout << "Please enter second number again: ";
            cin >> num2;
        }
        cin.ignore();
        float multi = num1 * num2;
        cout << endl;
        cout << "The product of " << num1 << " and " << num2 << " is: " << multi << endl;
        cout << endl;

        cout << "Do you wish to multiply more numbers(y/n): ";
        cin >> choice;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (y/n)!\a" << endl;
            cout << "Do you wish to multilply more numbers(y/n): ";
            cin >> choice;
        }
        while (choice != 'n' && choice != 'N' && choice != 'y' && choice != 'Y')
        {

            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (y/n)!\a" << endl;
            cout << "Do you wish to multiply more numbers(y/n): ";
            cin >> choice;
        }
        cin.ignore();
    } while (choice == 'y' || choice == 'Y');
}
void division()
{
    double num1 = 0, num2 = 0;
    char choice;
    do
    {
        cout << "Please enter first number: ";
        cin >> num1;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (integer/decimal) value!\a" << endl;
            cout << "Please enter first number again: ";
            cin >> num1;
        }
        cin.ignore();
        cout << "Please enter second number: ";
        cin >> num2;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (integer/decimal) value!\a" << endl;
            cout << "Please enter second number again: ";
            cin >> num2;
        }
        cin.ignore();
        while (num2 == 0)
        {
            cout << endl
                 << "-----Invlaid input-----" << endl;
            cout << "Second number cannot be 0!\a" << endl;
            cout << "Please enter second number again: ";
            cin >> num2;
        }
        float div = num1 / num2;
        cout << endl;
        cout << "The division of " << num1 << " and " << num2 << " is: " << div << endl;
        cout << endl;

        cout << "Do you wish to divide more numbers(y/n): ";
        cin >> choice;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (y/n)!\a" << endl;
            cout << "Do you wish to divide more numbers(y/n): ";
            cin >> choice;
        }
        while (choice != 'n' && choice != 'N' && choice != 'y' && choice != 'Y')
        {

            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (y/n)!\a" << endl;
            cout << "Do you wish to divide more numbers(y/n): ";
            cin >> choice;
        }
        cin.ignore();
    } while (choice == 'y' || choice == 'Y');
}
void mod()
{
    int num1 = 0, num2 = 0;
    char choice;
    do
    {
        cout << "Please enter first number: ";
        cin >> num1;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (integer/decimal) value!\a" << endl;
            cout << "Please enter first number again: ";
            cin >> num1;
        }
        cin.ignore();
        cout << "Please enter second number: ";
        cin >> num2;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (integer/decimal) value!\a" << endl;
            cout << "Please enter second number again: ";
            cin >> num2;
        }
        cin.ignore();
        while (num2 == 0)
        {
            cout << endl
                 << "-----Invlaid input-----" << endl;
            cout << "Second number cannot be 0!\a" << endl;
            cout << "Please enter second number again: ";
            cin >> num2;
        }
        float mod = (num1 % num2) * 1.0;
        cout << endl;
        cout << "The mod of " << num1 << " and " << num2 << " is: " << mod << endl;
        cout << endl;

        cout << "Do you wish to find mod of more numbers(y/n): ";
        cin >> choice;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (y/n)!\a" << endl;
            cout << "Do you wish to find mod of more numbers(y/n): ";
            cin >> choice;
        }
        while (choice != 'n' && choice != 'N' && choice != 'y' && choice != 'Y')
        {

            cin.ignore(1000, '\n');
            cout << endl
                 << "-----INVALID INPUT-----" << endl;
            cout << "Input only contain (y/n)!\a" << endl;
            cout << "Do you wish to find mod of more numbers(y/n): ";
            cin >> choice;
        }
        cin.ignore();
    } while (choice == 'y' || choice == 'Y');
}