#include "../../std_lib_facilities.h"

//------------------------------------------------------------------------------

int main()
{

    vector<double> distances;
    double distance = 0;
    double distance_sum = 0;
    double largest = 0;
    double smallest = 0;
    double first = 1;
    while (cin>>distance) {
      if (first == 1) {
        first = 0;
        smallest = distance;
        largest = distance;
      }
      if (distance < smallest)
        smallest = distance;
      if (distance > largest)
        largest = distance;

      distances.push_back(distance);
      distance_sum += distance;
    }

    cout << "Sum of route: " << distance_sum << endl;
    cout << "Smallest distance: " << smallest << endl;
    cout << "Largest distance: " << largest << endl;
    cout << "Mean distance: " << distance_sum/distances.size() << endl;

}

//------------------------------------------------------------------------------
