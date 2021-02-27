#include <iostream>
 
using namespace std;

// Base class Shape
class Shape {
   public:
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
      int a;
};

// Base class PaintCost
class PaintCost {
   public:
      int getCost(int area) {
         return area * 70;
      }
   protected:
      int a;
   private:
      int b;
};

// Derived class
class Rectangle: public Shape, public PaintCost {
   public:
      int getArea() {
         return (width * height); 
      }
};
// Derived class
class Rectangle1: public Shape, protected PaintCost {
   public:
      int getArea() {
         return (width * height); 
      }
      int getCost_1(int area) {
         return getCost(area);
      }
};
// Derived class
class Rectangle2: public Shape, private PaintCost {
   public:
      int getArea() {
         return (width * height); 
      }
      int getCost_2(int area) {
         return getCost(area);
      }
};
// Derived class
class Rectangle3: public Shape, public PaintCost {
   public:
      int getArea() {
         return (width * height); 
      }
};
// Derived class
class Rectangle4: protected Shape, public PaintCost {
   public:
      void setWidth_4(int w) {
         width = w;
      }
      void setHeight_4(int h) {
         height = h;
      }
      int getArea() {
         return (width * height); 
      }
};
// Derived class
class Rectangle5: private Shape, public PaintCost {
   public:
      void setWidth_5(int w) {
         width = w;
      }
      void setHeight_5(int h) {
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
   Rectangle3 Rect3;
   Rectangle4 Rect4;
   Rectangle5 Rect5;
   int area;
   int area1;
   int area2;
   int area3;
   int area4;
   int area5;
 
   Rect.setWidth(5);
   Rect.setHeight(7);
   Rect1.setWidth(8);
   Rect1.setHeight(9);
   Rect2.setWidth(10);
   Rect2.setHeight(11);
   Rect3.setWidth(12);
   Rect3.setHeight(13);
   Rect4.setWidth_4(14);
   Rect4.setHeight_4(15);
   Rect5.setWidth_5(16);
   Rect5.setHeight_5(17);

   area = Rect.getArea();
   area1 = Rect1.getArea();
   area2 = Rect2.getArea();
   area3 = Rect3.getArea();
   area4 = Rect4.getArea();
   area5 = Rect5.getArea();
   
   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;
   cout << "Total area: " << Rect1.getArea() << endl;
   cout << "Total area: " << Rect2.getArea() << endl;
   cout << "Total area: " << Rect3.getArea() << endl;
   cout << "Total area: " << Rect4.getArea() << endl;
   cout << "Total area: " << Rect5.getArea() << endl;

   // Print the total cost of painting
   cout << "Total paint cost: $" << Rect.getCost(area) << endl;
   cout << "Total paint cost: $" << Rect1.getCost_1(area1) << endl;
   cout << "Total paint cost: $" << Rect2.getCost_2(area2) << endl;
   cout << "Total paint cost: $" << Rect3.getCost(area3) << endl;
   cout << "Total paint cost: $" << Rect4.getCost(area4) << endl;
   cout << "Total paint cost: $" << Rect5.getCost(area5) << endl;

   return 0;
}

