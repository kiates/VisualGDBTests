#include <gtest/gtest.h>
#include <stdio.h>
#include <StaticSum.h>

TEST(StaticLibraryFixture, StaticSum)
{
	EXPECT_EQ(5, StaticSum(2, 3));
}
