#include <iostream>
 
using namespace std;
 
class Line {
   public:
      double length;
      void setLength( double len );
      double getLength( void );
};
class Box {
   public:
      double length;
      void setWidth( double wid );
      double getWidth( void );
 
   private:
      double width;
   protected: 
      double width_prot;
};
class SmallBox:Box { // SmallBox is the derived class.
   public:
      void setSmallWidth( double wid );
      double getSmallWidth( void );
};
// Member functions definitions
double Line::getLength(void) {
   return length ;
}
 
void Line::setLength( double len) {
   length = len;
}

// Member functions definitions
double Box::getWidth(void) {
   return width ;
}
 
void Box::setWidth( double wid ) {
   width = wid;
}

// Member functions of child class
double SmallBox::getSmallWidth(void) {
   return width_prot ;
}
 
void SmallBox::setSmallWidth( double wid ) {
   width_prot = wid;
}
// Main function for the program
int main() {
   Line line;
   Box box;
   SmallBox box1;
   // set line length
   line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;
 
   // set line length without member function
   line.length = 10.0; // OK: because length is public
   cout << "Length of line : " << line.length <<endl;

 
   // set box length without member function
   box.length = 10.0; // OK: because length is public
   cout << "Length of box : " << box.length <<endl;
 
   // set box width without member function
   // box.width = 10.0; // Error: because width is private
   box.setWidth(10.0);  // Use member function to set it.
   cout << "Width of box : " << box.getWidth() <<endl;
   
   // set box width using member function
   box1.setSmallWidth(5.0);
   cout << "Width of box : "<< box1.getSmallWidth() << endl;
   return 0;
}
