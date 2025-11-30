#pragma once

#include "cutie.hpp"

class Kitty : public Cutie {
public:
  Kitty() : Cutie("Kitty", 10) {}

  std::string getDescription() override {
    return "Kitty";
  }

  int getCutenessRating() override {
    return 10;
  }
};

