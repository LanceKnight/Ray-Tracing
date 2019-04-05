#include <iostream>
#include "Sphere.hh"
#include "3D.h"
#include "Util.hh"


std::string
Sphere::sphere(std::vector<std::string> paramList){


	if(paramList.size()<=3){
		if(paramList.size() <3){
				return "too few parameters";
			}
			float x = 0;
			float y = 0;
			float z = 0;

			try{
				x = std::stod(paramList[0]);
				y = std::stod(paramList[1]);
				z = std::stod(paramList[2]);

			}
			catch(...){
				return "illegal params";

			}



			matrix_unit * sphere_mat = new matrix_unit({
					   { {1., 0., 0., x},
					     {0., 1., 0., y},
					     {0., 0., 1., z},
					     {0., 0., 0., 1.0}  },
					});
			matrix_unit tmpsln;

			Mult_mat(stack[top], sphere_mat, &tmpsln);
			Copy_mat(&tmpsln, stack[top]);
/*
			Util::debug_head("Sphere.cpp");
				std::cout<<"stack["<<top<<"]:"<<std::endl;
				Util::print_mat(stack[top]);
			Util::debug_tail();
*/
		return "Sphere Done";
	}
	else{
		return  "too many parameters";
	}

}


