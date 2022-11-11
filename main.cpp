#include <iostream>

#include "coord3d.h"
#include "funcs.h"

int main()
{
	Coord3D pointP = {20,20,20};
	Coord3D pointQ = {-7,10,-5};
	std::cout << "p: " << pointP.x << " " << pointP.y << " " << pointP.z << std::endl;
	std::cout << "q: " << pointQ.x << " " << pointQ.y << " " << pointQ.z << std::endl;
	std::cout << length(&pointP) << std::endl;
	std::cout << length(&pointQ) << std::endl;

	Coord3D* ans = fartherFromOrigin(&pointP,&pointQ);
	std::cout << "Point P: " << &pointP << std::endl;
	std::cout << "Point Q: " << &pointQ << std::endl;
	std::cout << "Answer: " << ans << std::endl;

	Coord3D pos = {1,1,10.0};
	Coord3D vel = {1,-2,0.2};
	std::cout << "pos: " << pos.x << " " << pos.y << " " << pos.z << std::endl;
	std::cout << "vel: " << vel.x << " " << vel.y << " " << vel.z << std::endl;
	move(&pos,&vel,2.0);
	std::cout << "new pos with dt=2 : " << pos.x << " " << pos.y << " " << pos.z << std::endl;
	
	Coord3D * pointA = createCoord3D(5,6,7);
	std::cout << "create a: " << (*pointA).x << " " << (*pointA).y << " " << (*pointA).z << std::endl;
	deleteCoord3D(pointA);

	return 0;
}
