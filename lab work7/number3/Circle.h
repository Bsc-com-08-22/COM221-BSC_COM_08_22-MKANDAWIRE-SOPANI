#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class Circle {
    private:
        double radius;
    public:
        Circle();
        Circle(double r);
        ~Circle();
        double getRadius() const;
       
    };
}

#endif
