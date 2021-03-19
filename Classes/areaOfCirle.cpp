#include<iostream>
using namespace std;

class Circle{
    private:
        double radius;
    public:
        void setRadius(double);
        double getRadius() const;
        double getArea() const;
    double PI = 3.14;
};
void Circle::setRadius(double value){
    radius = value;
}
double Circle::getRadius() const{
    return radius;
}
double Circle::getArea() const{
    return PI * radius * radius;
}

int main(){
    // create an instance of a circle class
    Circle circle1;
    double radius;
    double area1;
    cout<<"Enter radius: ";
    cin>>radius;
    circle1.setRadius(radius);
    area1 = circle1.getArea();

    // create a second instance of the circle class
    Circle circle2;
    double area2;
    cout<<"Enter a radius for second cirlce: ";
    cin>> radius;
    circle2.setRadius(radius);
    area2 = circle2.getArea();

    cout<<"The are of a cirle is "<< area1<<endl;
    cout<<"The are of second cirle is "<< area2<<endl;

    return 0;
}