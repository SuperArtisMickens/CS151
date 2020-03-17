#include <iostream>
using namespace std;

int main()
{    
    char example_a;
    int example_b;
    int grade;
    char gpa,gpap;
   
    cout << "Section I\n";
    /*Section I Begins*/
    cout<<"Please enter a character: ";
    cin >> example_a;
    
    if (example_a <= 57 || example_a >= 48){
        if (example_a == 48){
            example_b = 0;
            }
        else if (example_a == 49){
            example_b = 1;
            }
        
        else if (example_a == 50){
            example_b = 2;
            }
        
        else if (example_a == 51){
            example_b = 3;
            }
        
        else if (example_a == 52){
            example_b = 4;
            }
        
        else if (example_a == 53){
            example_b = 5;
            }
        
        else if (example_a == 54){
            example_b = 6;
            }
        
        else if (example_a == 55){
            example_b = 7;
            }
        
        else if (example_a == 56){
            example_b = 8;
            }
        
        else if (example_a == 57){
            example_b = 9;
            }
        
        else{
            cout << "Not A Digit!\n";
            example_b = 10;
            
        }
    }
    
    switch(example_b){
        case 0:
            cout << "ZERO\n";
            break;
            
        case 1:
            cout << "ONE\n";
            break;
        
        case 2:
            cout << "TWO\n";
            break;
        
        case 3:
            cout << "THREE\n";
            break;
            
        case 4:
            cout << "FOUR\n";
            break;
            
        case 5:
            cout << "FIVE\n";
            break;
            
        case 6:
            cout << "SIX\n";
            break;
            
        case 7:
            cout << "SEVEN\n";
            break;
            
        case 8:
            cout << "EIGHT\n";
            break;
            
        case 9:
            cout << "NINE\n";
            break;
                
        default:
            cout <<"";
    }
   
    cout << "\n\n";
    /*Section I Ends*/

    cout << "\nSection II\n";
    /*Section II Begins*/
cout<<"Please enter a grade: ";
    cin >> grade;
    
    if (grade <= 100 || grade >= 0){
        if (grade >= 0 && grade <=64.9){
            gpa = 'F';
            cout <<gpa<<gpap;
            }
        else if (grade >= 65 && grade <=75.9){
            gpa = 'C';
            cout <<gpa<<gpap;
            }
        
        else if (grade >= 76 && grade <=79.9){
            gpa = 'C';
            gpap = '+';
            cout <<gpa<<gpap;
            }
        
        else if (grade >= 80 && grade <=82.9){
            gpa = 'B';
            gpap = '-';
            cout <<gpa<<gpap;
            }
        
        else if (grade >= 83 && grade <=86.9){
            gpa = 'B';
            gpap = ' ';
            cout <<gpa<<gpap;
            }
        
        else if (grade >= 87 && grade <=89.9){
            gpa = 'B';
            gpap = '+';
            cout <<gpa<<gpap;
            }
        
        else if (grade >= 90 && grade <=92.9){
            gpa = 'A';
            gpap = '-';
            cout <<gpa<<gpap;
            }
        
        else if (grade >= 93 && grade <=96.9){
            gpa = 'A';
            gpap = ' ';
            cout <<gpa<<gpap;
            }
        
        else if (grade >= 97 && grade <=100){
            gpa = 'A';
            gpap = '+';
            cout <<gpa<<gpap;
            }
        
        else{
            cout << "Not A Grade!\n";
        }
    }
    
    
    cout << "\n\n";
    /*Section II Ends*/

    return 0;
}