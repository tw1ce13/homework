/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{   
    int x;
    int a;
    int dif;
    cin >> x;
    cout << "Угадайте число за 7 попыток" << endl;
    for (int i = 0; i < 7; i++) {
        cin >>a;
        if (a!=x) 
        {
            if (a>x)
            {
                dif = a-x;
                cout << "Не угадали. Число меньше на "<<dif<<endl;
            }
            if (a<x)
            {
                dif = x-a;
                cout << "Не угадали. Число больше на "<<dif<<endl;
            }
        }
        else
        {
            cout << "Угадали"<<endl;
            break;
        }
    }
    return 0;
}
