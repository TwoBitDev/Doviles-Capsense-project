/**
 * This example turns the ESP32 into a Bluetooth LE keyboard that writes the words, presses Enter, presses a media key and then Ctrl+Alt+Delete
 */
#include <BleKeyboard.h>

BleKeyboard bleKeyboard;

void setup() {
  Serial.begin(115200);
  Serial.println("Starting BLE work!");
  bleKeyboard.begin();
}

void loop() {
  if(bleKeyboard.isConnected()) {
   // Serial.println("Sending 'Hello world'...");
   // bleKeyboard.print("Hello world");
   int a = touchRead(4);
   Serial.println("\n a =");
   Serial.println(touchRead(4));
    if( a < 30)
    {
       Serial.println("if loop a");
       bleKeyboard.print("m");
       delay(1000);

      }
      
    Serial.println("\n b =");
    int b = touchRead(15);
    Serial.println(touchRead(15));
    if( b < 30)
    {
       Serial.println("if loop b");
       bleKeyboard.print("b");
       delay(1000);

      }

    Serial.println("\n c =");
    int c = touchRead(27);
    Serial.println(touchRead(27));
    if( c < 30)
    {
       Serial.println("if loop c");
       bleKeyboard.print("c");
       delay(1000);

      }

    Serial.println("\n d =");
    int d = touchRead(14);
    Serial.println(touchRead(14));
    if( d < 30)
    {
       Serial.println("if loop d");
       bleKeyboard.print("d");
       delay(1000);

      }
     
   // Serial.println("Sending Enter key...");
   // bleKeyboard.write(KEY_RETURN);

   // delay(1000);

   // Serial.println("Sending Play/Pause media key...");
  //  bleKeyboard.write(KEY_MEDIA_PLAY_PAUSE);

   // delay(1000);

   // Serial.println("Sending Ctrl+Alt+Delete...");
   // bleKeyboard.press(KEY_LEFT_CTRL);
   // bleKeyboard.press(KEY_LEFT_ALT);
   // bleKeyboard.press(KEY_DELETE);
   // delay(100);
    bleKeyboard.releaseAll();

  }
  Serial.println("Waiting 0,5 seconds...");
  delay(500);
}
