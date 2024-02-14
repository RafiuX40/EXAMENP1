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

int Rectangulo::getAncho(){

    return ancho;

}

void Rectangulo::setAncho(int w){

    ancho = w;

}

int Rectangulo::getAltura(){

    return altura;

}

void Rectangulo::setAltura(int h){

    altura = h;

}

int Rectangulo::getArea(){

    int area;
    area = altura*ancho; 
    return area;

}

void Rectangulo::intersecta(Rectangulo rect){

    

}