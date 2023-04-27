using namespace std;

#include<bits/stdc++.h>

class Knapsack {
public:
  int KnapSack(const vector<int> &p, const vector<int> &w, int W, int n){
    if(n == 0 || W==0){
      return 0;
    }

    if(w[n-1]>W){
      return KnapSack(p, w, W, n-1);
    }else{
      return max(p[n-1]+KnapSack(p, w, W-w[n-1], n-1), KnapSack(p, w, W, n-1));
    }
  }

  int solveKnapsack(const vector<int> &profits, const vector<int> &weights, int capacity) {
    // TODO: Write your code here
    return KnapSack(profits, weights, capacity, weights.size());
   
  }
};

int main(int argc, char *argv[]) {
  Knapsack ks;
  vector<int> profits = {1, 6, 10, 16};
  vector<int> weights = {1, 2, 3, 5};
  int maxProfit = ks.solveKnapsack(profits, weights, 7);
  cout << "Total knapsack profit ---> " << maxProfit << endl;
  maxProfit = ks.solveKnapsack(profits, weights, 6);
  cout << "Total knapsack profit ---> " << maxProfit << endl;
}