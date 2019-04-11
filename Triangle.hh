#ifndef TRIANGLE_HH
#define TRIANGLE_HH

#include <string>
#include <vector>

#include "3D.h"
#include "Shape.hh"



class Triangle:public Shape{

public:
	Triangle();

	Triangle(float ux, float uy, float uz,
			 float vx, float vy, float vz,
			 float wx, float wy, float wz,
			 float ar, float ag, float ab,
			 float rr, float rg, float rb);


	~Triangle();

	std::string static triangle(std::vector<std::string> paramList);

	static vec3 norm_;

	static int counter_;

	

};


#endif
