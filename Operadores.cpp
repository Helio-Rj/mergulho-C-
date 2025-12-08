#include<iostream>

#include<math.h>

using namespace std;

int main() {
    int a = 5, b = 2;

    int soma = a + b;
    cout << "a Soma é: " << soma << endl;

    cout << "a Soma é: " << a+b << endl;

    int sub = a - b;
    cout << "a Subtração é: " << sub << endl;

    cout << "a Subtração é: " << a-b << endl;


    int multiplicacao = a * b;
    cout << "a Multiplicação é: " << multiplicacao << endl;

    cout << "a Multiplicação é: " << a*b << endl;

    int quocientediv = a / b;
    cout << "o Quociente da Divisão é: " << quocientediv << endl;

    int restodiv = a % b;
    cout << "o Resto da Divisão é: " << restodiv << endl;

    float divreal = (float)a / b;
    cout << "a Divisão Real é: " << divreal << endl;

    float potencia = pow(a, b);
    cout << "a Potência é: " << potencia << endl;


    cout << "valor de 'a' normal: " << a << endl;
    
    a+=1;
    cout << "valor de 'a' com incremento: " << a << endl;

    a-=1;
    cout << "valor de 'a' com decremento: " << a << endl;
    


    return 0;
}