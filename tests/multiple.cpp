extern "C"{
#include "../includes/zapusk.h"
}
#include <gtest/gtest.h>

TEST(UmnozhenieTest, num1)
{
	ASSERT_DOUBLE_EQ(multi(3, 10),30);
}

