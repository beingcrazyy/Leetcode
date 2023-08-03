#include<iostream>

using namespace std;

class find {
public:
   void print()  { cout <<" In find"; }
};
  
class course : public find {
public:
   void print() { cout <<" In course"; }
};
  
class tech: public course { };
  
int main(void)
{
    course c;
    c.print();
  tech t; 
  t.print();
  return 0;
}