#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    // Find the maximum product of the array without adding 1 to any digit.
    long long max_product = 1;
    for (int i = 0; i < n; i++) {
      max_product *= arr[i];
    }

    // Find the maximum product of the array after adding 1 to any digit.
    long long new_max_product = max_product;
    for (int i = 0; i < n; i++) {
      // Add 1 to the current digit and calculate the new product.
      long long new_product = max_product * (arr[i] + 1) / arr[i];

      // Update the maximum product if the new product is greater.
      new_max_product = max(new_max_product, new_product);
    }

    // Print the maximum product.
    cout << new_max_product << endl;
  }

  return 0;
}
