#include <iostream>
#include <string>
#include <sstream>

int prime(int num) {
    if (num <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return false;
 
    return true;
}

int wordCount(const std::string& str) {
    std::istringstream iss(str);
    int count = 0;
    std::string word;

    // Counting words using stringstream
    while (iss >> word) {
        count++;
    }

    return count;
}

int letterCount(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (std::isalpha(c)) {
            count++;
        }
    }
    return count;
}

int add(int num1, int num2) {
    return num1 + num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}

int mult(int num1, int num2) {
    return num1 * num2;
}

int divide(int num1, int num2) {
    return num1 / num2;
}

float tempConvert(float freedom) {
    float commie = (freedom - 32.f) * 5.f/9.f; 
    return commie;
}

int arrayMin(int arr[20]) {
    int min = arr[0];

    for(int i = 0; i < 20; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int arrayMax(int arr[20]) {
    int max = arr[0];

    for(int i = 0; i < 20; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}