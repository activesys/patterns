#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include <list>

#include "observer.h"

class Subject
{
public:
    virtual void registerObserver(Observer* observer)
    {
        observers.push_back(observer);
    }
    virtual void unregisterObserver(Observer* observer)
    {
        observers.remove(observer);
    }
    virtual void notify()
    {
        for (std::list<Observer*>::iterator it = observers.begin(); it != observers.end(); ++it) {
            (*it)->update(this);
        }
    }

protected:
    std::list<Observer*> observers;
};

#endif // __SUBJECT_H__

