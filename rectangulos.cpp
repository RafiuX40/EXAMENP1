#include <iostream>

using namespace std;

class Rectangulo
{

private:
    int ancho;
    int altura;

public:
    int esquinaX;
    int esquinay;

    Rectangulo();
    Rectangulo(int x, int y);
    Rectangulo(int x, int y, int w, int h);

    int getAncho();
    void setAncho(int w);
    int getAltura();
    void setAltura(int h);
    int getArea();
    void intersecta(Rectangulo rectangulo);
};

int main()
{
    Rectangulo rectangulo1;
    Rectangulo rectangulo2(5, 10);
    Rectangulo rectangulo3(5, 10, 15, 20);
    cout << "Area del rectangulo 1 es: " << rectangulo1.getArea() << endl;
    cout << endl;
    cout << "Area del rectangulo 2 es: " << rectangulo2.getArea() << endl;
    cout << endl;
    cout << "Area del rectangulo 3 es: " << rectangulo3.getArea() << endl;
    cout << endl;

    rectangulo1.intersecta(rectangulo2);
    rectangulo2.intersecta(rectangulo3);
    rectangulo2.intersecta(rectangulo3);
    

}

Rectangulo::Rectangulo()
{

    ancho = 0;
    altura = 0;
    esquinaX = 0;
    esquinay = 0;
}

Rectangulo::Rectangulo(int x, int y)
{

    ancho = 0;
    altura = 0;
    esquinaX = x;
    esquinay = y;
}

Rectangulo::Rectangulo(int x, int y, int w, int h)
{

    if (w > 0)
    {
        if (h > 0)
        {
            ancho = w;
            altura = h;
            esquinaX = x;
            esquinay = y;
        }
    }
    else
    {
        ancho = 0;
        altura = 0;
    }
}

int Rectangulo::getAncho()
{

    return ancho;
}

void Rectangulo::setAncho(int w)
{

    ancho = w;
}

int Rectangulo::getAltura()
{

    return altura;
}

void Rectangulo::setAltura(int h)
{

    altura = h;
}

int Rectangulo::getArea()
{

    int area;
    area = altura * ancho;
    return area;
}

void Rectangulo::intersecta(Rectangulo rect)
{

    int h1 = altura;
    int w1 = ancho;
    int esqX1 = esquinaX;
    int esqY1 = esquinay;
    int h2 = rect.getAltura();
    int w2 = rect.getAncho();
    int esqX2 = rect.esquinaX;
    int esqY2 = rect.esquinay;

    if (esqX1 <= esqX2 + w2 && esqX1 + w1 >= esqX2)
    {
        if (esqY1 <= esqY2 + h2 && esqY1 + h1 >= esqY2)
        {
            cout << "Los rectangulos si intersectan" << endl;
        }
    }
    else
    {
        cout << "Los rectangulos no intersectan" << endl;
    }
}