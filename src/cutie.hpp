#pragma once

#include <string>

class Cutie {
  private:
    std::string description;
    int cutenessRating;

  public:
    Cutie(std::string description, int cutenessRating) {
      this->description = description;
      this->cutenessRating = cutenessRating;
    }

    virtual ~Cutie() = default;

    virtual std::string getDescription() = 0;
    virtual int getCutenessRating() = 0;
};
