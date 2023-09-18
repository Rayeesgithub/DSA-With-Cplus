class Solution {
    class Car{
        public:
        int pos,speed;
        Car(int p,int s){
            pos=p;
            speed=s;
        }
    };
     // Custom comparison function for sorting cars based on their positions.
    static bool myComp(Car &a, Car &b) {
        return a.pos < b.pos;
    }

public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<Car> cars;

        // Create Car objects and store them in the 'cars' vector.
        for (int i = 0; i < position.size(); i++) {
            Car car(position[i], speed[i]);
            cars.push_back(car);
        }

        // Sort the 'cars' vector based on their positions using the custom comparison function.
        sort(cars.begin(), cars.end(), myComp);

        stack<float> st; // Stack to store arrival times for cars.

        // Iterate through the sorted cars.
        for (auto car : cars) {
            // Calculate the time for the car to reach the target using float division.
            float time = (target - car.pos) / static_cast<float>(car.speed);

            // Check if there are cars ahead that can be caught in a fleet.
            while (!st.empty() && time >= st.top()) {
                st.pop();
            }

            st.push(time); // Push the current car's arrival time onto the stack.
        }

        return st.size(); // Return the number of car fleets.
    }
};