#include "JSON.h"
#include "gtest/gtest.h"


TEST(Jsontest, Fajlvaltozo) {
	std::ifstream f("Hosarkany.json");
	JSON json1(f)
	EXPECT_EQ(charData["name"], "Hosarkany");

}
