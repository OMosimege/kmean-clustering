#include "kmethod.h"

#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <fstream>
#include <memory>

namespace MSMONA001{
	 using namespace std;

   void create_clusters(){

    //saving old means
    om1=m1;
    om2=m2;
 
    //creating clusters
    i1=i2=i3=0;
    for(i1=0;i1<10;i1++)
    {
        //calculating distance to means
        t1=k0[i1]-m1;
        if(t1<0){t1=-t1;}
 
        t2=k0[i1]-m2;
        if(t2<0){t2=-t2;}
 
        if(t1<t2)
        {
            //near to first mean
            k1[i2]=k0[i1];
            i2++;
        }
        else
        {
            //near to second mean
            k2[i3]=k0[i1];
            i3++;
        }
 
    }
   } //end of function

   void calcMean(){
    for(t1=0;t1<i2;t1++)
    {
        t2=t2+k1[t1];
    }
    m1=t2/i2;
 
    t2=0;
    for(t1=0;t1<i3;t1++)
    {
        t2=t2+k2[t1];
    }
    m2=t2/i3;
 
    //printing clusters
    cout<<"\nCluster 1:";
    for(t1=0;t1<i2;t1++)
    {
        cout<<k1[t1]<<" ";
    }
    cout<<"\nm1="<<m1;
 
    cout<<"\nCluster 2:";
    for(t1=0;t1<i3;t1++)
    {
        cout<<k2[t1]<<" ";
    }
    cout<<"\nm2="<<m2;

  
   }//end of function




 
int main(){
  int i1,i2,i3,t1,t2;
 
    int k0[10];
    int k1[10];
    int k2[10];
 
    cout<<"\nEnter 10 numbers:\n";
    for(i1=0;i1<10;i1++)
    {
        cin>>k0[i1];
    }
    //initial means
    int m1;
    int m2;
 
    cout<<"\n Enter initial mean 1:";
    cin>>m1;
    cout<<"\n Enter initial mean 2:";
    cin>>m2;
     
    int om1,om2;    //old means
 
    
 
    t2=0;
    //calculating new mean
    
 
    cout<<"\n ----";
    while(m1!=om1&&m2!=om2);
 
    cout<<"\n Clusters created";
 
    //ending
    getch();
}

}//end of namespace
