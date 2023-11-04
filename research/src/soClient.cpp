#define CPPHTTPLIB_OPENSSL_SUPPORT

#include <httplib.h>
#include <iostream>
#include <sstream>
#include <thread>

#include <json.hpp>

using json = nlohmann::json;

// constexpr auto DELAY = 1;
constexpr auto contentType = "application/json";

//---------------------------------------------------------------------------
void testPost(httplib::SSLClient &cli) {
  auto res = cli.Post("/sale", "", contentType);

  auto result = json::parse(res->body);
  std::cout << "POST/CREATE - Status: " << res->status << std::endl
            << "Guid: " << result << std::endl;
}

//---------------------------------------------------------------------------
auto testGet(httplib::SSLClient &cli) -> json {
  json trans{};
  std::cout << "RESULT from GET" << std::endl;

  try {
    auto res = cli.Get("2.3/search/"
                       "advanced?order=desc&sort=votes&tagged=undefined-"
                       "reference&site=stackoverflow");

    if (res->status == 200) {
      if (!res->body.empty()) {
        std::cout << "GET/LIST - Status: " << res->status << std::endl
                  << "Body: " << res->body << std::endl;
        trans = json::parse(res->body);
      } else {
        std::cout << "Error: empty body..." << std::endl;
      }

    } else {
      std::cout << "Error 200 result empty body." << std::endl;
    }

  } catch (std::exception &ex) {
    std::cout << "Error: " << ex.what() << std::endl;
  }

  return trans;
}

//---------------------------------------------------------------------------
auto main(int /* argc*/, char ** /*argv[]*/) -> int {
  // uint idleTime = DELAY;
  // https://api.stackexchange.com/docs/advanced-search
  // https://api.stackexchange.com/2.3/search/advanced?order=desc&sort=votes&tagged=undefined-reference&site=stackoverflow
  httplib::SSLClient cli("https://api.stackexchange.com");

  auto data = testGet(cli);

  std::cout << "Results >> " << std::endl << data.dump();

  return 0;
}