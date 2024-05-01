/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> result;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int i = 0, j = 0;
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) {
            ++i;
        } else if (nums1[i] > nums2[j]) {
            ++j;
        } else {
            if (result.empty() || nums1[i] != result.back()) {
                result.push_back(nums1[i]);
            }
            ++i;
            ++j;
        }
    }

    return result;
}

int main() {
    //Approach-1
    // vector<int> nums1 = {1, 2, 2, 1};
    // vector<int> nums2 = {2, 2};

    // vector<int> result = intersection(nums1, nums2);

    // // for (int i = 0; i < result.size(); ++i) {
    // //     cout << result[i];
    // //     if (i < result.size() - 1) {
    // //         cout << ", ";
    // //     }
    // // }

    // for (int i = 0; i < result.size(); ++i) {
    //     cout << result[i];
    // }


     //Approach-2
    //Taking input from user
    // Input the size of the first vector
    int n1;
    cout << "Enter the size of the first vector: ";
    cin >> n1;

    // Input the elements of the first vector
    vector<int> nums1(n1);
    cout << "Enter " << n1 << " elements of the first vector: ";
    for(int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }

    // Input the size of the second vector
    int n2;
    cout << "Enter the size of the second vector: ";
    cin >> n2;

    // Input the elements of the second vector
    vector<int> nums2(n2);
    cout << "Enter " << n2 << " elements of the second vector: ";
    for(int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }

    // Find the intersection of the two vectors
    vector<int> result = intersection(nums1, nums2);

    // Output the intersection
    cout << "Intersection of the two vectors: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
*/
/*
//Linear search
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int linear_search(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    //Approach-1
    // vector<int> arr = {4, 2, 7, 1, 9, 5};
    // int target = 7;
    // int result = linear_search(arr, target);
    // if (result != -1) {
    //     std::cout << "Element found at index " << result <<endl;
    // } else {
    //     std::cout << "Element not found" <<endl;
    // }


    //Approach-2
    //Taking input from user
    // vector<int> arr;
    // int size;
    // cout << "Enter the size of the array: ";
    // cin >> size;
    // cout << "Enter " << size << " elements: ";
    // for (int i = 0; i < size; ++i) {
    //     int x;
    //     cin >> x;
    //     arr.push_back(x);
    // }

    // int target;
    // cout << "Enter the target value to search for: ";
    // cin >> target;

    // int result = linear_search(arr, target);
    // if (result != -1) {
    //     cout << "Element found at index " << result <<endl;
    // } else {
    //     cout << "Element not found" <<endl;
    // }

    return 0;
}
*/
/*
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
// Function to perform linear search
pair<int, int> linear_search_2d(vector<vector<int>>& matrix, int target) {
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            if (matrix[i][j] == target) {
                return make_pair(i, j);
            }
        }
    }
    return make_pair(-1, -1);
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows,vector<int>(cols));

    cout << "Enter the elements of the matrix:" <<endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    int target;
    cout << "Enter the target value to search for: ";
    cin >> target;

    pair<int, int> result = linear_search_2d(matrix, target);
    if (result.first != -1 && result.second != -1) {
        cout << "Element found at position (" << result.first << ", " << result.second << ")" <<endl;
    } else {
        cout << "Element not found" <<endl;
    }

    return 0;
}
*/
/*
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
vector<int> array_to_vector(int arr[], int size) {
    vector<int> vec;
    for (int i = 0; i < size; ++i) {
        vec.push_back(arr[i]);
    }
    return vec;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> vec = array_to_vector(arr, size);

    // Printing the vector
    cout << "Vector elements: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout <<endl;

    return 0;
}
*/
/*
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    // Create a 2D vector with the specified number of rows and columns
    vector<vector<int>> matrix(rows, vector<int>(cols));

    // Input elements of the matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> matrix[i][j]; // Input each element
        }
    }

    // Print the matrix
    cout << "The matrix you entered is:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/

/**/

#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
// Function to input elements into a 2D vector
vector<vector<int>> input_2d_vector(int rows, int cols) {
    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j]; // Input each element
        }
    }

    return matrix;
}

// Function to print a 2D vector
void print_2d_vector(vector<vector<int>>& matrix) {
    cout << "The matrix you entered is:" << endl;
    for (const auto& row : matrix) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;
    vector<vector<int>> matrix = input_2d_vector(rows, cols);

    print_2d_vector(matrix);

    return 0;
}
