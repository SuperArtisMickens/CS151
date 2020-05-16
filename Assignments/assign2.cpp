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

void NumericalSwap(double x, double y){
    x = x + y;
    y = x - y;
    x = x - y;
    return;
    
}

void CapLock(char refca){
    if (refca >= 65 && refca < 91){
        refca = refca + 32;
        }
    else if (refca >= 97 && refca < 123){
        refca = refca - 32;
        } 
    return;
}

string IntToStr(int nopar7){
    
    string nopar77;
    
    if (nopar < 0){
        nopar = nopar * -1;
    }
    
    
    if (nopar7 < 100)){
        
        nopar77 = nopar7;
        return nopar77;
    }
    else
        nopar77 = "0";
        return nopar77;
        
        return 
}

int Multiple Quotient(int n, int m){
    if ((n%m == 0) && (m != 0)){
        return (n / m);
        }
    else
        return n;
}

string DayOfTheWeek(int goodpar){
    string days [7] = {, Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}; 
    
    if ((goodpar > 0) && (goodpar <= 7)){
        for (int i = 0; i < 8 ; i++) {
            if (goodpar = i) {
               return days[i];
            } 
        }
    else {
        return days[0];
            
        }
    }
}

double Median(double a, double b, double c, double d){
    if ((a < b) && (a < c) && (a < d)){
        double num_01 == a;
    }
    
    else if ((b < c) && (b < d) && (b < a)){
        double num_01 == b;
    }
    
    else if ((c < d) && (c < b) && (c < a)){
        double num_01 == c;
    }
    
    else {
        double num_01 == d;
    }
    
    
    if  ((num_01 == a) && ((b < c) && (b < d)) || ((num_01 == c) && ((b < d) && (b < a)) || ((num_01 == d) && ((b < c) && (b < a)) {
        double num_02 == b;
    }
    else if  ((num_01 == a) && ((c < b) && (c < d)) || ((num_01 == b) && ((c < d) && (c < a)) || ((num_01 == d) && ((c < b) && (c < a)) {
        double num_02 == c;
    }
    
    else if  ((num_01 == a) && ((d < b) && (d < c)) || ((num_01 == b) && ((d < c) && (d < a)) || ((num_01 == c) && ((d < b) && (d < a)) {
        double num_02 == d;
    }
    else
        double num_02 == a;
        
    
    if  ((num_01 == a) && (num_02 == b) && (c < d)) || ((num_01 == a) && (num_02 == d) && (c < b))  {
        double num_03 == c;
    }
    else if  ((num_01 == b) && (num_02 == d) && (c < a)) || ((num_01 == b) && (num_02 == a) && (c < d))  {
        double num_03 == c;
    }
    else if  ((num_01 == d) && (num_02 == a) && (c < b)) || ((num_01 == d) && (num_02 == b) && (c < a))  {
        double num_03 == c;
    }
    
    else if  ((num_01 == a) && (num_02 == b) && (d < c)) || ((num_01 == a) && (num_02 == c) && (d < b))  {
        double num_03 == d;
    }
    else if  ((num_01 == b) && (num_02 == c) && (d < a)) || ((num_01 == b) && (num_02 == a) && (d < c))  {
        double num_03 == d;
    }
    else if  ((num_01 == c) && (num_02 == a) && (d < b)) || ((num_01 == c) && (num_02 == b) && (d < a))  {
        double num_03 == d;
    }
    
    else if  ((num_01 == a) && (num_02 == c) && (b < d)) || ((num_01 == a) && (num_02 == d) && (b < c))  {
        double num_03 == b;
    }
    else if  ((num_01 == c) && (num_02 == d) && (b < a)) || ((num_01 == c) && (num_02 == a) && (b < d))  {
        double num_03 == b;
    }
    else if  ((num_01 == d) && (num_02 == a) && (b < c)) || ((num_01 == d) && (num_02 == c) && (b < a))  {
        double num_03 == b;
    }
    else{
       double num_03 == a; 
    }
    
    
    if  ((num_01 == a) && (num_02 == b) && (num_03 == c)){
        double num_04 == d;
    }
    else if  ((num_01 == a) && (num_02 == c) && (num_03 == b)){
        double num_04 == d;
    }
    else if  ((num_01 == b) && (num_02 == c) && (num_03 == a)){
        double num_04 == d;
    }
    else if  ((num_01 == b) && (num_02 == a) && (num_03 == c)){
        double num_04 == d;
    }
    else if  ((num_01 == c) && (num_02 == a) && (num_03 == b)){
        double num_04 == d;
    }
    else if  ((num_01 == c) && (num_02 == b) && (num_03 == a)){
        double num_04 == d;
    }
    
    else if  ((num_01 == a) && (num_02 == b) && (num_03 == d)){
        double num_04 == c;
    }
    else if  ((num_01 == a) && (num_02 == d) && (num_03 == b)){
        double num_04 == c;
    }
    else if  ((num_01 == b) && (num_02 == d) && (num_03 == a)){
        double num_04 == c;
    }
    else if  ((num_01 == b) && (num_02 == a) && (num_03 == d)){
        double num_04 == c;
    }
    else if  ((num_01 == d) && (num_02 == a) && (num_03 == b)){
        double num_04 == c;
    }
    else if  ((num_01 == d) && (num_02 == b) && (num_03 == a)){
        double num_04 == c;
    }
    
    else if  ((num_01 == a) && (num_02 == c) && (num_03 == d)){
        double num_04 == b;
    }
    else if  ((num_01 == a) && (num_02 == d) && (num_03 == c)){
        double num_04 == b;
    }
    else if  ((num_01 == c) && (num_02 == d) && (num_03 == a)){
        double num_04 == b;
    }
    else if  ((num_01 == c) && (num_02 == a) && (num_03 == d)){
        double num_04 == b;
    }
    else if  ((num_01 == d) && (num_02 == a) && (num_03 == b)){
        double num_04 == c;
    }
    else if  ((num_01 == d) && (num_02 == b) && (num_03 == a)){
        double num_04 == c;
    }
    else{
        double num_04 == a;
        
    }

    int med_num_one;
    med_num_one = (num_02 + num_03) /2;
    return med_num_one;



}


double Minimum (double num_a, double num_b, double num_c, double num_d){
    if ((num_a < num_b) && (num_a < num_c) && (num_a < num_d)){
        return num_a;
    }
    
    else if ((num_b < num_c) && (num_b < num_d) && (num_b < num_a)){
        return num_b;
    }
    
    else if ((num_c < num_d) && (num_c < num_b) && (num_c < num_a)){
        return num_c;
    }
    
    else {
        return num_d;
    }

}

string ColorCode (int painter){
    string color;
    if (painter %3 == 0){
        color = "red";
        return color;
    }

    else if (painter %4 == 0){
        color = "blue";
        return color;
    }

    else if ((painter %4 == 0) && (painter %3 == 0)){
        color = "purple";
        return color;
    }
    else {
        color = "yellow";
        return color;
    }
}

int main()
{
    //Function Calls Here
    //For each task provide header comment to separate the calls
    
    return 0;
}