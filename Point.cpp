/*
 * A 3-space Point class - implementation created by Nikki Yesalusky on 2/1/2016
 * Accessors and Mutators for private member functions are included
 * Default constructor sets all members to zero
 * 3 arg constructor sets values of members to user specification
 * One member function for computing distance between Point objects in
 * 3-space based on member values using basic distance formula
 */

#include <cmath>

#include "Point.h"

	// default sets all three members to zero
	Point::Point()
	{
		x = 0.0;
		y = 0.0;
		z = 0.0;
	}

	// 3 arg sets members to user specs
	Point::Point(double x, double y, double z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

// member mutator functions
	void Point::setX(double newX)
	{
		x = newX;
	}

	void Point::setY(double newY)
	{
		y = newY;
	}

	void Point::setZ(double newZ)
	{
		z = newZ;
	}

// member accessors functions
	double Point::getX() const
	{
		return x;
	}

	double Point::getY() const
	{
		return y;
	}

	double Point::getZ() const
	{
		return z;
	}

	/*
	 * @summary - distanceTo calculates the distance between two Point
	 * objects in 3-space using respective member values and the basic
	 * equation for distance between points
	 * @params - const Point object reference
	 * @returns - double value for distance
	 */
	double Point::distanceTo(const Point &p) const
	{
		double distance = sqrt(pow(this->getX() - p.getX(), 2) + pow(this->getY() - p.getY(), 2) +
		                       pow(this->getZ() - p.getZ(), 2));
		return distance;
	}