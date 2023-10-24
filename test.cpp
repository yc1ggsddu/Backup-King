#include <gtest/gtest.h>
#include <headFiles/primary.h>


TEST(backupRegFileTest, HandleNoneZeroInput) {
    EXPECT_EQ(true, backupRegFile("./testFiles/test1/makefile_hard", "./testFiles"))
}

int main(int argc,char*argv[]) {
   testing::InitGoogleTest(&argc,argv);
   return RUN_ALL_TESTS();
}
