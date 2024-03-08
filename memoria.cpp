#include <iostream>
using namespace std;

class Enano
{
private:
    float altura;
    int edad;

public:
    void Inicializar()
    {
    }
};

int main(int argc, char const *argv[])
{
    int a = 5;
    bool b = true;
    float f = 0.1;
    double d = 0.1;
    char c = 'a';
    Enano e;

    cout << "Tamaño tipos de datos nativos" << endl;
    cout << "Tamaño int: " << sizeof(int) << " Bytes" << endl;
    cout << "Tamaño bool: " << sizeof(bool) << " Bytes" << endl;
    cout << "Tamaño float: " << sizeof(float) << " Bytes" << endl;
    cout << "Tamaño double: " << sizeof(double) << " Bytes" << endl;
    cout << "Tamaño char: " << sizeof(Enano) << " Bytes" << endl;
    cout << endl;
    cout << "Memoria Estatica C/C++:" << endl;
    cout << "Direccion de int: " << &a << endl;
    cout << "Direccion de bool: " << &b << endl;
    cout << "Direccion de float: " << &f << endl;
    cout << "Direccion de double: " << &d << endl;
    cout << "Direccion de char: " << static_cast<void *>(&c) << endl;
    cout << "Direccion de char: " << &e << endl;
    cout << endl;
    cout << "Memoria Dinamica C: " << endl;
    cout << "Dinamica Dinamica: " << malloc(2) << endl;
    cout << "Dinamica Dinamica int" << malloc(sizeof(int)) << endl;

    // Casteo de punteros en C
    int *direccion = (Enano *)malloc(sizeof(Enano));


    //Operador ->



    //Polimorfismo




        return 0;
}
