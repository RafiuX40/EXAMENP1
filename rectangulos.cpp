#include <iostream>
#include <string>

using namespace std;

class Rectangulo{

    private:
        int ancho;
        int altura;
    public:
        int esquinaX;
        int esquinay;

    Rectangulo();
    Rectangulo(int x, int y);
    Rectangulo(int x, int y, int w, int h);

    void getAncho();
    void setAncho(int w);
    void getAltura();
    void setAltura(int h);
    void getArea();
    void intersecta(Rectangulo rectangulo);   
};

int main(){

}

