#include "JSON.h"
#include "gtest/gtest.h"


TEST(Jsontest, Fajlvaltozo) {
	std::ifstream f("Hosarkany.json");
	JSON json1(f);
	EXPECT_EQ(json1.charData["name"], "Hosarkany");
	EXPECT_EQ(json1.charData["damage"], "40");
	EXPECT_EQ(json1.charData["attack_cooldown"], "2.4");

}
