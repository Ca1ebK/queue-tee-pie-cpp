#pragma once

#include "cutie.hpp"

class Puppy : public Cutie {
public:
  Puppy() : Cutie("Puppy", 10) {}

  std::string getDescription() override {
    return "Puppy";
  }

  int getCutenessRating() override {
    return 10;
  }
};

