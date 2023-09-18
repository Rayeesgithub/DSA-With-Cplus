class Solution {
public:
     vector<double> getCollisionTimes(vector<vector<int>>& cars) {
        // Create a vector to store the collision times, initialized to -1.
        vector<double> answer(cars.size(), -1);

        // Create a stack to keep track of the indices of cars that haven't collided yet.
        stack<int> st;

        // Iterate through the cars in reverse order (from the last car to the first car).
        for (int i = cars.size() - 1; i >= 0; --i) {
            // Check if there are faster cars ahead of the current car (to the right).
            while (!st.empty() && cars[st.top()][1] >= cars[i][1]) {
                st.pop(); // Remove slower cars from the stack.
            }

            // Check for collisions with faster cars.
            while (!st.empty()) {
                // Calculate the time it takes for the current car to collide with the car at the top of the stack.
                double colTime = (double)(cars[st.top()][0] - cars[i][0]) /
                                 (cars[i][1] - cars[st.top()][1]);

                // If the collision time is valid and less than or equal to the previous collision time,
                // update the collision time and break out of the loop.

                if(answer[st.top()]==-1 || colTime<=answer[st.top()]){
                    answer[i]=colTime;
                    break;
                }
                st.pop();
            }
            st.push(i);
        }
        return answer;
    }
};