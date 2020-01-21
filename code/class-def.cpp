#include <iostream>
using namespace std;

class ObjectName
{
public:
  int x;
private:
  int y;
};

int main()
{
  ObjectName obj;
  obj.x = 3;
  cout << "x: " << obj.x << endl;
  obj.y = 4;
  return 0;
}
