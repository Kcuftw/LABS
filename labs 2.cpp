#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "RU");
    short A;
    int i;
    
    cout << "Введите число A (short): ";
    cin >> A;
    
    cout << "Введите номер бита i (0-7): ";
    cin >> i;
    

    if (i < 0 || i > 7) 
    {
        cout << "Ошибка: номер бита должен быть в диапазоне 0-7!" << endl;
        return 1;
    }
    

    cout << A << " = " << bitset <8> (A) << endl;
    int bitValue = (A >> i) & 1;
    
        cout << "Бит" << i << "=" << bitValue << endl;
    
        if (bitValue == 1)
        {
            cout << "\nСдвиги вправо:" << endl;
            cout << "1:" << (A >> 1) << " = " bitset <8>(A >> 1) << endl;
            cout << "2:" << (A >> 2) << " = " bitset <8>(A >> 2) << endl;
            cout << "3:" << (A >> 3) << " = " bitset <8>(A >> 3) << endl;
        }
        else
{

        int M;
        cout << "\nВведите число M: ";
        cin >> M;
        
        if (M > 5) 
        {
            int difference = M - 5;
            cout << "M больше 5 на " << difference << endl;
        } 
        else 
            if (M < 5) 
        {
            int difference = 5 - M;
            cout << "M меньше 5 на " << difference << endl;
        } 
        else 
        {
            cout << "M равно 5" << endl;
        }
    }
    

    int N;
    cout << "\nВведите номер дня недели (1-7): ";
    cin >> N;
    

    switch (N) 
    {
        case 1:
            cout << "Понедельник" << endl;
            break;
        case 2:
            cout << "Вторник" << endl;
            break;
        case 3:
            cout << "Среда" << endl;
            break;
        case 4:
            cout << "Четверг" << endl;
            break;
        case 5:
            cout << "Пятница" << endl;
            break;
        case 6:
        case 7:

            if (N == 6) 
            {
                cout << "Суббота" << endl;
            } 
            else 
            {
                cout << "Воскресенье" << endl;
            }
            cout << "Выходной день" << endl;
            break;
        default:
  
            cout << "Ошибка: номер дня недели должен быть в диапазоне 1-7!" << endl;
            break;
    }
    
    return 0;
}