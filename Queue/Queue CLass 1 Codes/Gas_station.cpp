#include<iostream>
#include<vector>
using namespace std;
   int solve(vector<int>&gas,vector<int>&cost){
     // Shortage of petrol
        int deficit = 0;
        // How much petrol is left
        int balance = 0;
        // Starting index
        int start = 0;
        
        // Traverse the gas array
        for (int i = 0; i < gas.size(); i++) {
            balance = balance + gas[i] - cost[i]; // Update the balance after reaching    the        i-th gas station
            
            if (balance < 0) {
                // This means there is a deficit of petrol
                deficit = deficit + abs(balance); // Track the total deficit
                
                // Better approach - 1: Start from the next gas station
                start = i + 1;
                
                // Start again from this gas station, so balance is reset to 0
                balance = 0;
            }
        }
        
        // Answer found: If the final balance is greater than or equal to the total deficit,
        // then it means that you can complete the circuit starting from 'start'.
        if (balance >= deficit) {
            return start;
        }
        
        // Answer not found: If the balance is less than the total deficit, there's no way to complete the circuit.
        return -1;
    } 
    int main(){
    vector<int>gas {1,2,3,4,5};
    vector<int>cost {3,4,5,1,2};
    int ans = solve(gas,cost);
    cout<<"Starting index = "<<ans;
    return 0;
}
