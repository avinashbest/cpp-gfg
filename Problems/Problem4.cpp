#include <bits/stdc++.h>
using namespace std;
//Take user input amount of money and consider an infinite supply of denominations 1, 20, 50 and 100. What is the minimum number of denominations to make the change?
int main(void) {
  int amt = 253, q, ans = 0;
  //To calculate min. no. of denominations
  //we need to first divide by 100
  //then, by 50
  //then, by 20
  //then the rest of the amount can be made using 1

  //add notes of 100 required
  q = amt/100;
  ans += q;
  amt -= q*100;
  //add notes of 50 required
  q = amt/50;
  ans += q;
  amt -= q*50;
  //add notes of 20 required
  q = amt/20;
  ans += q;
  amt -= q*20;
  //add remaining amount (to be paid using)
  ans += amt;
  cout<<"Min. notes to get a sum of 253: "<<ans<<endl;
  return 0;
}

//In this problem, we have been given the relaxation of having an unlimited supply of the said denominations. Hence, to make it possible with the minimum number of notes in total, we try to accommodate the sum in the decreasing order of value. i.e. We try out first with 100, then the remaining amount with 50, then 20 and finally the remaining amount can be made up using 1s.
