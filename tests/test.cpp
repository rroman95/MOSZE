#include "JSON.h"
#include "gtest/gtest.h"


TEST(Jsontest, Fajlvaltozo) {
	std::ifstream f("Hosarkany.json");
	JSON json1(f);
	EXPECT_EQ(json1.charData["name"], "Hosarkany");
	EXPECT_EQ(json1.charData["damage"], "30");
	EXPECT_EQ(json1.charData["healthpoints"], "300");

}
