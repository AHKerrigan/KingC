/* CModify the broker.c example to ask the user to enter the number of shares
and the price per share, instead of the value of the trade and Add the
statements that compure the commission charged by the rival broker. Display the
rival's commission as well as the commission charged by the original broker*/

#include <stdio.h>

int main(void) {
  float shares, sharePrice, commission, rivalCommision;
  printf("Enter the number of shares followed by the share price: \n");
  scanf("%f $%f", &shares, &sharePrice);

  float value = shares * sharePrice;

  if (value < 2500.00f) {
    commission = 30.00f + 0.17f * value;
  }
  else if (value < 6250.00f) {
    commission = 56.00f + 0.0066f * value;
  }
  else if (value < 20000.00f) {
    commission = 76.00f + 0.0034f * value;
  }
  else if (value < 50000.00f) {
    commission = 100.00f + 0.0022f * value;
  }
  else if (value < 500000.00f) {
    commission = 155.00f + 0.0011f * value;
  }
  else {
    commission = 255.00f + 0.0009f * value;
  }
  if (commission < 39.00f) {
    commission = 39.00f;
  }
  if(shares < 2000) {
    rivalCommision = 33.00f + 0.03f * shares;
  }
  else {
    rivalCommision = 33.00f + 0.02f * shares;
  }

  printf("Trade value: $%.2f\n", value);
  printf("Commission: $%.2f\n", commission);
  printf("Rival's commission: $%.2f", rivalCommision);
  return 0;
}
