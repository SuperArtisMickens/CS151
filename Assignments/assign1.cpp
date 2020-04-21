#include <iostream> //cout, cin, fixed
#include <string> //string 
#include <iomanip> //setprecision
#include <cmath> //exp, log, pow

int main()
{
    //Write Entire Code In This Body
//1.  Declare a string variable named firstName;
    string firstName;
    
//2.  Declare a string variable named lastName;
    string lastName;
    
//3.  Declare an int variable named age;
    int age;
    
//4.  Declare a double variable named principle;
    double principle;
    
//5.  Declare an double variable named percentageRate;
    double percentageRate;
    
//6.  Prompt the user the message ''Enter your first name:'' and store the input in firstName; [1]
    cout <<"Enter your first name: ";
    cin >> firstName;
    
//7.  Prompt the user the message ''Enter your last name:'' and store the input in lastName; [2]
    cout <<"Enter your last name: ";
    cin >> lastName;

//8.  Prompt the user the message ''Enter your age:'' and store the input in age; [3]
    cout <<"Enter your age: ";
    cin >> age;

//9.  Prompt the user the message ''Enter your initial investment:'' and store the input in principle; [4]
    cout <<"Enter your initial investment: ";
    cin >> principle;

//10.  Prompt the user the message ''Enter interest rate:'' and store the input in percentageRate; [5]
    cout <<"Enter interest rate: ";
    cin >> percentageRate;
    
//11.  Initialize a double variable named rate to percentageRate divided by 100.0; [10]
    double rate;
    rate = percentageRate/100.0;
    

//12.  Initialize a double variable named APY1 to percentageRate; [11]
    double APY1;
    APY1 = percentageRate;
//13.  Initialize a double variable named APY2 to
  
  double APY2;
  APY2 = (((1+(pow(rate/12), 12)) - 1) * 100);

//14.  Initialize a double variable named APY3 to
    double APY3;
    APY3 = (((1+(pow(rate/365), 365)) - 1) * 100);
    
//15.  Initialize a double variable named APY4 to
    double APY4;
    APY4 = ((pow(2.718), (rate))* 100);
    
//16.  Initialize a double variable named interest1 to
    double interest1;
    interest1 = principle * (((pow (1+rate), 5)) - 1);
    

//17.  Initialize a double variable named interest2 to
    double interest2;
    interest2 = principle * (((pow (1+(rate/12)), 60)) - 1);
    

//18.  Initialize a double variable named interest3 to
    double interest3;
    interest3 = principle * (((pow (1+(rate/365)), 1825)) - 1);
    

//19.  Initialize a double variable named interest4 t
    double interest4;
    interest4 = principle * (((pow (2.718), rate * 5)) - 1);

//20.  Initialize a double variable named doublePrinciple to 2 times principle; [4
    double doublePrinciple;
    doublePrinciple = 2 * principle;
 
//21.  Initialize an int variable named time to
    int time;
    time = ((log(2)) / (rate)) + 0.5;
    

//22.  Initialize an int variable named newAge to the sum of age and time; [3,21
    int newAge;
    newAge = age + time;
    

//23.  Display the message ''If firstName lastName invests $principle at a rate of percentageRate %,''
//on its own line where principle and percentageRate must have two decimal places; [1,2,4,5]
    cout << "If " << firstName <<" " << lastName << " invests $" <<principle << "at a rate of " << percentageRate << "% \n";

//24.  Display the message ''firstName lastName will have an annual percentage yield (APY) of:'' on
//its own line; [1,2]

    cout << firstName << " " << lastName << " will have an annual percentage yield (APY) of: \n";
    
//25.  Display the message ''APY1 if compounded yearly'' on its own line where APY1 must have three
//decimal places; [12]

    cout << fixed;
    cout << setprecision(3) << APY1 << " if compounded yearly\n";

//26.  Display the message ''APY2 if compounded monthly'' on its own line where APY2 must have three
//decimal places; [13]

    cout << fixed;
    cout << setprecision(3) << APY2 << " if compounded monthly\n";
    

//27.  Display the message ''APY3 if compounded daily'' on its own line where APY3 must have three
//decimal places; [14]

    cout << fixed;
    cout << setprecision(3) << APY3 << "if compounded daily\n";
    

//28.  Display the message ''APY4 if compounded continuously'' on its own line where APY4 must have
//three decimal places; [15]
    cout << fixed;
    cout << setprecision(3) << APY4 << "if compounded continuously\n";


//29.  Display the message ''Hence, in five years, firstName lastName will earn an interest of'' on
//its own line; [1,2]

    cout << "Hence, in five years, " << firstName << ", " << lastName << " will earn an interest of\n";
    

//30.  Display the message ''$interest1 if compounded yearly'' on its own line where interest1 must have
//two decimal places; [16

    cout << fixed;
    cout << "$" <<  setprecision(2) << interest1 << " if compounded yearly \n";
    


//31.  Display the message ''$interest2 if compounded monthly'' on its own line where interest2 must have
//two decimal places; [17]

    cout << fixed;
    cout << "$" <<  setprecision(2) << interest2 << " if compounded monthly \n";



//32.  Display the message ''$interest3 if compounded daily'' on its own line where interest3 must have
//two decimal places; [18]

    cout << fixed;
    cout << "$" <<  setprecision(2) << interest3 << " if compounded daily \n";


//33.  Display the message ''$interest4 if compounded continuously'' on its own line where interest4 must
//have two decimal places; [19]

    cout << fixed;
    cout << "$" <<  setprecision(2) << interest4 << " if compounded continuously \n";


//34.  Display the message ''The initial investment of $principle will double to $doublePrinciple
//in time year(s)'' on its own line where principle and doublePrinciple must have two decimal places;
//[4,20,21]

    cout << fixed;
    cout << "The initial investment of $" <<  setprecision(2) << principle << " will double to $\n";
    cout <<  setprecision(2) << doublePrinciple << " in "<< time << "year(s) \n";


//35.  Display the message ''firstName lastName will be newAge years old'' on its own line; [1,2,22]
    cout << firstName << " " << lastName << " will be " << newAge << " years old \n";  
 

    return 0;
}