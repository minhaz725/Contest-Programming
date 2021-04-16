#include<iostream>
#include<cmath>
using namespace std;

typedef enum { UNDEFINED, POINT2D, RECTANGLE, CIRCLE, POINT3D, SPHERE, SQUARE } STYPE;

class Shape
{
	STYPE type;
public:
	Shape();
	Shape(STYPE type);
	virtual void print();
	virtual double area();
	virtual bool contains(const Shape *s);
	//Intentionally made non-virtual
    bool operator==(const Shape &rhs);
	virtual ~Shape(){}
};

Shape::Shape()
{
	type = UNDEFINED;
}

Shape::Shape(STYPE argtype)
{
	type = argtype;
}

double Shape::area()
{
	cout << "I am a dummy Shape";
	return 0.0;
}

bool Shape::contains(const Shape *rhs)
{
	cout << "You see this, because appropriate contains function is undefined";
	return false;
}

void Shape::print()
{
	cout << "Type: " << type;
}

bool Shape::operator==(const Shape &rhs)
{
	if(type==rhs.type) return true;
	else return false;
}

class Point2D : public Shape
{
	double x,y;
public:
	Point2D();
	Point2D(STYPE argtype, int argx, int argy);
	void print();
	double area();
	bool contains(const Shape * rhs);
	bool contains(const Point2D * rhs);
	bool operator==(const Point2D &rhs);

	void setX(double p) {x=p;}
	void setY(double q) {y=q;}
	double getX() const { return x; }
	double getY() const { return y; }
	virtual ~Point2D(){}
};

Point2D::Point2D() //calls Base's default constructor
{
	x = 0.0;
	y = 0.0;
}

Point2D::Point2D(STYPE argtype, int argx, int argy) : Shape(argtype)
{
	x = argx;
	y = argy;
}

void Point2D::print()
{
	Shape::print();
	cout << "  (" << x << "," << y << ")"<<endl;
}

double Point2D::area()
{
	return 0.0;
}

bool Point2D::contains(const Shape *s)
{
	const Point2D *pointType;
	pointType= dynamic_cast<const Point2D*>(s);
	if(pointType!=NULL)
	{
		//Supported
		return contains(pointType);
	}
	//By default, use base
	return Shape::contains(s);
}

bool Point2D::contains(const Point2D * rhs)
{
	if(x==rhs->x && y==rhs->y) return true;
	else return false;
}

bool Point2D::operator==(const Point2D &rhs)
{
	if( !Shape::operator==(rhs) ) return false;
	if( x==rhs.x && y==rhs.y ) return true;
	else return false;
}



class Rectangle : public Shape
{
	Point2D tr;
	Point2D bl;
public:

	Rectangle();//implement this
	Rectangle(STYPE type, Point2D x, Point2D y);//implement this
	/*void setTR(Point2D x);
	void setBL(Point2D Y);*/
	double getTRX() const {return tr.getX();}
	double getTRY() const {return tr.getY();}
	double getBLX() const {return bl.getX();}
	double getBLY() const {return bl.getY();}


	void print(); //implement this
	double area(); //implement this
	bool contains(const Shape *rhs); //implement this to check containment for point2d only
	bool contains(const Point2D *p);
	bool operator==(const Rectangle &rhs); //implement this
	~Rectangle(){}
};

Rectangle::Rectangle():Shape(RECTANGLE)
{
    tr.setX(0);
    tr.setY(0);
    bl.setX(0);
    bl.setY(0);
}


Rectangle::Rectangle(STYPE type, Point2D x, Point2D y):Shape(type)
{
    tr.setX(y.getX());
    tr.setY(y.getY());
    bl.setX(x.getX());
    bl.setY(x.getY());

}

void Rectangle::print()
{
    Shape::print();
    cout << "  Bottom Left: (" << getBLX() << "," << getBLY() << ") ,";
    cout << "Top right (" << getTRX() << "," << getTRY() << ") ,";
    cout<<"Hight: "<<getTRY()-getBLY();
    cout<<" , Width: "<<getTRX()-getBLX()<<endl;

}


double Rectangle::area()
{
    return( (getTRY()-getBLY()) * (getTRX()-getBLX()) );
}


bool Rectangle::contains(const Shape *s)
{
    const Point2D * pointType = dynamic_cast<const Point2D*>(s);
	if(pointType!=NULL)
	{
		//Supported
		return contains(pointType);
	}

	return Shape::contains(s);
}


bool Rectangle::contains(const Point2D *p)
{
    if( ( getBLX() + p->getX() < getTRX() ) && ( getBLY() + p->getY() < getTRY()) )
    return true;
    else return false;
}

