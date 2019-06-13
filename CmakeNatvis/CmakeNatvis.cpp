// CmakeNatvis.cpp : Defines the entry point for the application.
//

#include "CmakeNatvis.h"

#include <vector>
#include <string>

using namespace std;

class MyPoint
{
public:
	int x = 1;
	int y = 2;
};

int
main()
{
	vector<string> v;
	v.emplace_back("hello!");

	MyPoint zzz;
	vector<MyPoint> v2;
	v2.emplace_back(zzz);

	cout << "Hello CMake." << endl;

 	return 0;
}
