#include <gtest/gtest.h>
#include "machine.h"

TEST(DummyTest, ShouldPass)
{
    EXPECT_EQ(1, 1);
}

TEST(DummyTest, MachineTest)
{
    Machine m = Machine(1, 2);
    EXPECT_EQ(m.a, 1);
}