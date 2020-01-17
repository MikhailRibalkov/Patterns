#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include <string>


class Subscriber
{
public:
    Subscriber();
    virtual void update(std::string message) = 0;
};

class Subscriber1 : public Subscriber
{
public:
    virtual void update(std::string message);
};

class Subscriber2 : public Subscriber
{
public:
    virtual void update(std::string message);
};

#endif // SUBSCRIBER_H
