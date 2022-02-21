#include <iostream>
 
using namespace std;
 
class Volume
{
	int length, breadth, height;
	public:
		Volume() : length(10), breadth(10), height(10)
		{
 
		}
		int printVolume()
		{
			return length * breadth * height;
		}
};
 
int main()
{
	Volume box1;
	cout << box1.printVolume() << endl;
	return 0;
}