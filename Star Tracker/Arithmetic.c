//
//  Arithmetic.c
//  Star Tracker
//
//  Created by Carlos Granados on 1/10/16.
//  Copyright © 2016 Ragnarok Industries. All rights reserved.
//

#include "Structures.h"
#include <math.h>

double norm(struct vector point) {
    return sqrt( (point.x ^ 2) + (point.y ^ 2));
}

// C has no operator overloading :(
point addPoints(struct vector v1, struct vector v2) {
    point result;
    
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    
    return result;
}

point subtractPoints(struct vector v1, struct vector v2) {
    point result;
    
    result.x = v1.x - v2.x;
    result.y = v1.y - v2.y;
    
    return result;
}

double degreeToRadian(double number) {
    return number / 360 * (float)M_PI * 2;
}

double radianToDegree(double radian) {
    return radian * (180 * (float)M_PI);
}

// Returns a quaternion given the axis (x, y, z) and the angle of rotation theta in degrees.
quaternion quaternionFromAxis(const axis axis, double theta){
    quaternion output;
    
    // The arcosine function in the C library accepts radians
    // so we'll need to convert theta to radians.
    theta = degreeToRadian(theta);
    
    // We can build out quaternion
    output.w = cos(theta/2);
    output.x = axis.x * sin(theta/2);
    output.y = axis.y * sin(theta/2);
    output.z = axis.z * sin(theta/2);
    
    return output;
}