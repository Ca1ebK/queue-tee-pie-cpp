#include <catch2/catch_test_macros.hpp>
#include "../src/Puppy.hpp"
#include "../src/Kitty.hpp"
#include "../src/PygmyMarmoset.hpp"

TEST_CASE("Puppy has correct description") {
  Puppy puppy;
  REQUIRE(puppy.getDescription() == "Puppy");
}

TEST_CASE("Puppy has cuteness rating") {
  Puppy puppy;
  REQUIRE(puppy.getCutenessRating() == 10);
}

TEST_CASE("Kitty has correct description") {
  Kitty kitty;
  REQUIRE(kitty.getDescription() == "Kitty");
}

TEST_CASE("Kitty has cuteness rating") {
  Kitty kitty;
  REQUIRE(kitty.getCutenessRating() == 10);
}

TEST_CASE("PygmyMarmoset has correct description") {
  PygmyMarmoset marmoset;
  REQUIRE(marmoset.getDescription() == "PygmyMarmoset");
}

TEST_CASE("PygmyMarmoset has cuteness rating") {
  PygmyMarmoset marmoset;
  REQUIRE(marmoset.getCutenessRating() == 10);
}

