//Edgar Perez CS 362
#define CATCH_CONFIG_MAIN
#include "ox/oxygine.hpp"
#include "ox/Stage.hpp"
#include "ox/DebugActor.hpp"
#include <catch2/catch.hpp>

using namespace oxygine;


TEST_CASE( "Vectors Math", "[vectors]" ) {
		REQUIRE(Vector3(3,3,3)*1 == Vector3(3,3,3));
		REQUIRE(Vector3(1,2,3)*0 == Vector3(0,0,0));
		REQUIRE(Vector3(0,0,0)*1 == Vector3(0,0,0));
		REQUIRE(Vector3(100,100,100)+Vector3(2,2,2) == Vector3(102,102,102));
		REQUIRE(Vector3(0,0,0)+Vector3(0,0,1) == Vector3(0,0,1));
		REQUIRE(Vector3(100,100,100)+Vector3(100,100,100) == Vector3(200,200,200));
		REQUIRE(Vector3(1000,1000,2000)-Vector3(1000,1000,2000) == Vector3(0,0,0));
		REQUIRE(Vector3(0,0,0)-Vector3(0,0,0) == Vector3(0,0,0));
		REQUIRE(Vector3(5000,1,10)-Vector3(1,1,1) == Vector3(4999,0,9));
		REQUIRE((Vector3(0.1,0.1,0.1)+=Vector3(0.1,0.1,0.1)) == Vector3(0.2,0.2,0.2));
		REQUIRE((Vector3(30,20,10)+=Vector3(30,20,10)) == Vector3(60,40,20));
		REQUIRE((Vector3(123,123,123)+=Vector3(123,123,123)) == Vector3(246,246,246));
		REQUIRE((Vector3(9,9,9)-=Vector3(0,0,0)) == Vector3(9,9,9));
		REQUIRE((Vector3(666,666,666)-=Vector3(666,666,666)) == Vector3(0,0,0));
		REQUIRE((Vector3(999,888,777)-=Vector3(999,888,777)) == Vector3(0,0,0));
		REQUIRE(Vector3(3,3,3)/1 == Vector3(3,3,3));
		REQUIRE(Vector3(400,400,400)/2 == Vector3(200,200,200));
		REQUIRE(Vector3(1,1,1)/2 == Vector3(0.5,0.5,0.5));
		REQUIRE((Vector3(1,1,1)*=2) == Vector3(2,2,2));
		REQUIRE((Vector3(2000,2000,2000)/=1000) == Vector3(2,2,2));
}
