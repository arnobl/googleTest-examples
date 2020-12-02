
#ifndef __NUMBER__
#define __NUMBER__

class Number {
  public:
    virtual ~Number() {}
    virtual int getValue() const = 0;
    virtual void add(const int val) = 0;
};

#endif

