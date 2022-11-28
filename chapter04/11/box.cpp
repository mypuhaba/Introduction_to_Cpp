#include "box.h"

double Box::getHeight() { return height; }

void Box::setHeight(double h) { height = h; }

double Box::getLength() { return length; }

void Box::setLength(double l) { length = l; }

double Box::getWidth() { return width; }

void Box::setWidth(double w) { width = w; }

double Box::getVolume() { return height * length * width; }