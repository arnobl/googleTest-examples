
#include "gtest/gtest.h"
#include "../src/Guidon.h"
#include "../src/Velo.h"


class GuidonTest : public ::testing::Test {
 protected:
 	Guidon guidon;
 	Velo* velo;
	
  void SetUp() override {
  	velo = nullptr;
  }

  void TearDown() override {
		delete velo;
  }
};

TEST_F(GuidonTest, CreatGuidonNoVelo)
{
    ASSERT_EQ(guidon.getVelo(), nullptr);	
}

TEST_F(GuidonTest, SetVeloOK)
{
		velo = new Velo();
		guidon.setVelo(velo);
    ASSERT_EQ(guidon.getVelo(), velo);
}

