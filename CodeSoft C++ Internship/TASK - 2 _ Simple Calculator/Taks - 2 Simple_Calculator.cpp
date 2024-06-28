#include <bits/stdc++.h>
using namespace std;

// SIMPLE CALCULATOR - Using Basic Arithmetic Operations ..
  
int main(){
    
    
    while(true){
        cout << "\n\t\t\t || Caclulator || \t\t\t" << endl;
        cout << "Menu : " << endl;
        cout << "1. Addition        [ + ]" << endl;
        cout << "2. Subtraction     [ - ]" << endl; 
        cout << "3. Multiplication  [ x ]" << endl; 
        cout << "4. Division        [ / ]" << endl;
        cout << "5. Exit Caclulator  " << endl;
        
        int option;
        cout << "Select 1 Option From Above : ";
        cin >> option;
        if(option < 1 && option > 4){
            cout << "Select Valid Option !" << endl;
        }
        int num1,num2;
        cout << "Enter Two Number to Do The Operation : ";
        cin >> num1 >> num2;
        
        
        switch(option){
          
            case 1: 
                    cout << "\nAddition of " << num1 << " + " << num2 << " = " << num1 +  num2 << endl;
                    break;
            case 2: 
                    cout << "\nSubtraction of " << num1 << " - " << num2 << " = " << num1 -  num2 << endl;
                    break;
            case 3: 
                    cout << "\nMultiplication of " << num1 << " x " << num2 << " = " << num1 *  num2 << endl;
                    break;
            case 4: 
                    cout << "\nDivision of " << num1 << " / " << num2 << " = " << (float)num1 / num2 << endl;
                    break;
            case 5: 
                    cout << "\nExiting Caclulator - Thank You "<< endl;
                    exit(0);
                    break;
            default: 
                    cout << "\nInvalid Selection !"<< endl;
                    break;
        }
    }
    
    return 0;
}
