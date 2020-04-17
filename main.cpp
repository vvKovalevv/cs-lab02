#include <iostream>
using namespace std;
int main ()
{
    cout << "Enter A and B: " << '\n';
    int a, b, max, min;
    cin >> a >> b ;
    cout << "A + B = " << a + b << '\n';
    cout << "A - B = " << a - b << '\n';
    cout << "A * B = " << a * b << '\n';/*вывод произведения*/
    cout << "A / B = " << a / b << '\n';
    if (a>b)
    {
        cout<<"max="<<a<<'/n';
    }
    else
    {
        cout<< "max="<<b<<endl;
    }
 if (a<b)
    {
        cout<<"min="<<a<<'/n';
    }
    else
    {
        cout<< "min="<<b<<endl;
    }
     return 0;
}
