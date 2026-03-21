#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// private data members length and width cannot be accessed directly from the main class(rect.length would cause error). This is encapsulation
// The constructor Rectangle(double l, double w) initializeses the object. It has the same name as class and no return type.
// public member fuctions provide the interface to interact with the object.
// Getters and setters allow controlled access to the data.

class Rectangle{
    private:
        double length;
        double width;
    public:
        // This is a constructor which gets called when a object gets created.
        Rectangle(double l,double w){
            length = l;
            width = w;
        }

        // Member fuctions
        double area(){
            return length * width;
        }

        double perimeter() {
            return 2 * (length + width);
        }

        // Setter (mutator)
        void setLength(double l){
            if(l <= 0){
                cout << "Enter value greater than 0" << endl;
            }
            else{
                length = l;
            }
        }

        void setWidth(double w){
            if(w <= 0){
                cout << "Enter value greater than 0" << endl;
            }
            else{
                width = w;
            }
        }
        
        // getter (accesser)
        double getLength(){
            return length;
        }
};

int main(){
    cout << "Hello Multiverse" << endl;
    double l;
    double w;
    cout << "Enter Length and width of rectangle :- ";
    cin >> l >> w;
    if(l <=0 || w <= 0){
        cout << "Enter value greater than 0" << endl;
        return 1;
    }
    else{
        Rectangle rect(l,w); // object creation
        cout << "Area : " << rect.area() << endl;
        cout << "Perimeter : " << rect.perimeter() << endl;
        rect.setLength(7.0);
        cout << "current Length : " << rect.getLength();
    }
    return 0;
}