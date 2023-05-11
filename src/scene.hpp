#ifndef SCENE_HPP
#define SCENE_HPP

#include <string>
#include <vector>

#include "option.hpp"

// Struct para gestionar las escenas
struct Scene {
  int id;
  std::string intro;
  std::vector<Option> options;
};

#endif