/*
 * Singular computeArea function implementation created by Nikki Yesalusky on 2/1/2016
 * Addition to the PointTests class and Point class for use in computing the area of a
 * given triangle in 3-space
 */

#include <cmath>

#include "Point.h"
#include "PointTests.h"

/*
 *@summary - computeArea uses three "Point"s in 3-space to define an area
 * within them using Heron's forumula for finding area using sides of a triangle
 * @params - three const Point object references
 * @returns - double value for area of a triangle
 */
double computeArea(const Point &a, const Point &b, const Point &c)
{
	double distanceA = a.distanceTo(b);
	double distanceB = b.distanceTo(c);
	double distanceC = c.distanceTo(a);

	double s = .5 * (distanceA + distanceB + distanceC);

	double area = sqrt(s * (s - distanceA) * (s - distanceB) * (s - distanceC));

	return area;
}