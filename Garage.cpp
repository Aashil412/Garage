#include"Garage.h"

//checks if the car is in lane 1 or 2
bool Garage::check(const Car& car) {
    if (lane1.isIn(car) || lane2.isIn(car)) {
        return true;
    }
    cout << "Wrong garage. Your car " << car.license << " is not here.";
    return false;
}

void Garage::Arrive(const Car& car) {

    if (!lane1.isFull()) {
        cout << "The car " << car.license << " is arriving into the Lane1";
        lane1.push(car);
    }

    else if (!lane2.isFull()) {
        cout << "The car " << car.license << " is arriving into the Lane2";
        lane2.push(car);
    }

    else {
        cout << "Garage is full!";
    }


}
void Garage::Depart(const Car& car) {
   int originalLane;
   int carsMoved =0;
   int carsMoved2 =0;
    if (check(car)) {
        if (lane1.isIn(car)) {
           originalLane=1;
            while (!lane1.isEmpty() && lane1.peek().license != car.license) {
                Car temp = lane1.peek();
                lane1.pop();
                temp.count++;
                
                if (!lane2.isFull()) {
                    lane2.push(temp);
                    carsMoved++;
                }
                else {
                    lane3.push(temp);
            
                }
            }
            Car temp1 = lane1.peek();

            cout << "The car " << temp1.license << " is departing. It was moved " << temp1.count << " times.";
            lane1.pop();
        }


        else if (lane2.isIn(car)) {
           originalLane=2;
            while (!lane2.isEmpty() && lane2.peek().license != car.license) {
                Car temp = lane2.peek();
                lane2.pop();
                temp.count++;
                if (!lane1.isFull()) {
                    lane1.push(temp);
                  carsMoved2++;
                }
                else {
                    lane3.push(temp);
                     
                }
            }
            Car temp1 = lane2.peek();

            cout << "The car " << temp1.license << " is departing. It was moved " << temp1.count << " times.";
            lane2.pop();
        }
        while (!lane3.isEmpty()) {
            Car temp = lane3.peek();
            lane3.pop();              
            temp.count++;
            if (originalLane ==1) {
                lane1.push(temp);
                  
            }
            else if (originalLane ==2) {
                lane2.push(temp);
               
            }
        }
      for(int i =0;i<carsMoved;i++){
         if(originalLane==1){
            Car temp = lane2.peek();
            lane2.pop();              
            temp.count++;
                lane1.push(temp);
             
            
         }
         
      }
        for(int i =0;i<carsMoved2;i++){
         if(originalLane == 2){
          Car temp = lane1.peek();
             lane1.pop();              
             temp.count++;
                lane2.push(temp);
             
         }
        }
        
        
}
}