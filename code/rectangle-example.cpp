#include <iostream>
using namespace std;

class Rectangle
{
public:
  int width;
  int height;
  Rectangle();
  Rectangle(int w, int h);
};
Rectangle::Rectangle()
{
  width = 1;
  height = 1;
}
Rectangle::Rectangle(int w, int h)
{
  width = w;
  height = h;
}
int main()
{
  Rectangle r1(3,4);
  Rectangle r2;
  cout << "r1 width: " << r1.width <<
    " r1 height: " << r1.height << endl;
  cout << "r2 width: " << r2.width <<
    " r2 height: " << r2.height << endl;
  return 0;
}
