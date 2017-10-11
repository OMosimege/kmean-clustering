#ifndef KMEAN_H
#define KMEAN_H
#include <string>
#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <cmath>

namespace MSMONA001 {
	//the >> and << operators to read/write the header info
class kmean{

	private:

	public:
		std::vector<std::pair<int, int>> points; //x number of points, coordinates x and y
		std::vector<int> clusters; // k number of clusters

		kmean();//constructor
		void create_points(); //make pairs for x point with x and y coordinates
		int calcMean(); //method to calculate mean, return mean value
		int calcDistance(); //method to claculate distance
		void calcClustering(); //where main algorithm is

}; //end of class

}//end of namespace
#endif

