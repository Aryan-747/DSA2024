#include <iostream>
#include <unordered_map>

int main() {
    // Create an unordered_map (HashMap) with key-value pairs
    std::unordered_map<int, std::string> hashmap;

    // Insert some key-value pairs
    hashmap[1] = "Apple";
    hashmap[2] = "Banana";
    hashmap[3] = "Cherry";

    // Access elements by key
    std::cout << "Key 1: " << hashmap[1] << std::endl;
    std::cout << "Key 2: " << hashmap[2] << std::endl;

    // Check if a key exists
    int key = 2;
    if (hashmap.find(key) != hashmap.end()) {
        std::cout << "Key " << key << ": " << hashmap[key] << std::endl;
    } else {
        std::cout << "Key " << key << " not found!" << std::endl;
    }

    // Iterate through the HashMap
    std::cout << "\nAll key-value pairs:\n";
    for (const auto& pair : hashmap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
