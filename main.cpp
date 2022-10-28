#include<iostream>
#include<string>
#include<fstream>
#include"Garage.h"
#include"Stack.h"

using namespace std;



int main() {

    Car newCar;
    Garage garage;
    ifstream infile;
    string fileName;
    cin >> fileName;
    infile.open(fileName); //opens the file
    if (!infile) { //checks if the file doesnt open
        cerr << "Error" << endl;
        exit(1);
    }
    

   fstream infile2(fileName);
    if (!infile2) { //checks if the file doesnt open
        cerr << "Error" << endl;
        exit(1);
    }
    
    char ParkingCode;
    string license;

  //This will make infile2 read one step ahead of infile
      infile2 >> ParkingCode >> license;
    while (infile >> ParkingCode >> license) { //getline checks each line in the file
      
        newCar.license = license;
        newCar.ParkingCode = ParkingCode;
        if (newCar.ParkingCode == 'A') {
            garage.Arrive(newCar);
        }
        if (newCar.ParkingCode == 'D') {
            garage.Depart(newCar);
        }

      //infile2 reads again but ParkingCode and license are reset automatically when the while loop repeats
      if(infile2 >> ParkingCode >> license){
       cout<< "\n";  
      }
    }

    return 0;
}