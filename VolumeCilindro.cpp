#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    const double PI = 3.14159265;
    double r, a, h, v;

    r = 0;
    while (r <= 0)
    {
        cout << "Digite o valor do raio da base do cilindro: ";
        cin >> r;
    }

    h = 0;
    while (h <= 0)
    {
        cout << "Digite o valor da altura do cilindro: ";
        cin >> h;
    }

    a = PI * sqrt(r); // Área da base.
    v = a * h; // Volume do cilindro.

    cout << "Volume do cilindro " << v << endl;

    return 0;
}