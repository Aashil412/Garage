# Garage
This project is to demonstrate my knowledge on stacks. 
The program has two parking garage lanes and a street.
Each lane is a stack.
There are cars arriving and departing to and from the parking garage all with thier unique license plate number and what lane they are departing or arriving on.
The data is all read from a text file.
If a customer arrives to pick up a car which is not near the exit, all cars that are blocking the car's path are moved into the another lane. 
If more cars still must be moved out of the way, they go into the street. When the customer's car is driven out, all cars in the street must be put back into the garage.
They have to be put back in thier respective position they were moved out from.
When a car departs, we keep track of the number of times the car had to be moved out of the way so that other cars could depart.
