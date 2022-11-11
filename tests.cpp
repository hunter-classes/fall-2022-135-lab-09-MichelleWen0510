#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"

TEST_CASE("Length")
{
	Coord3D pointP = {10,20,30};
	CHECK((length(&pointP)-37.4166)<0.000001);
}

TEST_CASE("Origin")
{
	Coord3D pointA = {10,20,30};
	Coord3D pointB = {-20,21,-22};
	Coord3D * ans = fartherFromOrigin(&pointA,&pointB);
	CHECK(ans==&pointA);
}

TEST_CASE("VELOCITY")
{
	Coord3D pointC = {0,0,100.0};
	Coord3D pointD = {1,-5,0.2};
	move(&pointC,&pointD,2.0);
	CHECK(pointC.x==2);
	CHECK(pointC.y==-10);
	CHECK(pointC.z==100.4);
}

TEST_CASE("POINT")
{
	Coord3D * pointE = createCoord3D(5,6,7);
	CHECK((*pointE).x==5);
	CHECK((*pointE).y==6);
	CHECK((*pointE).z==7);
	deleteCoord3D(pointE);
	CHECK(!((*pointE).x==5));
	CHECK(!((*pointE).y==6));
	CHECK(!((*pointE).z==7));
}

