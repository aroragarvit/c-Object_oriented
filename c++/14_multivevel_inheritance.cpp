// multilevel inheritance a---> b -----> c  
#include<iostream>
using namespace std;

class student {

    protected:
    int roll_no;
    public:

    void set_roll_no(int);

    void get_roll_no();
};

void student :: set_roll_no( int r ){
    roll_no=r;
}

void student :: get_roll_no() {

    cout<<"the roll number is "<< roll_no <<endl;
}

class exam: public student {
protected:
float maths;
float physics;

public:

void set_marks(float,float);

void get_marks(void);
};


void exam :: set_marks(float m1, float m2)
{
maths=m1;
physics = m2;

}

void exam:: get_marks(){
    cout<<"the marks obtained in maths are "<<maths << endl;
    cout << " the marks obtained  in physics are "<< physics<<endl;

}

class result : public exam {
    float percentage ;
public:
    void display()
    {
       get_roll_no();

        get_marks();

        cout << "your percentage is "<<maths+physics/2<<endl;
   
    }

};

int main()

{
    result harry;
    harry.set_roll_no(420);
    harry.set_marks(94.0,89.3);
    harry.display();


}
