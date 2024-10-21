#define CATCH_CONFIG_MAIN
#include "..\include\catch.hpp"
#include "..\include\zadanie.hpp"

TEST_CASE("Test dodawania") {
  CHECK(dodaj(2, 2) == 4);
  CHECK(dodaj(-2, 2) == 0);
  CHECK(dodaj(42, 0) == 42);
}
