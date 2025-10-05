#include <iostream>
#include <unordered_map>
#include <functional> // For std::hash

// Define a custom key type
struct MyKey {
    std::string name;
    int id;

    // Define the equality operator
    bool operator==(const MyKey& other) const {
        return (name == other.name) && (id == other.id);
    }
};

// Define a custom hash function for MyKey
struct MyKeyHash {
    std::size_t operator()(const MyKey& key) const {
        // You can use std::hash for the individual components or
        // create your custom hash function as needed.
        return std::hash<std::string>()(key.name) ^ std::hash<int>()(key.id);
    }
};

int main() {
    // Create an unordered_map with MyKey as the key type
    std::unordered_map<MyKey, int, MyKeyHash> myMap;

    // Insert key-value pairs
    MyKey key1{"Alice", 1};
    MyKey key2{"Bob", 2};

    myMap[key1] = 42;
    myMap[key2] = 17;

    // Access values using custom keys
    std::cout << "Value for key1: " << myMap[key1] << std::endl;
    std::cout << "Value for key2: " << myMap[key2] << std::endl;

    return 0;
}
