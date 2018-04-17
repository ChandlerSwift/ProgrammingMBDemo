#define RED_LED 5
#define GREEN_LED 9
#define BLUE_LED 10

#define RED_BTN 2
#define GREEN_BTN 4
#define BLUE_BTN 6

bool buttonStates[] = {false, false, false};

void setup() {
  pinMode(RED_BTN, INPUT_PULLUP);
  pinMode(GREEN_BTN, INPUT_PULLUP);
  pinMode(BLUE_BTN, INPUT_PULLUP);

  // ADD OUTPUTS HERE
}

void loop() {
  /* BEGIN BUTTON PROCESSING CODE */
  if (digitalRead(RED_BTN) != buttonStates[0]) {
    buttonStates[0] = digitalRead(RED_BTN);
    if (buttonStates[0])
      buttonOneOnPress();
  }
  if (digitalRead(GREEN_BTN) != buttonStates[1]) {
    buttonStates[1] = digitalRead(GREEN_BTN);
    if (buttonStates[1])
      buttonTwoOnPress();
  }
  if (digitalRead(BLUE_BTN) != buttonStates[2]) {
    buttonStates[2] = digitalRead(BLUE_BTN);
    if (buttonStates[2])
      buttonThreeOnPress();
  }
  /* END BUTTON PROCESSING CODE */
}

void buttonOneOnPress() {
  // Called when Button One is pressed
}

void buttonTwoOnPress() {
  // Called when Button Two is pressed
}

void buttonThreeOnPress() {
  // Called when Button Three is pressed
}

