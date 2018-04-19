# Programming Merit Badge: Reflex Game

### Arduino Quick Start

In these examples, `PIN` is the number of the pin. This can be passed manually (`digitalRead(1)`) or with a variable/constant as shown here.
In the software you write, these will be provided for you: `RED_BTN`, `BLUE_BTN`, `GREEN_BTN`, `RED_LED`, `GREEN_LED`, `BLUE_LED`.

To check if a button is pressed:

`isPressed` will contain `true` or `false`.
```ino
bool isPressed = digitalRead(PIN);
```

To turn an LED on or off:

(Arduino defines `HIGH` and `LOW` for on and off, but you can also use `true`/`false`, or `1`/`0`.)
```ino
digitalWrite(PIN, HIGH);
```

To wait an amount of time:
The time shown is in milliseconds, where 1000ms is one second; this command delays for one second.
```ino
delay(1000);
```

To do different options based on conditions:
```ino
if (condition) {
  // do one thing
} else {
  // do another thing
}
```
For example, to turn on the LED on pin 2 if and only if the button on pin 1 is pressed:
```ino
if (digitalRead(1)) {
  digitalWrite(2, HIGH);
} else {
  digitalWrite(2, LOW);
}
```
The else condition is not necessary, and can be omitted:
```ino
if (digitalRead(1)) {
  digitalWrite(2, HIGH);
}
```

To run a segment of code repeatedly, a loop can be employed in a similar way to an `if` statement.
```ino
while (condition) {
  // perform action
}
```
For example:
```ino
// Turn red LED on for as long as its corresponding button is pressed
while (digitalRead(RED_BTN)) {
  digitalWrite(RED_LED, HIGH);
}
digitalWrite(RED_LED, LOW);
```

Comments begin with two slashes, and are difficult to overuse. We provide some comments
in the skeleton code you start from. We recommend adding comments to anything you write
to help you understand more quickly next time you return to that section of the program.
Block comments can also be created using `/* ... */`, which will allow comments to flow
across line breaks.

```ino
/* This section of the program will light the led on the first pin at
   the beginning of the game to provide a ready signal for the player */
 
// Set the pin
int pin = 1;

// enable the pin
digitalWrite(pin, HIGH);
```
