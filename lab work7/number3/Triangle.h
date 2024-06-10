#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {
    class Triangle {
    private:
        double base;
        double height;
    public:
        Triangle();
        Triangle(double b, double h);
        ~Triangle();
        double getBase() const;
        double getHeight() const;
   
    };
}

#endif
