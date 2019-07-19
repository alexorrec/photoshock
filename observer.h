#ifndef OBSERVER_H
#define OBSERVER_H

#include <opencv2/imgproc/imgproc.hpp>


class Observer
{
public:
    Observer()= default;
    virtual ~Observer()= default;
    virtual void updateUi() = 0;
};

#endif // OBSERVER_H
