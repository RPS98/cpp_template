#include <memory>
#include "c_plus_plus_template/c_plus_plus_template.hpp"

void test_c_plus_plus_template() {
  std::shared_ptr<c_plus_plus_template::CPlusPlusTemplate> c_plus_plus_template =
      std::make_shared<c_plus_plus_template::CPlusPlusTemplate>();
}

int main(int argc, char* argv[]) {
  test_c_plus_plus_template();
  return 0;
}
