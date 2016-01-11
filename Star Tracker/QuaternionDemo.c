//
//  QuaternionDemo.c
//  Star Tracker
//
//  Created by Carlos Granados on 1/10/16.
//  Copyright © 2016 Ragnarok Industries. All rights reserved.
//

#include <stdio.h>
#include "Structures.h"
#include "StarMatching.h"
#include "Arithmetic.h"

int main () {
    quaternion output;
    axis currentAxis;
    double rotation;
    
    printf("Enter x: ");
    scanf("%lf", &currentAxis.x);
    printf("Enter y: ");
    scanf("%lf", &currentAxis.y);
    printf("Enter z: ");
    scanf("%lf", &currentAxis.z);
    printf("Enter the angle of rotation in degrees");
    scanf("%lf", &rotation);
    
    output = quaternionFromAxis(currentAxis, rotation);
    
    printf("%lf degree rotation around (%lf, %lf, %lf) = (%lf, %lf, %lf, %lf)", rotation, currentAxis.x, currentAxis.y, currentAxis.z, output.w, output.x, output.y, output.z);
    
    return 0;
}