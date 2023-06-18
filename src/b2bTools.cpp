#include "b2bTools.h"

#include <Logger.h>

#include <exception>
#include <iostream>
#include <memory>
#include <sstream>
#include <string>
#include <thread>

namespace {
const std::string VERSION{"0.0.1"};
const std::string APP_NAME{"b2btools"};

auto logline(const std::string &func) { return "b2bTools: " + func; }

} // namespace

//---------------------------------------------------------------------------
b2bTools::b2bTools(std::string appName) : App(appName) {
  // nothing for now.
}

//---------------------------------------------------------------------------
void b2bTools::start() {
  const auto fname = ::logline(static_cast<const char *>(__func__));

  //   http::host host;
  //   host.setup(App::getConfig().at("httpServer"));

  std::ostringstream os;
  os << "Starting server v" << VERSION << " on " << std::endl;

  //   std::thread(&http::listener::run, std::move(host)).detach();

  Logger::getLogger()->save(fname, os.str(), IS_MAIN);
}

//---------------------------------------------------------------------------
void b2bTools::idle() {
  const auto fname = ::logline(static_cast<const char *>(__func__));
  constexpr int idleTime = 5;
  while (true) {
    std::this_thread::sleep_for(std::chrono::seconds(idleTime));
    Logger::getLogger()->save(fname, "idle...", IS_MAIN);
  }
}

//---------------------------------------------------------------------------
void b2bTools::setup(const json &configuration) {
  try {
    auto jsconfig = configuration;
  } catch (const std::exception &ex) {
    std::cout << "Failure during config: " << ex.what() << std::endl;
  }
}

//---------------------------------------------------------------------------
void b2bTools::run() {
  App::run();
  // start();
  idle();
}

//---------------------------------------------------------------------------
auto main(int argc, char *argv[]) -> int {
  App::main(argc, argv, VERSION, new b2bTools(APP_NAME));
  return 0;
}