#include <iostream>

using namespace std;

int main()
{


    for (;;) // "infinite" loop (while (true) is also possible)
    {
            cout << "Enter the old monthly salary: " << endl;

    int old_salary;

    cin >> old_salary;

    float increment;
    float retro_salary;

    increment = 0.076;
    retro_salary = 0.076 * old_salary * 6;

    cout << "The retroactive salary for the last six months is " << retro_salary << endl;

    float new_annual_salary;
    float new_monthly_salary;

    new_monthly_salary = (old_salary * increment) + old_salary;
    new_annual_salary = new_monthly_salary * 12;

    cout << "The new monthly salary is " << new_monthly_salary << endl;
    cout << "The new annual salary is " << new_annual_salary << endl;
        cout << "Repeat? [y/n]" << endl;
        char answer;
        cin >> answer;
        if (answer == 'n')
            break; // exit loop
    }              // else repeat
    cout << "Thank you, goodbye" << endl;

    return 0;
}
