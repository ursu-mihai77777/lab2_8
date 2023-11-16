#include <iostream>
using namespace std;
template <typename T>
T maximum(T a, T b, T c) {
    
    T maxVal = a;

    if (b > maxVal) {
        maxVal = b;
    }

    if (c > maxVal) {
        maxVal = c;
    }

    return maxVal;
}

int main() {
    
    int intResult = maximum(5, 10, 3);
    cout << "Maximum of 5, 10, 3: " << intResult << endl;

    
    float floatResult = maximum(2.5f, 7.3f, 4.8f);
    cout << "Maximum of 2.5, 7.3, 4.8: " << floatResult << endl;

    
    const char* str1 = "apple";
    const char* str2 = "banana";
    const char* str3 = "orange";
    const char* strResult = maximum(str1, str2, str3);
    cout << "Maximum of 'apple', 'banana', 'orange': " << strResult << endl;

    return 0;
}