bool Rectangle::operator==(const Rectangle &rhs)
{
	if( !Shape::operator==(rhs) ) return false;
	if( ( getBLX()==rhs.getBLX() && getBLY()==rhs.getBLY() ) && ( getTRX()==rhs.getTRX() && getTRY()==rhs.getTRY() ) ) return true;
	else return false;
}





class Circle : public Shape
{
	Point2D center;
	double radius;
public:
	Circle();
	Circle(STYPE type, Point2D c, double r); //implement this
	double area(); //implement this
	void print();  //implement this
	bool contains(const Shape * s);    //implemented partially
	bool contains(const Point2D * p);  //implement this
	bool contains(const Circle * rhs); //implement this
	bool contains(const Rectangle * p); //implement this
	bool operator==(const Circle &rhs); //implement this
	~Circle(){}
};

Circle::Circle(STYPE type, Point2D c, double r) : Shape(type)
{
    center.setX(c.getX());
    center.setY(c.getY());
    radius=r;
}

double Circle::area()
{
    return (2*3.1416*radius);
}

void Circle::print()
{
    Shape::print();
	cout << "  Center: (" << center.getX() << "," << center.getY() << ") , ";
    cout<<"Radius: "<<radius<<endl;
}


bool Circle::contains(const Shape *s)
{
    cout<<"gen gen gen gen"<<endl;
/////////convert rule: derive *derive_pointer = dynamic_cast<derive*>(base_pointer);

	const Rectangle * rectangleType = dynamic_cast<const Rectangle*>(s);
	if(rectangleType!=NULL)/////here conversion will fail ,so pointer s wont change,it'll just return a null pointer
	{
		//Supported
		cout<<"gen r"<<endl;
		return contains(rectangleType);
	}
	const Circle * circleType = dynamic_cast<const Circle*>(s);

	if(circleType!=NULL)
	{
		//Supported
		cout<<"gen c"<<endl;
		return contains(circleType);
	}

	const Point2D * pointType = dynamic_cast<const Point2D*>(s);
	if(pointType!=NULL)
	{
		//Supported
		cout<<"gen pd"<<endl;
		return contains(pointType);
	}
	//By default
	return Shape::contains(s);
}


bool Circle::contains(const Point2D *p)
{
    cout<<"pd pd pd"<<endl;
   if ( radius > sqrt( (center.getX()-p->getX())*(center.getX()-p->getX()) + (center.getY()-p->getY())*(center.getY()-p->getY()) ) )
    return true;
   else return false;
}


bool Circle::contains(const Circle *rhs)
{
	//complete this function
	cout<<"c c c"<<endl;
	if(radius > rhs->radius + sqrt((center.getX()-rhs->center.getX())*(center.getX()-rhs->center.getX()) + (center.getY()-rhs->center.getY())*(center.getY()-rhs->center.getY())) )
         return true;
    else return false;
}

bool Circle::contains(const Rectangle *p)
{
    cout<<"r r r"<<endl;
        double h=p->getTRY() - p->getBLY();
        double w=p->getTRX() - p->getBLX();
        if(
        (radius > sqrt(( center.getX() - p->getBLX() )*( center.getX() - p->getBLX() ) +  ( center.getY() - p->getBLY() )*( center.getY() - p->getBLY() ) ) )
                                                                &&
        (radius > sqrt( ( center.getX() - p->getTRX() )*( center.getX() - p->getTRX() ) +  ( center.getY() - p->getTRY() )*( center.getY() - p->getTRY() ) ) )
                                                                &&
        (radius > sqrt( ( center.getX() - p->getBLX() +w )*( center.getX() - p->getBLX() + w ) +  ( center.getY() - p->getBLY() )*( center.getY() - p->getBLY() ) ) )
                                                                &&
        (radius > sqrt( ( center.getX() - p->getBLX() )*( center.getX() - p->getBLX()  ) +  ( center.getY() - p->getBLY() + h )*( center.getY() - p->getBLY() + h ) ) )
         )
         return true;
         else false;
}


bool Circle::operator==(const Circle &rhs)
{
	if( !Shape::operator==(rhs) ) return false;
	if( center.getX()==rhs.center.getX() && center.getY()==rhs.center.getY()  && radius==rhs.radius) return true;
	else return false;
}



class Shape3D : public Shape
{
public:
	Shape3D();
	Shape3D(STYPE type);
	virtual double volume();
    ~Shape3D(){}
};

