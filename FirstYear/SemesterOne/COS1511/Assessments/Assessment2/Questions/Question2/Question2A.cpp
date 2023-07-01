#include <iostream>
using namespace std;

    const float SALES_TAX = 0.10;
    const float COST_PER_NIGHT = 900.00;
    const float DISCOUNT_FOR_10 = 0.10;
    const float DISCOUNT_FOR_20 = 0.20;
    const float DISCOUNT_FOR_30 = 0.30;
    const float DAY_DISCOUNT = 0.05;

    float discountPerRoom = 0.0;
    int numberOfRooms = 0, numberOfDays = 0;

    float CalculateTotalCostOfRoomsWithDiscount(int numRooms, int numDays)
    {
        float totalCost = 0.0, cost = 0.0;
        // If the number of rooms is 10-19
        if(numRooms >= 10 && numRooms < 20){
            // Apply the following discounts - 10%
            cost = (COST_PER_NIGHT * numRooms)*(1-DISCOUNT_FOR_10) ;
            discountPerRoom = DISCOUNT_FOR_10 * 100;
        }
        // If the number of rooms is 20 - 29
        else if(numRooms >= 20 && numRooms < 30){
            // Apply the following discounts - 20%
            cost = (COST_PER_NIGHT * numRooms)*(1-DISCOUNT_FOR_20);
            discountPerRoom = DISCOUNT_FOR_20 * 100;
        }
        // If the number of rooms is 30 - infinity
        else if(numRooms >= 30){
            // Apply the following disocunts - 30%
            cost = (COST_PER_NIGHT * numRooms)*(1-DISCOUNT_FOR_30);
            discountPerRoom = DISCOUNT_FOR_30 * 100;
        }
        else{
            //Apply no discount
            cost = (COST_PER_NIGHT * numRooms);
            discountPerRoom = 0;
        }

        if(numDays >= 3){
            // Apply day discount
            totalCost = (numDays*cost) * (1-DAY_DISCOUNT);
        }
        else{
            // Do not apply day discount
            totalCost = numDays*cost;
        }

        return totalCost;
    }

    float CalculateTotalCostOfRoomsInclTax(float totalCost)
    {
        float totalCostInclTax = 0.0;
        //Calculate the sales tax
        totalCostInclTax = totalCost + (totalCost * SALES_TAX);
        return totalCostInclTax;
    }

int main()
{
    // Obtaining required input
    cout << "Please enter the following: " << endl;
    cout << "Cost per room: R" << COST_PER_NIGHT << endl;
    cout << "Sales tax per room: " << SALES_TAX * 100 << "%" << endl;
    cout << "The number of rooms: ";
    cin >> numberOfRooms;
    cout << "The number of days: ";
    cin >> numberOfDays;
    cout << endl;
    float totalCost = 0.0, totalCostInclTax = 0.0;
    // Obtaining the totalCost
    totalCost = CalculateTotalCostOfRoomsWithDiscount(numberOfRooms, numberOfDays);
    // Obtaining the total cost incl. tax
    totalCostInclTax = CalculateTotalCostOfRoomsInclTax(totalCost);

    cout << "The total cost for one room is R" << COST_PER_NIGHT << endl;
    cout << "The discount per room is " << discountPerRoom << "%" << endl;
    cout << "The number of rooms booked: " << numberOfRooms << endl;
    cout << "The total cost of the rooms are R" << totalCost << endl;
    cout << "The sales tax paid is 10%" << endl;
    cout << "The total cost per booking is R" << totalCostInclTax << endl;

    return 0;
}
