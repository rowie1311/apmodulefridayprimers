#include <iostream>
#include <string>
#include <algorithm>
#include <random>
using namespace std;

#define PI 3.14159

float AreaOfCircle(float radius);
float AreaWithDiameter(float diameter);

int main() {
  float radius,diameter,circleArea;
	char choice='0';
	cout<<"\nFind Area Of Circle"<<endl;
  cout << "\n Enter 1 If Using Radius, 2 If Using Diameter: ";
  cin >> choice;
	for (;choice!='1'&&choice!='2';) {
		cout << choice;
		if(choice!='1'&&choice!='2')
		         cout<<"\n\t\tEnter a VALID Option ";
             break;
	}
	if(choice=='1') {
    cout << " Enter Your Circles Radius: ";
		cin >> radius;
		circleArea=AreaOfCircle(radius);
	} else if(choice=='2') {
    cout << " Enter Your Circles Diameter: ";
		cin >> diameter;
		circleArea=AreaWithDiameter(diameter);
	}
  cout << "  The Area Of Your Circle Is: " << circleArea << endl;
	return 0;
}
float AreaOfCircle(float radius) {
	return (PI*(radius*radius));
}
float AreaWithDiameter(float diameter) {
	return (AreaOfCircle(diameter/2));
}
