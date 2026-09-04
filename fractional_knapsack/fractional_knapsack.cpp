// Startup command: cd "C:\VScode\c++\CPP Introductory Programs\fractional_knapsack" && g++ fractional_knapsack.cpp -o fractional_knapsack.exe && ./fractional_knapsack.exe 
// Run command: g++ fractional_knapsack.cpp -o fractional_knapsack.exe && ./fractional_knapsack.exe 

#include<iostream>

struct Object{

    int weight;
    int profit;
    int selected = 0;
};

int max_pw(Object *bag, int n){

    int max = 0; // Object number with max value

    while(max < n && bag[max].selected != 0){

        ++max;
    }

    for(int i = 0; i < n; i++){

        if(bag[i].selected == 1){

            continue;
        }

        if(((double)bag[i].profit/bag[i].weight) >= ((double)bag[max].profit/bag[max].weight)){

            max = i;
        }
    }

    bag[max].selected = 1;
    return max;
}

int calculate_profit(Object *bag, int n, int knapsack_capacity){

    int total_profit = 0;
    int capacity = knapsack_capacity;
    int selected_obj;

    for(int i = 0; i < n; i ++){

        selected_obj = max_pw(bag, n);

        if(capacity < bag[selected_obj].weight){

            total_profit += ((double)bag[selected_obj].profit/bag[selected_obj].weight)*capacity;
            capacity = 0;
            break;
        } else {

            total_profit += bag[selected_obj].profit;
            capacity = capacity - bag[selected_obj].weight;

            if(capacity == 0){
                break;
            }
        }
    }

    return total_profit;
}

int main(){

    int n = 5;
    double total_profit = 0;
    int knapsack_capacity = 23;

    Object bag[n] = {
        {2, 10},
        {4, 20},
        {6, 30},
        {8, 40},
        {10, 50}
    };

    for(int i = 0; i < n; i++){

        std::cout << "Object - " << i + 1 << " : weight - " << bag[i].weight << " & profit - " << bag[i].profit << "\n";
    }

    std::cout << "\nKnapsack Capacity: " << knapsack_capacity << "\n";
    std::cout << "Selected items: \n";

    total_profit = calculate_profit(&bag[0], 5, knapsack_capacity);

    for(int i = 0; i < n; i ++){

        if(bag[i].selected == 1){

            std::cout << "Object - " << i + 1 << " : weight - " << bag[i].weight << " & profit - " << bag[i].profit << "\n";
        }
    }

    std::cout << "Total profit: " << total_profit << "\n";

    return 0;
}