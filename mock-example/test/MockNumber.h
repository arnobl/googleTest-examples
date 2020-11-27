
#ifndef __MOCK_NUMBER__
#define __MOCK_NUMBER__

#include "../src/Number.h"
#include "gmock/gmock.h"

class MockNumber : public Number {
 public:
  MOCK_METHOD(int, getValue, (), (const, override));
  MOCK_METHOD(void, add, (const int val), (override));
};


#endif
