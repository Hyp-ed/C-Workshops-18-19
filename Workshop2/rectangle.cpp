#include "rectangle.hpp"

Rectangle::Rectangle(int height, int width)
    : width_(width),
      height_(height)
{}

int Rectangle::area()
{
    return width_*height_;
}

int Rectangle::getWidth()
{
    return width_;
}

void Rectangle::setWidth(int width)
{
    width_ = width;
}

int Rectangle::getHeight()
{
    return height_;
}

void Rectangle::setHeight(int height)
{
    height_ = height;
}