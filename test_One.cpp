//Andrew Peterkort CS 362
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "ox/oxygine.hpp"
#include "ox/Stage.hpp"
#include "ox/DebugActor.hpp"
#include <catch2/catch.hpp>

using namespace oxygine;

Vector2 AddVectors( const Vector2& One, const Vector2& Two ){
	return One + Two;
}

Vector2 SubVectors( const Vector2& One, const Vector2& Two ){
	return One - Two;
}

TEST_CASE( "Vectors Math", "[vectors]" ) {
    REQUIRE( AddVectors(Vector2(2,2), Vector2(2,2)) == Vector2(4,4));
    REQUIRE( AddVectors(Vector2(0,-6), Vector2(4,3)) == Vector2(4,-3));
    REQUIRE( SubVectors(Vector2(2,2), Vector2(2,2)) == Vector2(0,0));
    REQUIRE( SubVectors(Vector2(0,-6), Vector2(4,3)) == Vector2(-4,-9));
    REQUIRE( Vector2(3,4).length() == 5);
    REQUIRE( Vector2(-3,-4).length() == 5);
		REQUIRE( Vector2(2,4).distance(Vector2(2,3)) == 1 );
		REQUIRE( Vector2(-2,-4).distance(Vector2(-2,-3)) == 1 );
		REQUIRE( Vector2(2,2) == Vector2(2,2));
		REQUIRE( Vector2(3,3) != Vector2(-3,-3));
		REQUIRE( (Vector2(3,3) += Vector2(-3,-3)) == Vector2(0,0));
}
