int ir1,ir2;
unsigned int count1=0,count2=0,count=0;
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(A1,INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
ir1=digitalRead(A0);
ir2=digitalRead(A1);
if(ir1==HIGH)
{
while(digitalRead(A1==LOW));
delay(10);
count1++;
  }
  if(ir2==HIGH)
{
while(digitalRead(A0==LOW));
delay(10);
count2++;
  }
  count=count1-count2;
  Serial.print("No of people enter :");
  Serial.println(count1);
  Serial.print("No of people exit :");
  Serial.println(count2);
  Serial.print("No of people remaining :");
  Serial.println(count);
  
}

