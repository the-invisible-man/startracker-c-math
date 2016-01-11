//
//  StarMatching.h
//  Star Tracker
//
//  Created by Carlos Granados on 1/10/16.
//  Copyright © 2016 Ragnarok Industries. All rights reserved.
//

#ifndef StarMatching_h
#define StarMatching_h

#include "Structures.h"

struct apmm_result apmm(point p1, point p2, point p3);
struct pam_result pam(point p1, point p2, point p3);
struct vam_result vam(point p1, point p2, point p3);

#endif /* StarMatching_h */
