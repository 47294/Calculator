extern "C"{
#include "../includes/zapusk.h"
}
#include <gtest/gtest.h>
TEST (KorneyKorneevich, num1){
	ASSERT_DOUBLE_EQ(sqrts(9),3);
	ASSERT_DOUBLE_EQ(sqrts(16),4);
}
TEST (Factorial, num1){
	ASSERT_DOUBLE_EQ(factorial(2),2);
	ASSERT_DOUBLE_EQ(factorial(5),120);
}
