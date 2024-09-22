#include <iostream>
#include <string.h>
using namespace std;
int main() 
{
    bool x, y, z;
    string temp;
    while (true)// цикл з перевіркою введених данних для змінної х
    { 
        cout << "x = ";
        cin >> temp;

        if ((temp == "0" || temp == "1"))// умова завершення циклу
        {                         
            x = (bool)stoi(temp); // перетворення строкового типу данних в логічний та запис значення зі змінної temp в "x"
            break;
        }
        else
        {
            cout << "Invalid x value, try again." << endl;
        }
    }

    while (true)// цикл з перевіркою введених данних для змінної у
    { 
        cout << "y = ";
        cin >> temp;

        if ((temp == "0" || temp == "1"))// умова завершення циклу
        { 
            break;
        }
        else
        {
            cout << "Invalid y value, try again." << endl;
        }
    }

    y = (bool)stoi(temp); // перетворення строкового типу данних в логічний та запис значення зі змінної temp в "y"

    while (true)// цикл з перевіркою введених данних для змінної z
    { 
        cout << "z = ";
        cin >> temp;
        if ((temp == "0" || temp == "1"))// умова завершення циклу
        { 
            break;
        }
        else
        {
            cout << "Invalid z value, try again." << endl;
        }
    }

    z = (bool)stoi(temp); // перетворення строкового типу данних в логічний та запис значення зі змінної temp в "z"

    bool v1;
    v1 = !(y && z);
     cout << "!(y ∧ z) = " << v1 << endl;

    bool v2;
    v2 = x == v1;
     cout << "x ⇔ !(y ∧ z) = " << v2 << endl;
    
    bool v3;
    v3 = y && z;
     cout << "(y ∧ z) = " << v3 << endl;

    bool v4;
    v4 = x == v3;
     cout << "x ⇔ (y ∧ z) = " << v4 << endl;

    bool result;
    result = v2 == v4;
     cout << "(x ⇔ !(y ∧ z)) ⇔ (x ⇔ (y ∧ z)) = " << result << endl;

}