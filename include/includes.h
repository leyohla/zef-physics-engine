#ifndef INCLUDES_H
#define INCLUDES_H

#define MAX_V 10
#define MIN_V 3
#define DEF_GRAV 0.0004
#define MAX_BODIES 100
#define POLYGON 0
#define CIRCLE 1
#define MIN_POLY_RAD 20
#define MAX_POLY_RAD 140

#define RED 240, 50, 80
#define YELLOW 222, 237, 11
#define SHOW_NORMALS 1 << 0
#define SHOW_POLYMIDS 1 << 1


#include "SDL2/SDL.h"
#include <iostream>
#include <string>
#include "Vector.h"
#include "Display.h"
#include "Polygon.h"
#include "Circle.h"
#include "Shape.h"
#include "utils.h"
#include "math.h"
#include "Body.h"
#include "World.h"
#include <memory>

#endif