Shape3D::Shape3D() : Shape(UNDEFINED)
{

}

Shape3D::Shape3D(STYPE argtype) : Shape(argtype)
{

}

double Shape3D::volume()
{
	cout << "You see this, because appropriate function is missing in the derived class";
	return 0.0;
}






class Point3D : public Point2D
{
    double z;
public:
    Point3D(); //already implemented
    Point3D(STYPE type, double argx, double argy, double argz); //implement this
    void setZ(double argz) {z=argz;}
    double getZ() const {return z;}
    void print(); //already implemented
    //double area(); Not needed, base version is sufficient
	bool contains(const Shape *rhs); //implement this
	bool contains(const Point3D *rhs);  //implement this
	~Point3D(){}
};

Point3D::Point3D()
{
    z = 0;
}


Point3D::Point3D(STYPE type, double argx, double argy, double argz) : Point2D(type,argx,argy)
{
    z=argz;
}

void Point3D::print()
{
	Shape::print();
    cout << "   (" << getX() << "," << getY() << "," << z << ")"<<endl;
}

bool Point3D::contains(const Shape *s)
{
	const Point3D *pointType3D;
	pointType3D= dynamic_cast<const Point3D*>(s);
	if(pointType3D!=NULL)
	{
		//Supported
		return contains(pointType3D);
	}
	//By default, use base
	return Shape::contains(s);
}

bool Point3D::contains(const Point3D *rhs)
{
    if(getX()==rhs->getX() && getY()==rhs->getY() && z==rhs->z) return true;
	else return false;
}



class Sphere : public Shape3D
{
	Point3D center;
	double radius;
public:
	Sphere();//implement this
	Sphere(STYPE type, Point3D c, double r);//implement this
	void print(); //implement this
	double area(); //implement this
	double volume(); //implement this
	bool contains(const Shape * rhs); //implement this for checking containgment of Point3D, Sphere inside sphere
	bool contains(const Point3D * p); //implement this
	bool contains(const Sphere * s); //implement this
	~Sphere(){}
};

Sphere::Sphere() : Shape3D(SPHERE)
{
    center.setX(0);
    center.setY(0);
    center.setZ(0);
    radius=0;
}

Sphere::Sphere(STYPE type, Point3D c, double r) : Shape3D(type)
{
    center = c;
    radius=r;
}

void Sphere::print()
{
    Shape3D::print();
    cout << "  Center: (" << center.getX() << "," << center.getY() << "," << center.getZ() << ") , Radius: " <<radius<<endl;

}

double Sphere::area()
{
    return 4*3.1416*radius*radius;
}

double Sphere::volume()
{
    return (4.0/3.0)*3.1416*radius*radius*radius;
}


bool Sphere::contains(const Shape *s)
{
    const Point3D *pointType3D;
	pointType3D= dynamic_cast<const Point3D*>(s);
	if(pointType3D!=NULL)
	{
		//Supported
		return contains(pointType3D);
	}

	const Sphere *spheretype;
	spheretype= dynamic_cast<const Sphere*>(s);
	if(spheretype!=NULL)
    {
        return contains(spheretype);
    }
	//By default, use base
	return Shape::contains(s);
}

bool Sphere::contains(const Point3D *p)
{
    if ( radius > sqrt( (center.getX()-p->getX())*(center.getX()-p->getX()) + (center.getY()-p->getY())*(center.getY()-p->getY()) +  (center.getZ()-p->getZ())*(center.getZ()-p->getZ())) )
    return true;
    else return false;

}

bool Sphere::contains(const Sphere *rhs)

{
    if(radius > rhs->radius + sqrt((center.getX()-rhs->center.getX())*(center.getX()-rhs->center.getX()) + (center.getY()-rhs->center.getY())*(center.getY()-rhs->center.getY()  +    (center.getZ()-rhs->center.getZ())*(center.getZ()-rhs->center.getZ())) ) )
         return true;
    else return false;
}

