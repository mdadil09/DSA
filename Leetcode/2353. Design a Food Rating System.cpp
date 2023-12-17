class FoodRatings {
public:
    unordered_map<string,set<pair<int,string>>> cuisinesRatings;
    unordered_map<string,int> foodRatings;
    unordered_map<string,string> foodToCuisine;

    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0;i<foods.size();i++){
            cuisinesRatings[cuisines[i]].insert({-ratings[i],foods[i]});
            foodRatings[foods[i]] = ratings[i];
            foodToCuisine[foods[i]] = cuisines[i];
        }
    }
    
    void changeRating(string food, int newRating) {
        auto &cuisine = foodToCuisine[food];
        int oldRating = foodRatings[food];
        cuisinesRatings[cuisine].erase({-oldRating,food});
        cuisinesRatings[cuisine].insert({-newRating,food});
        foodRatings[food] = newRating;
    }
    
    string highestRated(string cuisine) {
        return (*cuisinesRatings[cuisine].begin()).second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */