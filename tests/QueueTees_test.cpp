#include <catch2/catch_test_macros.hpp>
#include "../src/QueueTees.hpp"
#include "../src/Puppy.hpp"
#include "../src/Kitty.hpp"
#include "../src/PygmyMarmoset.hpp"

TEST_CASE("Empty queue has size zero") {
  QueueTees queue;
  REQUIRE(queue.size() == 0);
}

TEST_CASE("Single element enqueued") {
  QueueTees queue;
  Puppy puppy;
  queue.enqueue(puppy);
  REQUIRE(queue.size() == 1);
}

TEST_CASE("Multiple elements enqueued") {
  QueueTees queue;
  Puppy puppy;
  Kitty kitty;
  PygmyMarmoset marmoset;
  queue.enqueue(puppy);
  queue.enqueue(kitty);
  queue.enqueue(marmoset);
  REQUIRE(queue.size() == 3);
}

TEST_CASE("Queue at maximum capacity") {
  QueueTees queue;
  Puppy puppy;
  Kitty kitty;
  PygmyMarmoset marmoset;
  Puppy puppy2;
  Kitty kitty2;
  queue.enqueue(puppy);
  queue.enqueue(kitty);
  queue.enqueue(marmoset);
  queue.enqueue(puppy2);
  queue.enqueue(kitty2);
  REQUIRE(queue.isFull() == true);
}

TEST_CASE("Dequeue reduces size") {
  QueueTees queue;
  Puppy puppy;
  Kitty kitty;
  queue.enqueue(puppy);
  queue.enqueue(kitty);
  queue.dequeue();
  REQUIRE(queue.size() == 1);
}

TEST_CASE("Empty queue check") {
  QueueTees queue;
  REQUIRE(queue.isEmpty() == true);
}

