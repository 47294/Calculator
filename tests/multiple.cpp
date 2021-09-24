extern "C"{
#include "../includes/zapusk.h"
}
#include <gtest/gtest.h>

TEST(UmnozTest, num1)
{
	ASSERT_DOUBLE_EQ(multi(3, 10),30);
}
TEST(UmnozTest, num2)
{
	ASSERT_DOUBLE_EQ(multi(2, 1),5);
}
TEST(SlojenieTest, num1)
{	

}	

