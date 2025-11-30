#pragma once

#include <iostream>
#include "cutie.hpp"

const int MAX_SIZE = 5;

class QueueTees {
private:
  Cutie* arr[MAX_SIZE];
  Cutie** first;
  Cutie** last;

public:
  QueueTees() {
    first = arr;
    last = arr;
  }

  bool isEmpty() {
    return (first == last);
  }

  bool isFull() {
    return (first + MAX_SIZE == last);
  }

  void enqueue(Cutie& element) {
    if (isFull()) {
      std::cout << "Queue is full. Cannot enqueue element.\n";
    }
    else {
      *last = &element;
      last++;
    }
  }

  void dequeue() {
    if (isEmpty()) {
      std::cout << "Queue is empty. Cannot dequeue from queue.\n";
    }
    else {
      Cutie* dequeuedElement = *first;
      first++;
      std::cout << dequeuedElement->getDescription() << "\n";
    }
  }

  int size() {
    return last - first;
  }
};

