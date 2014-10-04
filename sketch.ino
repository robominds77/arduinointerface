int led=13;
int Pin2=2;
int Pin3=3;
int Pin11=11;
int Pin4=4;
int Pin5=5;
int Pin6=6;
int Pin7=7;
int Pin8=8;
int Pin9=9;
int Pin10=10;
int Pin12=12;
void setup() {
pinMode(Pin2,OUTPUT);
pinMode(Pin3,OUTPUT);
pinMode(Pin4,OUTPUT);
pinMode(Pin5,OUTPUT);
pinMode(Pin6,OUTPUT);
pinMode(Pin7,OUTPUT);
pinMode(Pin8,OUTPUT);
pinMode(Pin9,OUTPUT);
pinMode(Pin10,OUTPUT);
pinMode(Pin11,OUTPUT);
pinMode(Pin12,OUTPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}
void loop () 
{
  if(Serial.available()) {    
    while (Serial.available()>0){
      char a = Serial.read();	
if(a=='a')
{ 
digitalWrite(Pin2, HIGH);
 Serial.println("Pin 2 is Turned ON");
}
if(a=='b')
{
digitalWrite(Pin2,LOW);
Serial.println("Pin 2 is Turned OFF");
}
if(a=='c')
{ 
digitalWrite(Pin3, HIGH);
 Serial.println("Pin 3 is Turned ON");
}
if(a=='d')
{
digitalWrite(Pin3,LOW);
Serial.println("Pin 3 is Turned OFF");
}
if(a=='e')
{ 
digitalWrite(Pin4, HIGH);
 Serial.println("Pin 4 is Turned ON");
}
if(a=='f')
{
digitalWrite(Pin4,LOW);
Serial.println("Pin 4 is Turned OFF");
}
if(a=='g')
{ 
digitalWrite(Pin5, HIGH);
 Serial.println("Pin 5 is Turned ON");
}
if(a=='h')
{
digitalWrite(Pin5,LOW);
Serial.println("Pin 5 is Turned OFF");
}
if(a=='i')
{ 
digitalWrite(Pin6, HIGH);
 Serial.println("Pin 6 is Turned ON");
}
if(a=='j')
{
digitalWrite(Pin6,LOW);
Serial.println("Pin 6 is Turned OFF");
}
if(a=='k')
{ 
digitalWrite(Pin7, HIGH);
 Serial.println("Pin 7 is Turned ON");
}
if(a=='l')
{
digitalWrite(Pin7,LOW);
Serial.println("Pin 7 is Turned OFF");
}
if(a=='m')
{ 
digitalWrite(Pin8, HIGH);
 Serial.println("Pin 8 is Turned ON");
}
if(a=='n')
{
digitalWrite(Pin8,LOW);
Serial.println("Pin 8 is Turned OFF");
}
if(a=='o')
{ 
digitalWrite(Pin9, HIGH);
 Serial.println("Pin 9 is Turned ON");
}
if(a=='p')
{
digitalWrite(Pin9,LOW);
Serial.println("Pin 9 is Turned OFF");
}
if(a=='q')
{ 
digitalWrite(Pin10, HIGH);
 Serial.println("Pin 10 is Turned ON");
}
if(a=='r')
{
digitalWrite(Pin10,LOW);
Serial.println("Pin 10 is Turned OFF");
}
if(a=='s')
{ 
digitalWrite(Pin11, HIGH);
 Serial.println("Pin 11 is Turned ON");
}
if(a=='t')
{
digitalWrite(Pin11,LOW);
Serial.println("Pin 11 is Turned OFF");
}
if(a=='u')
{ 
digitalWrite(Pin12, HIGH);
 Serial.println("Pin 12 is Turned ON");
}
if(a=='v')
{
digitalWrite(Pin12,LOW);
Serial.println("Pin 12 is Turned OFF");
}
if(a=='w')
{ 
digitalWrite(led, HIGH);
 Serial.println("LED is Turned ON");
}
if(a=='x')
{
digitalWrite(led,LOW);
Serial.println("LED is Turned OFF");
}
  }
    
  }
}
