/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

TEST_CASE("Good snowman code") {
    CHECK(snowman(11114411) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK(snowman(12212212) == "_===_\n<(o.o)/\n( : )\n(" ")");
    CHECK(snowman(12443333) == "_===_\n(-.-)\n/(> <)>\n(___)");
    CHECK(snowman(21114411) == " ___\n.....\n(.,.)\n( : )\n( : )");
    CHECK(snowman(22223311) == " ___\n.....\n(o.o)\n/( : )/\n( : )");
    CHECK(snowman(23223411) == " ___\n.....\n(o_o)\n/( : )");
    CHECK(snowman(42114311) == " ___ \n(_*_)\n(...)\n( : )/\n( : )");
    CHECK(snowman(42444413) == " ___ \n(_*_)\n(-.-)\n( : )\n(___)");
    CHECK(snowman(44334412) == " ___ \n(_*_)\n(O O)\n( : )\n(" ")");
    CHECK(snowman(41114411) == " ___ \n(_*_)(.,.)\n( : )\n( : )");
    CHECK(snowman(13224441) == "_===_\n(o_o)\n(   )\n( : )");
    CHECK(snowman(13234424) == "_===_\n(o_O)\n(] [)\n(   )");
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(111111111));
    CHECK_THROWS(snowman(2));
    CHECK_THROWS(snowman(33));
    CHECK_THROWS(snowman(4444));
    CHECK_THROWS(snowman(11111));
    CHECK_THROWS(snowman(-3333333));
    CHECK_THROWS(snowman(-55555555));
    CHECK_THROWS(snowman(-666));
}

