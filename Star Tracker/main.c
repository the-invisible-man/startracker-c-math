//
//  main.c
//  Star Tracker
//
//  Created by Carlos Granados on 1/10/16.
//  Copyright © 2016 Ragnarok Industries. All rights reserved.
//

#include <stdio.h>
#include "Structures.h"
#include "StarMatching.h"
#include "Arithmetic.h"

int main(int argc, const char * argv[]) {
    
    point v1, v2, v3;
    struct apmm_result AREA_AND_POLAR_MOMENT;
    struct pam_result PLANAR_ANGLE;
    struct vam_result VECTOR_ANGLE;

    v1.x = 13;
    v1.y = 28;
    
    v2.x = 18;
    v2.y = 22;
    
    v3.x = 6;
    v3.y = 10;
    
    // Area & Polar Moment Method
    AREA_AND_POLAR_MOMENT   = apmm(v1, v2, v3);
    
    // Planar Angle Method
    PLANAR_ANGLE            = pam(v1, v2, v3);
    
    // Vector Angle
    VECTOR_ANGLE            = vam(v1, v2, v3);
    
    printf("The Polar Moment method resulted in an area of %lf and moment %lf", AREA_AND_POLAR_MOMENT.area, AREA_AND_POLAR_MOMENT.moment);
    
    return 0;
}