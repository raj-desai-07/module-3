#include<iostream>
using namespace std;

class Area{
	public:
		void findArea(int l, int w){
			cout << "Using OOP : -->" << endl;
			cout << "Area of Rectangle is : " << l*w;
		}
};

int main(){
	int a, l, w;
	
	cout << "Enter Length of Ractangle : ";
	cin >> l;

	cout << "Enter Width of Ractangle : ";
	cin >> w;
	
	a = l * w;
	cout << endl << "Using POP : -->" << endl << "Area of Rectangle is : " << a << endl;
	
	Area obj;
	
	obj.findArea(l, w);	
	
	
	return 0;
}
