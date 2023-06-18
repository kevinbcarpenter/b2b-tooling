#pragma once
#include <App.h>

#include <json.hpp>

class b2bTools : public App {
private:
  void setup(const json &configuration) override;
  void start();
  void idle();

public:
  b2bTools(std::string appName);
  ~b2bTools() final = default;

  b2bTools(const b2bTools &) = delete;
  b2bTools &operator=(const b2bTools &) = delete;
  b2bTools(b2bTools &&) = delete;
  b2bTools &operator=(b2bTools &&) = delete;

  void run() override;
};