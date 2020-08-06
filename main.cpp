void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
byte fast[6] = {0xA6, 0x00, 0x00, 0xF5, 0xFF, 0xFC};
byte buffer[14];
void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available() < 14){
  } for (byte i = 0 ; i < 14 ; i++)
    buffer[i] = Serial.readBytes(buffer, 14) ;
    Serial.flush();
    Serial.write(buffer, HEX);
}
