using namespace std;

class Int
{
private:
	int member = 0;

public:
	Int();//default constructor
	~Int(); //default deconstructor

	void setMember(int);
	int getMember();

	friend Int operator< (Int &a, Int &b);//overloading "<" operator
};