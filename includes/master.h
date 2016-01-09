/*
 * This is the master include whose sole purpose is to include all
 * other defined includes that the programmers make, right now I
 * just put iostream as a place holder, and it can be used for debugging
 * but it can be removed later for stable builds.
 */

#ifndef MASTERLIST
#define MASTERLIST

#ifndef __fstream
#define __fstream
#include <fstream>
#endif

#ifndef __iostream
#define __isotream
#include <iostream>
#endif

#ifndef __vector
#define __vector
#include <vector>
#endif

#ifndef __string
#define __string
#include <string>
#endif

#endif
