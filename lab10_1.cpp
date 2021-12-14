#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
#include<cmath>
using namespace std;

int main(){	
    double loan,per,pay;
    
	cout << "Enter initial loan: ";
    cin >> loan;
	cout << "Enter interest rate per year (%): ";
    cin >> per;
	cout << "Enter amount you can pay per year: ";
    cin >> pay;


	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int i = 1 ;
    double x,total,New;
    cout << fixed << setprecision(2);
	while (loan>0.00)
    {
        x = (loan*per)/100;
        total = loan + (loan*per)/100;
        
        cout << setw(13) << left << i; 
    	cout << setw(13) << left << loan;
    	cout << setw(13) << left << x;
        
        if (pay > total)
        {
            pay = total;
        }
    	cout << setw(13) << left << total;
    	cout << setw(13) << left << pay;
        New = total-pay;
    	cout << setw(13) << left << New;
    	cout << "\n";	   
        loan = New;
        i++;
    }

	return 0;
}
