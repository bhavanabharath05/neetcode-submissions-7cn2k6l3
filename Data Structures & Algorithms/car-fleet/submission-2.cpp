class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>>cars;
        for(int i=0;i<position.size();i++){
            double time=(double)(target-position[i])/speed[i];
            cars.push_back({position[i],time});
        }
        sort(cars.begin(),cars.end(),greater<>());
        int fleet=0;
        double prevtime=0;
        for(auto car:cars){
            if(car.second>prevtime){
                fleet++;
                prevtime=car.second;
            }
        }
        return fleet;


    }
};
