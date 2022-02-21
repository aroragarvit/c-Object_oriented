#include <iostream>
using namespace std;

class Average {
    public:
    static void calculateAverage(float a,float b, float c) {
        cout<<(a+b+c)/3;
    }
};

int main()
{
    float a, b, c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    Average :: calculateAverage(a,b,c);
    return 0;
}