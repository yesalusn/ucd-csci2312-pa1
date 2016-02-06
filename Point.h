/*
 * A 3-space Point class - interface modified by Nikki Yesalusky on 2/1/2016
 * Accessors and Mutators for private member functions are included
 * Default constructor sets all members to zero
 * 3 arg constructor sets values of members to user specification
 * One member function for computing distance between Point objects in
 * 3-space based on member values using basic distance formula
 */

#ifndef __POINT_H
#define __POINT_H

    class Point
    {

    private:
        double x, y, z;

    public:
        // Constructors
        Point();                      // default constructor
        Point(double x, double y, double z);    // three-argument constructor

        // Mutator methods
        void setX(double newX);

        void setY(double newY);

        void setZ(double newZ);

        // Accessor methods
        double getX() const;

        double getY() const;

        double getZ() const;

        //member function for computing distance between two "Point"s
        double distanceTo(const Point &p) const;
    };

#endif // __POINT_H