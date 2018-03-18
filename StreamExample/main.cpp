//first main function
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

struct Vector2D
{
	int a, b;

	void printf()
	{
		cout << a << " " << b << endl;
	}
};

std::ostream &operator <<(std::ostream &stream, Vector2D obj)
{
	stream << obj.a << " " << obj.b << endl;
	return stream;
}

int main()
{
	Vector2D myVector;
	myVector.a = 1;
	myVector.b = 2;
	/*printf("Hello, World\n");
	std::cout << "This is c++ Language!" << std::endl;*/
	//myVector.printf();

	cout << myVector;

	//c++스타일. 파일따로 콘솔따로 할 필요가 없어진다.
	std::ofstream ofile("cppstlye.txt");
	ofile << myVector << endl;

	/*	c 스타일
	FILE* of = fopen("cstyle.txt", "wt");
	fprintf(of, "%d %d", myVector.a, myVector.b);
	fclose(of);*/
	return 0;
}