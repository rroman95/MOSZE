#include "JSON.h"
#include "gtest/gtest.h"


TEST(Jsontest, ifstream) {
	std::ifstream f("Hosarkany.json");
	JSON json1(f);
	EXPECT_EQ(json1.charData["name"], "Hosarkany");
	EXPECT_EQ(json1.charData["damage"], "30");
	EXPECT_EQ(json1.charData["healthpoints"], "300");

}

TEST(Jsontest, Fajlvaltozo) {
	std::string f = "Hosarkany.json";
	JSON json1(f);
	EXPECT_EQ(json1.charData["name"], "Hosarkany");
	EXPECT_EQ(json1.charData["damage"], "30");
	EXPECT_EQ(json1.charData["healthpoints"], "300");

}

TEST(Jsontest, thor) {

	JSON json1("thor.json");
	EXPECT_EQ(json1.charData["name"], "thor");
	EXPECT_EQ(json1.charData["damage"], "15.3");
	EXPECT_EQ(json1.charData["hp"], "300");
	EXPECT_EQ(json1.charData["attackcooldown"], "2");

}

