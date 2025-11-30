#pragma once

#include "cutie.hpp"

class PygmyMarmoset : public Cutie {
public:
  PygmyMarmoset() : Cutie("PygmyMarmoset", 10) {}

  std::string getDescription() override {
    return "PygmyMarmoset";
  }

  int getCutenessRating() override {
    return 10;
  }
};

