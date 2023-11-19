#include <cpr/cpr.h>
#include <iostream>
using namespace std;
int main() {
  cpr::Response r = cpr::Get(cpr::Url{"https://time.google.com"});
  r.status_code;            // 200
  r.header["content-type"]; // application/json; charset=utf-8
  r.text;
  std::cout << r.text; // JSON text string
  return 0;
}
