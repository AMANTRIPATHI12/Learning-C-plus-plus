#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Student{
    private:
        string name;
        int roll_number;
        double marks;

    public:
        Student(string n, int r, double m){
            name = n;
            roll_number = r;
            marks = m;
        }
        // Getters
        string getName()const{
            return name;
        }

        int getRollNumber()const{
            return roll_number;
        }

        double getMarks()const{
            return marks;
        }
        // display
        void display()const{
            cout << "Roll no : " << roll_number << ", Name : " << name << ", Marks : " << marks << endl;
        }
};

// function to find topper (using array of objects)
int findTopper(Student students[], int size){
    int topperIndex = 0;
    for(int i = 0; i < size; i++){
        if(students[i].getMarks() > students[topperIndex].getMarks()){
            topperIndex = i;
        }
    }
    return topperIndex;
}

int main(){
    cout << "Hello multiverse" << endl;
    Student s1("Amar",101,95.2);
    Student s2("Akhbar",102,96.2);
    Student s3("Anthany",103,97.2);

    Student batch[] = {s1,s2,s3};

    int top = findTopper(batch , 3);
    cout << "Topper : ";
    batch[top].display();
}