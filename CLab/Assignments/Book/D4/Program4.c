/*
QUESTION:
The straight-line method of computing the yearly depreciation of the value of an item is given by:
Depreciation = (Purchase Price - Salvage Value) / Years of Service

WAP to determine the salvage value of an item when the purchase value, years of service, and the annual depreciation are given.

Input: Enter the purchase value, and years of service and annual depreciation: 50000 5 200
Output: Salvage value of the given item = 49000.
*/

#include <stdio.h>

int main() {
    float purchase_price, years, annual_depreciation, salvage_value;

    printf("Enter the purchase value, years of service, and annual depreciation: ");
    scanf("%f %f %f", &purchase_price, &years, &annual_depreciation);

    salvage_value = purchase_price - (annual_depreciation * years);
    printf("Salvage value of the given item = %.2f\n", salvage_value);

    return 0;
}
/*
OUTPUT:
Salvage value of the given item = 49000.
*/
