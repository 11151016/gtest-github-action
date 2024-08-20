#include "PrintColorCode1.h"
#include <gtest/gtest.h>

TEST(PrintColorCodeTestSuite1, AssertColorCodeManualItemsCount1){
//Arrange
  int expectedCount=25;
 //Act
  int actualCount=printColorMap1();
  //Assert
  ASSERT_EQ(expectedCount,actualCount);
  
}
