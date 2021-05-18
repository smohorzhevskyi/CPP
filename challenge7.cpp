#include <iostream>
#include <vector>

using namespace std;

void challenge7() {

    vector <int> vector1;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "vector1 is a size of: " << vector1.size() << endl;
    cout << "vector1 elements are: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl << endl;

    vector <int> vector2;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "vector2 is a size of: " << vector2.size() << endl;
    cout << "vector2 elements are: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl << endl;

    vector <vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "vector_2d elements are: " << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl << endl;

    vector1.at(0) = 1000;

    cout << "vector_2d elements are: " << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl << endl;

    cout << "vector1 elements are: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl << endl;

}