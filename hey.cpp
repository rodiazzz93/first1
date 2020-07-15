#include <iostream>
#include <vector>

int main (){



// find the sym of even numbers
// product of odd numbers


// declare variables
double product;
double sum;


// declared vectors
std::vector <int> odd = {1,3,5,7,9};
std::vector <int> even = {2,4,6,8};


// set prdcut and sum
 product = odd[0] * odd[1] * odd[2] * odd[3] * odd[4];
 sum = even[0] + even[1] + even[2] +even[3];


// output

std::cout << "The sum of even numbers is " << sum << " \n";
std::cout << "The product of odd numbers is " << product << " \n";


}
