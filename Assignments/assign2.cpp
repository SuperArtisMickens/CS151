#include <iostream> 
#include <string>  
#include <iomanip> 
#include <cmath> 

//Function Definition Here
void ReturnMessage(string name,int time){
    cout << name <<" is away right now and will receive in " << time << " minute(s).";
    return;
    
}

double Distance3D(double &x1,double &y1,double &z1,double &x2,double &y2,double &z2){
    
    double distance_x, distance_y, distance_z;
    double absolute_x, absolute_y, absolute_z;
    double total_xyz;
    double dist_tot;
    
    distance_x = x2 - x1;
    distance_y = y2 - y1;
    distance_z = z2 - z1;
    
    absolute_x = pow(distance_x, 2);
    absolute_y = pow(distance_y, 2);
    absolute_z = pow(distance_z, 2);
    
    total_xyz = absolute_z + absolute_y + absolute_x;
    dist_tot = sqrt(total_xyz);
    
    return (dist_tot);
    
}



int main()
{
    //Function Calls Here
    //For each task provide header comment to separate the calls
    
    return 0;
}