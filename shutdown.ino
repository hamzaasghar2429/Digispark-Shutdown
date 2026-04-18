#include <DigiKeyboard.h>

void setup() {
    DigiKeyboard.delay(2000); // Delay to ensure Command Prompt is ready
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Win + R to open Run dialog
    DigiKeyboard.delay(2000);
    DigiKeyboard.print("cmd");
    DigiKeyboard.sendKeyStroke(KEY_ENTER); // Open Command Prompt
    DigiKeyboard.delay(2000);

    // Example command sequences
    DigiKeyboard.println("color a"); // Set Command Prompt text color to green
    DigiKeyboard.sendKeyStroke(KEY_ENTER); // Execute command
    DigiKeyboard.delay(2000);

    DigiKeyboard.println("dir /s"); // List directory contents
    DigiKeyboard.sendKeyStroke(KEY_ENTER); // Execute command
}

void loop() {
    // Nothing to do here for this example
}

