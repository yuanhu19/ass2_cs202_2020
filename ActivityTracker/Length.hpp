
#ifndef LENGTH_HPP_
#define LENGTH_HPP_

class Length {
private:
	//TODO: declare fields here
	int feet;
	int inches;
public:
	Length();
	Length(int feet, int inches);

	int getFeet() const;
	int getInches() const;
	int asInches() const;

	void addFeet(int feet);
	void addInches(int inches);
	void subtractFeet(int feet);
	void subtractInches(int inches);

	void add(const Length &other);
	void subtract(const Length &other);
	void average(Length &other);

	virtual ~Length();
};

#endif /* LENGTH_HPP_ */