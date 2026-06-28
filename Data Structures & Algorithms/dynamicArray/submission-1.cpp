class DynamicArray {
private:
    int* dynamicArray;
    int capacity;
    int length;

public:
    DynamicArray(int capacity) {
        this->capacity = capacity;
        this->length = 0;
        this->dynamicArray = new int[capacity];
    }

    int get(int i) {
        return dynamicArray[i];
    }

    void set(int i, int n) {
        dynamicArray[i] = n;
    }

    void pushback(int n) {
        if (length == capacity) {
            resize();
        }
        dynamicArray[length] = n;
        length++;
    }

    int popback() {
        int temp = dynamicArray[length - 1];
        length--;
        return temp;
    }

    void resize() {
        capacity = capacity * 2;
        int* newArray = new int[capacity];
        for (int i = 0; i < length; i++) {
            newArray[i] = dynamicArray[i];
        }
        delete[] dynamicArray;
        dynamicArray = newArray;
    }

    int getSize() {
        return length;
    }

    int getCapacity() {
        return capacity;
    }
};
