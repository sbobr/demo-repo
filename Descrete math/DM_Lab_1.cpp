#include <iostream>  // підключення стандартниої бібліотеки
#include <string.h>  // підключення бібліотеки для роботи зі строками
using namespace std; // вибір простору імен

bool GetBool(string str1, string varname)// створення функції з параметром
{
    string temp;  // введеня змінної temp типу строка     
    while(!(temp == "0" || temp == "1")) // цикл з умовою для перевірки данних
    {
        cout << str1;
        cin >> temp;

        if (temp == "0" || temp == "1")
        {
           break;
        }
        else
        {
             cout << "Invalid " << varname <<" value, try again." << endl;
        }
    }

    return (bool)stoi(temp);
}

int main()          // головна частина програми
{
    bool x, y, z; // введеня змінних x, y, z логічного типу данних
   
    cout << "Enter the value 1 or 0 for variable" << endl; // виведення тексту на екран

    x = GetBool("x = ", "x");

    y = GetBool("y = ", "y");

    z = GetBool("z = ", "z");

    bool step1;
    step1 = !(y && z);
    cout << "!(y ∧ z) = " << step1 << endl;

    bool step2;
    step2 = x == step1;
    cout << "x ⇔ !(y ∧ z) = " << step2 << endl;

    bool step3;
    step3 = y && z;
    cout << "(y ∧ z) = " << step3 << endl;

    bool step4;
    step4 = x == step3;
    cout << "x ⇔ (y ∧ z) = " << step4 << endl;

    bool fresult;
    fresult = step2 == step4;
    cout << "(x ⇔ !(y ∧ z)) ⇔ (x ⇔ (y ∧ z)) = " << fresult; // виведення результату на екран

    return 0;
}