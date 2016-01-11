//
//  StarMatching.c
//  Star Tracker
//
//  Created by Carlos Granados on 1/10/16.
//  Copyright © 2016 Ragnarok Industries. All rights reserved.
//

#include "StarMatching.h"
#include "Structures.h"
#include "Arithmetic.h"
#include <math.h>

// Area & Polar Moment Method
struct apmm_result apmm(point p1, point p2, point p3){
    double a, b, c, s;
    struct apmm_result result;
    
    a = norm(subtractPoints(p1, p2));
    b = norm(subtractPoints(p2, p3));
    c = norm(subtractPoints(p1, p3));
    s = 0.5 * (a + b + c);
    
    result.area    = sqrt( (s*(s-a)) * (s-b) * (s-c) );
    result.moment  = result.area * (pow(a, 2) + pow(b, 2) + pow(c, 2)) / 36;
    
    return result;
}

// Planar Angle Method
struct pam_result pam(point p1, point p2, point p3){
    double a, b, c, radian_1, radian_2, radian_3;
    struct pam_result result;
    
    a = norm(subtractPoints(p1, p2));
    b = norm(subtractPoints(p2, p3));
    c = norm(subtractPoints(p1, p3));
    
    radian_1 = degreeToRadian((pow(a, 2) - pow(c, 2) - pow(b, 2)) / (-2 * c * b));
    radian_2 = degreeToRadian((pow(b, 2) - pow(a, 2) - pow(c, 2)) / (-2 * a * c));
    radian_3 = degreeToRadian((pow(c, 2) - pow(a, 2) - pow(b, 2)) / (-2 * a * b));
    
    result.theta1 = acos(radian_1);
    result.theta2 = acos(radian_2);
    result.theta3 = acos(radian_3);
    
    return result;
}

// Vector Angle Method
struct vam_result vam(point p1, point p2, point p3) {
    struct vam_result result;
    
    result.a = norm(subtractPoints(p1, p2));
    result.b = norm(subtractPoints(p2, p3));
    result.c = norm(subtractPoints(p1, p3));
    
    return result;
}