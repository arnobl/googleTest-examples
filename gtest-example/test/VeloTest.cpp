
#include "gtest/gtest.h"
#include "../src/Velo.h"


class VeloTest : public ::testing::Test {
 protected:
 	Velo velo;
	Guidon* guidon;
	
  void SetUp() override {
  	guidon = nullptr;
  }

  void TearDown() override {
		delete guidon;
  }
};

TEST_F(VeloTest, CreatVeloNoGuidon)
{
    EXPECT_EQ(velo.getGuidon(), nullptr);	
}

TEST_F(VeloTest, SetGuidonOK)
{
		guidon = new Guidon();
		velo.setGuidon(guidon);
    EXPECT_EQ(velo.getGuidon(), guidon);	
}

