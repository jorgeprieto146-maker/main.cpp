#include <iostream>
#include <map>
#include <string>
#include <climits>
using namespace std;

int main() {
    // TODO: Escribe tu código a continuación
     map<string, int> inventory = {
        {"apples", 50},
        {"bananas", 30},
        {"oranges", 25},
        {"grapes", 40},
        {"strawberries", 15}
    };
        int totalQuantity = 0;
        int maxQuantity = -1;
        string highestItem = "";
        int minQuantity = INT_MAX;
        string lowestItem = "";

        cout << "===== INVENTORY REPORT =====" << endl;
        
        for (const auto& pair : inventory) {
            cout << pair.first << ": " << pair.second << endl;

            totalQuantity += pair.second;

            if (pair.second > maxQuantity) {
                maxQuantity = pair.second;
                highestItem = pair.first;
            }
            if (pair.second < minQuantity) {
            minQuantity = pair.second;
            lowestItem = pair.first;

        }
    
    }
        cout << "===== SUMMARY =====" << endl;
        cout << "Total items: " << inventory.size() << endl;
        cout << "Total quantity: " << totalQuantity << endl;
        cout << "Highest stock: " << highestItem << " (" << maxQuantity << ")" << endl;
        cout << "Lowest stock: " << lowestItem << " (" << minQuantity << ")" << endl;


    return 0;
}