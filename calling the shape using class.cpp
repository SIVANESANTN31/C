#include <iostream>
using namespace std;

class shape{
  public:
  shape()
  {
  cout<<"\t This is Shape"<<endl; 
  }
};
class polygon :public shape{
  public:
  polygon()
  {
  cout<<"\t polygon is a shape."<<endl;
  }
};
class rectangle :public shape{
  public:
  rectangle()
  {
  cout<<"\t rectangle is a polygon."<<endl; 
  }
};
class square :public rectangle{
  public:
  square()
  {
  cout<<"\t square is a rectangle."<<endl;
  }
};
class triangle :public shape{
  public:
  triangle()
  {
   cout<<"\t triangle is a polygon."<<endl;
  }
};
int main()
{	
 polygon p;
 triangle t;	
 rectangle r;
 square s;

}
