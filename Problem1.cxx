#include <iostream>
#include <cstring> 

class Inventory {
    int* packets;
    int size;

public:
    Inventory(int initial_size) {
        size = initial_size;
        packets = new int[size];
        std::cout << "Allocated memory for " << size << " packets.\n";
    }
    void resize(int new_size) {
        int* new_packets = new int[new_size]; 
        int copy_size = new_size < size ? new_size : size;
        memcpy(new_packets, packets, copy_size * sizeof(int));
        
        delete[] packets; 
        packets = new_packets; 
        size = new_size;

        std::cout << "Resized inventory to " << size << " packets.\n";
    }
    ~Inventory() {
        delete[] packets;
        std::cout << "Freed allocated memory.\n";
    }
    void displaySize() {
        std::cout << "Current inventory size: " << size << " packets.\n";
    }
};

int main() {
    Inventory inventory(10); 
    inventory.displaySize();
    inventory.resize(15);
    inventory.displaySize();
    inventory.resize(8);  
    inventory.displaySize();
    return 0;
}