int main(void)
{
	//Write main function to demonstrate your code
	//Create circles, rectanges, point2d,point3d,and sphere objects using base class pointers
	//then call the virtual methods to show that polymorphism works!

		int choice = 10;
		Shape * shape,*shape1;
		Shape3D * shape3D,*shape3D1;
		Point2D p1(POINT2D,0.0,0.0);

				Point2D p2(POINT2D,5.0,5.0);
				shape = new Circle(CIRCLE,p1,10.0);
				shape1= new Circle(CIRCLE,p1,5.0);
				cout<<endl;
				shape->print();
				shape1= new Point2D(p2);
				shape1->print();

				cout<<"\n\n\n\n\n";
				shape1 = new Rectangle(RECTANGLE,p1,p2);
				shape1->print();
				shape->print();
				shape->contains(shape1);


				cout<<"\n\n\n\n\n";
		Circle *c=new Circle(CIRCLE,p1,10.0);
		Point2D *p=new Point2D(POINT2D, 5.0,10.0);
		c->contains(p);
		/*cout << "1. Point2D 2. Rectangle 3. Circle 4. Point3D 5. Sphere. 0. Exit\n";
		cout << "Your choice:";
		cin >> choice;
		switch(choice)
		{
			case 1:
			{
                shape = new Point2D(POINT2D, 5.0,10.0);
				shape1= new Point2D(POINT2D, 5.0,10.0);
				cout<<endl;
				shape->print();
				shape->print();
				cout << "\nArea: " << shape->area()<<endl;
				cout << "\nArea: " << shape1->area()<<endl;
				bool b=shape->contains(shape1);
				if(b==true) cout<<"contains"<<endl;
				else cout<<"does not contain"<<endl;


				break;
            }
			case 2:
			{
				Point2D p1(POINT2D,5.0,5.0);
				Point2D p2(POINT2D,20.0,20.0);
				Point2D p3(POINT2D,10.0,10.0);
				Point2D p4(POINT2D,15.0,15.0);
				shape = new Rectangle(RECTANGLE, p1, p2);
				shape1= new Rectangle(RECTANGLE, p3, p4);
				cout<<endl;
				shape->print();
				cout << "\nArea: " << shape->area()<<endl;
				shape1->print();
				cout << "\nArea: " << shape1->area()<<endl;

				shape1= new Point2D(p3);
				bool b=shape->contains(shape1);
				shape->print();
				shape1->print();
				if(b==true) cout<<"contains "<<endl;
				else cout<<" does not contain"<<endl;
				break;
			}
			case 3:
			{
				Point2D p1(POINT2D,0.0,0.0);
				Point2D p2(POINT2D,5.0,5.0);
				shape = new Circle(CIRCLE,p1,10.0);
				shape1= new Circle(CIRCLE,p1,5.0);
				cout<<endl;
				shape->print();
				cout << "\nArea" << shape->area()<<endl;
				shape1->print();
				cout << "\nArea" << shape1->area()<<endl;
				bool b=shape->contains(shape1);
				if(b==true) cout<<"contains "<<endl;
				else cout<<" does not contain"<<endl;

				shape1= new Point2D(p2);
				b=shape->contains(shape1);
				shape1->print();
				shape->print();
				if(b==true) cout<<"contains "<<endl;
				else cout<<" does not contain"<<endl;
				shape1 = new Rectangle(RECTANGLE,p1,p2);
				shape1->print();
				shape->print();
				b=shape->contains(shape1);
				if(b==true) cout<<"contains "<<endl;
				else cout<<" does not contain"<<endl;
				break;
			}
			case 4:
			{
				shape = new Point3D(POINT3D,5.0,10.0,20.0);
				shape1= new Point3D(POINT3D,5.0,10.0,20.0);
				cout<<endl;
				shape->print();
				cout << "\nArea: " << shape->area()<<endl;
				shape1->print();
				cout << "\nArea: " << shape1->area()<<endl;
				shape->contains(shape1);
				bool b=shape->contains(shape1);
				if(b==true) cout<<"contains "<<endl;
				else cout<<" does not contain"<<endl;
				break;
			}
			case 5:
			{
				Point3D p1(POINT3D,0.0,0.0,0.0);
				Point3D p2(POINT3D,5.0,5.0,5.0);
				shape3D = new Sphere(SPHERE,p1,15.0);
				shape3D1 = new Sphere(SPHERE,p1,10.0);
				cout<<endl;
				shape3D->print();
				cout << "\nArea: " << shape3D->area();
				cout << "\nVolume: " << shape3D->volume()<<endl;
				shape3D1->print();
				cout << "\nArea: " << shape3D1->area();
				cout << "\nVolume: " << shape3D1->volume()<<endl;
				bool b=shape3D->contains(shape3D1);
				if(b==true) cout<<"contains "<<endl;
				else cout<<" does not contain"<<endl;
				shape1 = new Point3D(p2);
				p2.print();
				shape3D->print();
                b=shape3D->contains(shape1);
				if(b==true) cout<<"contains "<<endl;
				else cout<<" does not contain"<<endl;

				break;
			}
		}
		if(choice==0.0)break;
	}
*/
	//add other functions for demonstration
	return 0;
}






