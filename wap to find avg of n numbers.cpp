#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    
    if (n <= 0) {
        cout << "Number of elements should be greater than zero." << endl;
        return 1; 
    }
    
    double sum = 0.0;
    
    
    for (int i = 0; i < n; i++) {
        double number;
        cout << "Enter number " << i + 1 << ": ";
        cin >> number;
        sum += number;
    }
    
    
    double average = sum / n;
    
    
    cout << "The average of the entered numbers is: " << average << endl;
    
    return 0; 
}
