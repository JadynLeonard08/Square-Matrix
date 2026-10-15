/*

* Author:FirstName_LastName

* Assignment Title: Example

* Assignment Description: Example

* Due Date:08/13/2025

* Date Created:08/13/2025

* Date Last Modified:08/13/2025

*/

 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Data Abstraction:
    const int MAX_NUMBER = 100;
    
    int dimensions[MAX_NUMBER];
    int box[MAX_NUMBER][MAX_NUMBER];
    
    //int beginNum;
    int userNums;
    int count = 0;
    int n;
    int minDistance;

    // Input:

    while (cin >> userNums && userNums > 0){
            if (userNums > 0 && userNums <= MAX_NUMBER){
                dimensions[count] = userNums;
                count++;
            }
    
    }
 

    // Process:
    for (int i = 0; i < count; ++i){
        //tracks the input dimension numbers (0....5)
        n = dimensions[i];
        
        for (int r = 0; r < n; ++r){
            for (int c = 0; c < n; ++c){
                //find the minimum distance between the index, row, and column
                minDistance = r;
                //if c is less than the minimum distance
                if (c < minDistance){
                    minDistance = c;
                }
                //if the difference between n and r is less than the minimum
                //that is the minimmum distance
                if ((n - 1 - r) < minDistance){
                    minDistance = n - 1 - r;
                }
                //if the difference between n and c is less than the minimum
                //that is the minimum distance
                if ((n - 1 - c) < minDistance) {
                    minDistance = n - 1 - c;
                }
                box [r][c] = minDistance + 1;
            }
        }
 

    // Output:
        for (int r = 0; r < n; ++r){
            for (int c = 0; c < n; ++c) {
                if (c == 0) {
                    cout << setw(5) << box [r][c];
                }
                else {
                    cout << " " << setw(5) << box[r][c];
                }
            } 
            cout << endl;
        }
        cout << endl;
    }
 

    

 

    // Assumptions:

 

    

 

    return 0;

 

}