#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "sort_sqn.hpp"
#include "min_merge_cost.hpp"

TEST_CASE("min_merge_cost, example from assignment"){
    REQUIRE(min_merge_cost({10,20,30}) == 90);
}
TEST_CASE("min_merge_cost, single file"){
    REQUIRE(min_merge_cost({10}) == 0);
}

TEST_CASE("min_merge_cost, empty list"){
    REQUIRE(min_merge_cost({}) == 0);
}