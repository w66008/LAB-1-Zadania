
#include <iostream>
using namespace std;
int main()


//------------------------Zadanie 1-------------------------------------------
/*{
    cout << "w66008\n";
} */
//------------------------Zadanie 2-------------------------------------------
/*{
    int liczba;

    cout << "Wprowadz liczbe" << endl;
    cin >> liczba;

    if (liczba % 2 == 0)
        cout << "Liczba jest parzysta" << endl;
    else
        cout << "Liczba jest nieparzysta" << endl;
}*/
//------------------------Zadanie 3-------------------------------------------
/*{
    float a, b;

    cout << "Wpisz liczbe nr 1\n"<< endl;
    cin >> a;
    cout << "Wpisz liczbe nr 2\n" << endl;
    cin >> b;
    if (a > b)
    {
        cout << "Liczba " << a << " jest wieksza" << endl;
    }
    else
    {
        cout << "Liczba " << b << " jest wieksza" << endl;
    }

 }*/
//------------------------Zadanie 4-------------------------------------------
/* {
      float a, b, c, d, srednia;

      cout << "Wprowadz cztery liczby ", cin >> a >> b >> c >> d;

      srednia = (a + b + c + d) / 4;
      cout << "Srednia: " << srednia << endl;
      cout << "Srednia: " << (a + b + c + d) / 4 << endl;
  }*/
//------------------------Zadanie 5-------------------------------------------
/* {
        int wybor;
        float a, b;
        cout << "Podaj 1 liczbe ", cin >> a;
        cout << "Podaj 2 liczbe ", cin >> b;
        cout << "Operacje matematyczne do wyboru:\n1.Suma \n2.Roznica \n3.Iloczyn\n4.Iloraz\n ";
        cin >> wybor;
        switch (wybor)
        {
        case 1:
            cout << "Suma " << a << " + " << b << " = " << a + b << endl;
            break;
        case 2:
            cout << "Roznica " << a << " - " << b << " = " << a - b << endl;
            break;
        case 3:
            cout << "Iloczyn " << a << " * " << b << " = " << a * b << endl;
            break;
        case 4:
            if (b != 0)
            {
                cout << "Iloraz " << a << " / " << b << " = " << a / b << endl;

            }
            else
            {
                cout << "Nie dzieli się przez 0" << endl;
            }
            break;

        default:
            cout << "Wybrano nieistniejace operacje" << endl;
            break;

        }
    }*/
