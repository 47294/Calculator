extern "C"{
#include "../includes/zapusk.h"
}
#include <gtest/gtest.h>
#include <stdio.h>

TEST(UmnozTest, num1)
{
	ASSERT_DOUBLE_EQ(multi(3, 10),30);
}
TEST(MinusTest, num1)
{
	ASSERT_DOUBLE_EQ(minus(2.12, 2),0.12);
}
TEST(SlojenieTest, num1)
{	
	ASSERT_DOUBLE_EQ(sum(3, 3),6);
}	
TEST(StepenTest, num1)
{
	ASSERT_DOUBLE_EQ(stepen(3,3),27);
}
TEST(DelenieTest, num1)
{
	ASSERT_DOUBLE_EQ(del(6,2),3);
}

