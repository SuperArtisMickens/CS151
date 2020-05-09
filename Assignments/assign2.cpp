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

string Square(){

    int ten_count = 0;
    int ten_count_a = 0;

    while (ten_count_a < 10) {

        while (ten_count < 10) {
            cout << "*";
            ten_count = ten_count + 1;
        }

        cout << "\n";
        ten_count_a = ten_count_a + 1;
        ten_count = 0;
        }
        return;
}

bool IsIsoscelesTriangle (double &lucknum1, double &lucknum2, double &lucknum3){
    
    if ((lucknum1 > 0 || lucknum2 > 0 || lucknum3 >0) && ((lucknum1 == lucknum2 || lucknum1 == lucknum3 || lucknum2 == lucknum3)){
        return true;    
    }
    else
        return false;

}

string Echo(){
    
    char message[1000];
    
    cout << "Please enter a message: ";
    cin.getline(message,1000);
    
   
    cout<<message<<" \\"<<"n "<<message;    
    return;
}

bool ConsecutiveOdd (int &good_num, int &good_num_2){
    
    if (good_num% 2 == 1 && good_num_2%2 == 1) && (good_num + 2 == good_num_2 || good_num_2 + 2 == good_num){
        return true;
    }
    else
        return false;
        
    
}

int NextLeapYear(int &year){
    
    int year_2;
    
    if (year%2 == 0){
        
        year_2 = year1 + 4;
        return (year_2);
        }
    else
        year_2 = 4;
        return (year_2);
    
}

void RearrangeCharacters(char ref_1, char ref_2, char ref_3){
    
    if (ref_1 != ref_2  || ref_1 != ref_3 || ref_2 != ref_3){
        ref_1 = ref_2;
        ref_2 = ref_1;
        ref_3 = ref_1;
    }
    
    else return;
    
}




int main()
{
    //Function Calls Here
    //For each task provide header comment to separate the calls
    
    return 0;
}