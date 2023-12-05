#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Vector Capacity will be not change jb hum vector me se koi bhi element nikalte hain tb capacity nahin change hota hai size change ho jata hai lakin capacity jo raheta hai wahi raheta hai
    vector<int> v;
    cout << "Size Of a vector : " << v.size() << endl;
    cout << "Capacity Of a vector : " << v.capacity() << endl;
    v.push_back(1);
    cout << "Size Of a vector : " << v.size() << endl;
    cout << "Capacity Of a vector : " << v.capacity() << endl;
    v.push_back(2);
    cout << "Size Of a vector : " << v.size() << endl;
    cout << "Capacity Of a vector : " << v.capacity() << endl;
    v.push_back(3);
    cout << "Size Of a vector : " << v.size() << endl;
    cout << "Capacity Of a vector : " << v.capacity() << endl;
    v.resize(5);
    cout << "Size Of a vector : " << v.size() << endl;
    cout << "Capacity Of a vector : " << v.capacity() << endl;
    v.pop_back();
    cout << "Size Of a vector : " << v.size() << endl;
    cout << "Capacity Of a vector : " << v.capacity() << endl;
    v.pop_back();
    cout << "Size Of a vector : " << v.size() << endl;
    cout << "Capacity Of a vector : " << v.capacity() << endl;
    return 0;
}