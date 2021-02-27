#include <iostream>
 
using namespace std;

// Base class
class Shape {
   public:
      int a,b;
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
   protected:
      int width;
      int height;
   private:
      int c;
      int d;
};

// Derived class
class Rectangle: public Shape {
   public:
      int getArea() {
         return (width * height); 
      }
};

class Rectangle1: protected Shape {
   public:
      void setWidth1(int w) {
          width = w;
      }
      void setHeight1(int h) {
	  height = h;
      }
      void set_a(int aa) {
          a=aa;
      }
      void set_b(int bb) {
          b=bb;
      }
      int get_a() {
          return a;
      }
      int get_b() {
          return b;
      }
      int getArea() {
         return (width * height);
      }
};

class Rectangle2: private Shape {
   public:
      void set_a(int aa) {
          a=aa;
      }
      void set_b(int bb) {
          b=bb;
      }
      int get_a() {
          return a;
      }
      int get_b() {
          return b;
      }
      void setWidth2(int w) {
         width = w;
      }
      void setHeight2(int h) {
         height = h;
      }
      int getArea() {
         return (width * height);
      }
};

int main(void) {
   Rectangle Rect;
   Rectangle1 Rect1;
   Rectangle2 Rect2;
 
   Rect.setWidth(5);
   Rect.setHeight(7);

   Rect1.setWidth1(6);
   Rect1.setHeight1(7);
   
   Rect2.setWidth2(7);
   Rect2.setHeight2(7);

   Rect.a=8;
   Rect.b=9;
   Rect1.set_a(10);
   Rect1.set_b(11);
   Rect2.set_a(12);
   Rect2.set_b(13);
   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;
   cout << "Total area: " << Rect1.getArea() << endl;
   cout << "Total area: " << Rect2.getArea() << endl;

   cout << Rect.a << endl;
   cout << Rect.b << endl;
   cout << Rect1.get_a() << endl;
   cout << Rect1.get_b() << endl;
   cout << Rect2.get_a() << endl;
   cout << Rect2.get_b() << endl;
   return 0;
}
