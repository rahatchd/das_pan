#include <path.h>

Path path(0);
void setup() {
  Serial.begin(9600);
  path.find();
}

int turn;

void loop() {
  turn = path.turn();
  switch (turn) {
    case 0: Serial.print("backwards\n");
    break;
    case 1: Serial.print("left\n");
    break;
    case 2: Serial.print("straight\n");
    break;
    case 3: Serial.print("right\n");
  }
  path.stats();
  path.update();
  path.find();
  delay(1000);
}
