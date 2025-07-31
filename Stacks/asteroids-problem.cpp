#include<bits/stdc++.h>
using namespace std;

vector<int> collideAsteroids(vector<int>asteroids) {
    int n = asteroids.size();

    if(n <= 1) {
        return asteroids;
    }

    for(int i=1; i<n; i++) {
        if(asteroids[i] < 0 && asteroids[i-1] > 0) {
            if(abs(asteroids[i]) == abs(asteroids[i-1])) {
                asteroids.erase(asteroids.begin() + i);
                asteroids.erase(asteroids.begin() + (i-1));
            } else if(abs(asteroids[i]) > abs(asteroids[i-1])) {
                asteroids.erase(asteroids.begin() + (i-1));
            } else {
                asteroids.erase(asteroids.begin() + i);
            }
            return collideAsteroids(asteroids);
        }
    }
    return asteroids;
}

int main() {
    vector<int>asteroids = {8,-8};
    int n = asteroids.size();
    vector<int>remainingAsteroids = collideAsteroids(asteroids);
    int nr = remainingAsteroids.size();
    if(nr == 0) {
        cout << "[]" << endl;
    } else {
        for(int i=0; i<nr; i++) {
            cout << remainingAsteroids[i] << " ";
        }
    }
}