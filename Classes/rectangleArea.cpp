#include<iostream>
using namespace std;
// This program gets user's input for length and width, then calculate the area of rectangle
class Rectangle{
    private:
        double length;
        double width;
    public:
        void setLength(double);
        void setWidth(double);
        double getLength() const;
        double getWidth() const;
        double getArea() const;
};

double Rectangle::getLength() const{
    return length;
};
double Rectangle::getWidth() const{
    return width;
};
void Rectangle::setLength(double value) {
    length = value;
};
void Rectangle::setWidth(double newValue){
    width = newValue;
}
double Rectangle::getArea() const{
    return length * width;
};

int main(){
    // create an object of a Rectangle class
     Rectangle rect1;
     // create another instance of a class
     Rectangle rect2;
     double length;
     double width;
     double area;
     double area2;

     cout<<"Enter the length of a rectangle: ";
     cin>>length;
     rect1.setLength(length);
     cout<<"Enter the width of the rectangle: ";
     cin>>width;
     rect1.setWidth(width);
     area = rect1.getArea();

     // for instance 2
     cout<<"Enter the length of a second rectangle: ";
     cin>>length;
     rect2.setLength(length);
     cout<<"Enter the widht for second rectangle: ";
     cin>>width;
     rect2.setWidth(width);
     area2 = rect2.getArea();
     cout<< "The are of a rectangle is "<<area<<endl;
     cout<< "The are of a second rectangle is "<<area2<<endl;

    return 0;
}
