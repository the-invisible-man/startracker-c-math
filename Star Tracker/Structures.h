//
//  Header.h
//  Star Tracker
//
//  Created by Carlos Granados on 1/10/16.
//  Copyright © 2016 Ragnarok Industries. All rights reserved.
//

#ifndef Structures_h
#define Structures_h

typedef struct vector {
    int x;
    int y;
} point;


// Area & Polar Moment Method
struct apmm_result {
    double area, moment;
};

// Planar Angle Method
struct pam_result {
    double theta1, theta2, theta3;
};

// Vector Angle Method
struct vam_result {
    double a, b, c;
};

typedef struct axis {
    double x, y, z;
} axis;

typedef struct quaternion {
    double w, x, y, z; 
} quaternion;

#endif /* Header_h */
