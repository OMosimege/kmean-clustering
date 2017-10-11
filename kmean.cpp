#include "kmean.h"

#include <string>
#include <vector>
#include <cmath>
#include <iostream>
#include <sstream>
#include <fstream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

namespace MSMONA001{
	using namespace std;

    kmean::kmean(){}

    void kmean::create_points(){//make pairs for x point with x and y coordinates
        string line;
        int i=0; //use as counter to add to vector
        ifstream myfile ("input.txt");
        if (myfile.is_open()){
            while (getline(myfile,line)){
                std::istringstream buffer(line);
                int x;
                int y;
                buffer>>x>>ws>>y;

                kmean::points[i]= make_pair(x,y);
                i++;
            }
            myfile.close();
        }

        else cout << "Unable to open file";

        for(int j=0; j<kmean::points.size(); j++){
            cout << kmean::points[j];

        }

    } 

    int kmean::calcMean(){ //method to calculate mean, return mean value

    } 
        
    int kmean::calcDistance(){ //method to claculate distance

    } 
        
    void kmean::calcClustering(){ //where main algorithm is

    }

   

}//end of namespace
