#include <iostream>
using namespace std;
class rectangle {
public:
	int length;
	int breadth;
    rectangle(int l, int b)
	 {
        cout << "rectangle with length " << length << " and breadth " << breadth << endl;
    }
    ~rectangle() 
	{
        cout << "rectangle destroyed." << endl;
    }
};
int main() {
    rectangle rectangle(6,2);
return 0;
}