
#include "./MockNumber.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "../src/Point.h"

using ::testing::Return;
using ::testing::Mock;

class PointTest : public ::testing::Test {
	protected:
		MockNumber x;
		MockNumber y;
		Point pt = Point(&x, &y);
		
		void SetUp() override {
		}
		
		void TearDown() override {
		}
};


TEST_F(PointTest, getXOK) {
	EXPECT_EQ(&x, pt.getX());
}


TEST_F(PointTest, getYOK) {
	EXPECT_EQ(&y, pt.getY());
}

TEST_F(PointTest, translateOK) {
	MockNumber tx;
	MockNumber ty;
	Point tr = Point(&tx, &ty);

	EXPECT_CALL(x, add(100)).Times(1);
	EXPECT_CALL(y, add(-200)).Times(1);
	EXPECT_CALL(tx, getValue()).WillRepeatedly(Return(100));
	EXPECT_CALL(ty, getValue()).WillRepeatedly(Return(-200));

	pt.translate(tr);
}

TEST_F(PointTest, translateOK2Times) {
	MockNumber tx;
	MockNumber ty;
	Point tr = Point(&tx, &ty);

	EXPECT_CALL(x, add(20)).Times(1);
	EXPECT_CALL(x, add(2)).Times(1);
	EXPECT_CALL(y, add(11)).Times(1);
	EXPECT_CALL(y, add(-100)).Times(1);
	EXPECT_CALL(tx, getValue())
		.WillOnce(Return(20))
		.WillOnce(Return(2));
	EXPECT_CALL(ty, getValue())
		.WillOnce(Return(11))
		.WillOnce(Return(-100));

	pt.translate(tr);
	pt.translate(tr);
}


