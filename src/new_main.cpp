#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main(){
  Rectangle rect;
  rect.set_width(15);
  rect.set_height(30);
  cout << "Rectangle are: " << rect.area() << endl;
  return 0;
}
