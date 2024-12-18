// classes example
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area() {return width*height;}
};

void Rectangle::set_values (int x, int y) { //Definir la funcion set_values de la clase Rectangle
  width = x; //Valor a elemento de la clase
  height = y; //Valor a elemento de la clase
}

int main () { //Se compila lo que esta dentro de main
  Rectangle rect; //Objeto rect de la clase Rectangle
  rect.set_values (3,4);
  cout << "area: " << rect.area()<<endl;
  return 0;
}
