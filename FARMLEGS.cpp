#include <iostream>
using namespace std;


int main() {
    int T; // Number of test cases
    cin >> T; // Read the number of test cases

    while (T > 0) {
        T--;
        int N;
        cin >> N; // Read the number of legs

        int min_animals;

        if (N % 4 == 0) {
            min_animals = N / 4; // All cows
        } else { // N % 4 == 2
            min_animals = (N / 4) + 1; // Some cows and one chicken
        }
        
        cout << min_animals << endl; // Output the minimum number of animals
    }
    
    return 0;
}