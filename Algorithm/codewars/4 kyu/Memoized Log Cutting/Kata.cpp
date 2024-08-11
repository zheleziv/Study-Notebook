#include <iostream>
#include "vector"

// Your new function as given to you by me, your boss.
int cut_log(const std::vector<int>& price, int n){
    int maxSum = 0;
    int curSum = 0;
    // Some array to store calculated values
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= j; i++) { // Two nested loops = Θ(n^2)
            curSum = price[n - j] + ((j) / i) * price[i] +  price[((j) % i)];
            if(curSum >= 579)
            std::cout << "j- "<< j << " " << "i- "<< i << "| 1- "<< (n - j) / i << ", 2- " <<   ((n - j) % i) << " " << curSum <<  std::endl;
            if(curSum > maxSum)
                maxSum = curSum;
        }
    }
    return maxSum; // Good luck intern!
}

int main(){
    std::vector<int> p({0, 6, 13, 19, 22, 28, 36, 45, 54, 57, 67, 73, 76, 83, 88, 96, 101, 109, 118, 127, 132, 140, 147, 155, 158, 164, 172, 182, 185, 193, 194, 201, 206, 214, 217, 224, 229, 239, 246, 252, 256, 262, 265, 271, 273, 280, 284, 293, 299, 301, 310, 320, 322, 329, 337, 343, 345, 352, 358, 365, 372, 380, 383, 384, 391, 396, 406, 410, 416, 422, 423, 433, 435, 438, 443, 448, 458, 468, 473, 480, 484, 487, 494, 499, 509, 515, 525, 528, 532, 537, 546, 556, 561});
    std::cout << p[86] << std::endl;
    std::cout << cut_log(p,  86) << std::endl;
}