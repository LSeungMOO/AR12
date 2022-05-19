//  lux
#define CDS_INPUT 0

void setup() {
Serial.begin(9600);
}
void loop() {
  int value = analogRead(CDS_INPUT);
  Serial.println(int(luminosity(value)));
  delay(1000);
}
double luminosity (int RawADCO){
  double Vout=RawADCO*5.0/1023;
  double lux=(2500/Vout-500)/10;
  return lux;
}
