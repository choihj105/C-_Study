// 1. Shape!
#include <iostream>
using namespace std;

class Shape {

public:
	virtual int getArea() = 0;
	virtual Shape* Clone() = 0;
	
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }

protected:
	int width;
	int height;
};

class Rectangle : public Shape {

public:
	virtual int getArea() {	return width * height;}

	virtual Shape* Clone()
	{
		Rectangle* r = new Rectangle;
		memcpy(r, this, sizeof(Rectangle));  // ±Ì¿∫∫πªÁ

		return r;
	}
};

class Triangle : public Shape {

public:
	virtual int getArea() { return (width * height / 2); }
	
	virtual Shape* Clone()
	{
		Triangle* t = new Triangle;
		memcpy(t, this, sizeof(Triangle)); // ±Ì¿∫∫πªÁ
		
		return t;
	}

};

int main() {

	Rectangle rect;
	Triangle  tri;

	rect.setWidth(5);
	rect.setHeight(7);

	tri.setWidth(5);
	tri.setHeight(7);

	cout << "Rectangle area: " << rect.getArea() << endl;

	cout << "Triangle area: " << tri.getArea() << endl;


	Rectangle* copied_rect = dynamic_cast<Rectangle*>(rect.Clone());

	Triangle* copied_tri = dynamic_cast<Triangle*>(tri.Clone());

	cout << "Copied rectangle area: " << copied_rect->getArea() << endl;

	cout << "Copied triangle area: " << copied_tri->getArea() << endl;


	return 0;

}
