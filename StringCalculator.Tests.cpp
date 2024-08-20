#include <gtest/gtest.h>
#include "StringCalculator.h"

TEST(string_calculator_add_when_passed_a_single_number,returns_0_for_empty_string){
 //Arrange
  StringCalculator calculator;
  string input="";
  int expectedsum=0;
  //Act
  int actualSum=calculator.Add(input);
  //Assert
  ASSERT_EQ(actualSum,expectedsum);
}

TEST(string_calculator_add_when_passed_a_single_number,returns_sum_Val_for_both_input_string){
 //Arrange
  StringCalculator calculator;
  string input="1,2";
  int expectedsum=3;
  //Act
  int actualSum=calculator.Add(input);
  //Assert
  ASSERT_EQ(actualSum,expectedsum);
}

TEST(string_calculator_add_when_passed_a_single_number,returns_same_Val_for_single__string){
 //Arrange
  StringCalculator calculator;
  string input="10";
  int expectedsum=10;
  //Act
  int actualSum=calculator.Add(input);
  //Assert
  ASSERT_EQ(actualSum,expectedsum);
}

TEST(string_calculator_add_when_passed_a_single_huge_number,returns_same_Val_for_input_greater_string){
 //Arrange
  StringCalculator calculator;
  string input="2000";
  int expectedsum=2000;
  //Act
  int actualSum=calculator.Add(input);
  //Assert
  ASSERT_EQ(actualSum,expectedsum);
}
