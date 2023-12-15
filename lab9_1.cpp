#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double loan, rate, pay, total, nb;
    int year = 1;
	cout << "Enter initial loan: ";
	cin >> loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> rate ;
	cout << "Enter amount you can pay per year: ";
	cin >> pay ;

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
while(loan > 0){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << rate/100*loan;
	total = loan+(rate/100*loan);
	cout << setw(13) << left << total;
	if( total < pay ){
	    pay = total;
	    cout << setw(13) << left << pay;
    	nb = total-pay;
    	cout << setw(13) << left << nb;
    	cout << "\n";
    	break;    
	}
	cout << setw(13) << left << pay;
	nb = total-pay;
	cout << setw(13) << left << nb;
	cout << "\n";
	year++;
	loan = nb;
	
	
    }
    return 0;
}
