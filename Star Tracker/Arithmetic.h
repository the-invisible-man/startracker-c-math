//
//  arithmetic.h
//  Star Tracker
//
//  Created by Carlos Granados on 1/10/16.
//  Copyright © 2016 Ragnarok Industries. All rights reserved.
//

#ifndef arithmetic_h
#define arithmetic_h

#include "Structures.h"

double norm(struct vector point);
point addPoints(struct vector v1, struct vector v2);
point subtractPoints(struct vector v1, struct vector v2);
double degreeToRadian(double number);
double radianToDegree(double radian);
quaternion quaternionFromAxis(const axis axis, double theta);

#endif /* arithmetic_h */