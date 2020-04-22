#include <iostream>
#include <fstream>
using namespace std;

int main()

{    

	string markaSamochodu="Peugeot";
    string model="3008";
	string VIN="MZA12887947";

  ofstream SalonPeugeot;              
    SalonPeugeot.open("plikWynikowy.json",ios::out);         
    SalonPeugeot<<" [  \n { \n \"markaSamochodu\" : \" " <<markaSamochodu ;
    SalonPeugeot<<" [  \n { \n \"model\" : \" " <<model ;
    SalonPeugeot<< " [  \n { \n \"VIN\" : \" " <<VIN ;
	SalonPeugeot<<endl; 
	SalonPeugeot.close();

    
SalonPeugeot.close();

    return 0;
}
