  // put your setup code here, to run once:
  //Declaring the notation for each segment
  const int a =7;
  const int b =8;
  const int c =9;
  const int d =10;
  const int e =11;
  const int f =12;
  const int g =13;
void LightLed(int n){//using a switch case for declaring the activiation of each number from 0 to 0 using a single digit seven segment display(common Anode).
  switch(n)
  {
    case 0:
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW); 
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    break;  

     case 1:
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW); 
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
    break; 

     case 2:
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW); 
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
    break;            

     case 3:
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,HIGH); 
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
    break; 

     case 4:
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH); 
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    break; 

     case 5:
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,HIGH); 
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    break; 

     case 6:
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW); 
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    break; 

     case 7:
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH); 
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    break; 

     case 8:
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH); 
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    break; 

    case 9:
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH); 
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    break; 
  }
}

void setup() {
//USING PINmODE DECLARING A CONDITION DISPLAYING SUITABLE output
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
  }


void loop() {//setting loop condition for the incrementation of number
  // put your main code here, to run repeatedly:
for (int i=0;i<10;i++){//using for loop for assigning the segment display condition
  LightLed(i);
  delay(1000);//wait for one second
}
}
