#include "JSON.h"
#include "gtest/gtest.h"


TEST(Jsontest, Fajlvaltozo) {
	std::ifstream f("Hosarkany.json");
	JSON::jsonparser(f);
	EXPECT_EQ(charData["name"], "Hosarkany");

}
