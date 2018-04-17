#define RED_LED 5
#define GREEN_LED 9
#define BLUE_LED 10

#define RED_BTN 2
#define GREEN_BTN 4
#define BLUE_BTN 6

//enum Winner { PLAYER_1, PLAYER_2 };
//Winner winner;

void setup() {
  pinMode(RED_BTN, INPUT_PULLUP);
  pinMode(GREEN_BTN, INPUT_PULLUP);
  pinMode(BLUE_BTN, INPUT_PULLUP);

  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
}

void loop() {
  // wait for start button press
  while (digitalRead(GREEN_BTN)) ;;

  // clear all lights
  digitalWrite(RED_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(BLUE_LED, LOW);

  // delay random time; make sure there aren't premature button presses
  long timeToWait = random(3000, 10000); // 3-10 seconds
  long startTime = millis();
  long endTime = startTime + timeToWait;
  while (millis() < endTime) {
    if (!digitalRead(RED_BTN)) { // Red pushed too early!
      digitalWrite(BLUE_LED, HIGH);
      return;
    } else if (!digitalRead(BLUE_BTN)) {
      digitalWrite(RED_LED, HIGH);
      return;
    }
  }

  // light green LED
  digitalWrite(GREEN_LED, HIGH);

  // wait for first button press
  while (digitalRead(RED_BTN) && digitalRead(BLUE_BTN)) ;;

  // light LED of winner
  if (!digitalRead(RED_BTN))
    digitalWrite(RED_LED, HIGH);
  else
    digitalWrite(BLUE_LED, HIGH);

}

