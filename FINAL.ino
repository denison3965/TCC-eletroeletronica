#include <SoftwareSerial.h>

SoftwareSerial HC(11,12);
int tomada1 = 5; 
int tomada2 = 4; 
int tomada3 = 3;
int tomada4 = 2;
int led1 = 6;
int led2 = 7;
int led3 = 9;
int led4 = 10;
 
unsigned long tempoinstante1=0;  // tempo quando chega o caracter da tomada 1
unsigned long  tempoinstante2=0; // tempo quando chegou o caracter da tomada 2


unsigned long tempodelay1= 0; // tempo de comparação do millis para ligar      //TOMADA1!!!!!!
unsigned long tempodelay2=0; //  tempo de comparação do millis para desligar
unsigned long tempodelay3=0;
unsigned long tempodelay4=0;
unsigned long tempodelay5=0;
unsigned long tempodelay6=0;

int statustomada1= LOW;  // define que a tomada inicia desligada
int statustomada2= LOW;

boolean stsca2sL=0;  // define se o caracter é valido para executar a proxima função
boolean stsca2sD=0;
boolean stsca5sL=0;
boolean stsca5sD=0;
boolean stsca10sL=0;
boolean stsca10sD=0;                                                  //TOMADA1!!!!!!!!


unsigned long Btempodelay1= 0; // tempo de comparação do millis para ligar      //TOMADA2!!!!!!
unsigned long Btempodelay2=0; //  tempo de comparação do millis para desligar
unsigned long Btempodelay3=0;
unsigned long Btempodelay4=0;
unsigned long Btempodelay5=0;
unsigned long Btempodelay6=0;

int Bstatustomada1= LOW;  // define que a tomada inicia desligada
int Bstatustomada2= LOW;

boolean Bstsca2sL=0;  // define se o caracter é valido para executar a proxima função
boolean Bstsca2sD=0;
boolean Bstsca5sL=0;
boolean Bstsca5sD=0;
boolean Bstsca10sL=0;
boolean Bstsca10sD=0;                                          //TOMADA2!!!!!!                                


unsigned long Ctempodelay1= 0; // tempo de comparação do millis para ligar      //TOMADA3!!!!!!
unsigned long Ctempodelay2=0; //  tempo de comparação do millis para desligar
unsigned long Ctempodelay3=0;
unsigned long Ctempodelay4=0;
unsigned long Ctempodelay5=0;
unsigned long Ctempodelay6=0;

int Cstatustomada1= LOW;  // define que a tomada inicia desligada
int Cstatustomada2= LOW;

boolean Cstsca2sL=0;  // define se o caracter é valido para executar a proxima função
boolean Cstsca2sD=0;
boolean Cstsca5sL=0;
boolean Cstsca5sD=0;
boolean Cstsca10sL=0;
boolean Cstsca10sD=0;                                          //TOMADA3!!!!!!                                




unsigned long Dtempodelay1= 0; // tempo de comparação do millis para ligar      //TOMADA4!!!!!!
unsigned long Dtempodelay2=0; //  tempo de comparação do millis para desligar
unsigned long Dtempodelay3=0;
unsigned long Dtempodelay4=0;
unsigned long Dtempodelay5=0;
unsigned long Dtempodelay6=0;

int Dstatustomada1= LOW;  // define que a tomada inicia desligada
int Dstatustomada2= LOW;

boolean Dstsca2sL=0;  // define se o caracter é valido para executar a proxima função
boolean Dstsca2sD=0;
boolean Dstsca5sL=0;
boolean Dstsca5sD=0;
boolean Dstsca10sL=0;
boolean Dstsca10sD=0;                                          //TOMADA4!!!!!!                                



int EstatoLed1=LOW;
int EstatoLed2=LOW;
int EstatoLed3=LOW;
int EstatoLed4=LOW;

unsigned long temposinaliza1=0;  //tomada 1 - ramal B
unsigned long temposinaliza2=0;  //tomada 1 - ramal B
unsigned long temposinaliza3=0;  //tomada 1 - ramal B               // Sinalização LED 

unsigned long temposinaliza4=0;  //tomada 1 - ramal b
unsigned long temposinaliza5=0;  //tomada 1 - ramal b
unsigned long temposinaliza6=0;  //tomada 1 - ramal b
unsigned long temposinaliza7=0;  //tomada 1 - ramal b
  
unsigned long temposinaliza8=0;  //tomada 1 - ramal C
unsigned long temposinaliza9=0;  //tomada 1 - ramal C
unsigned long temposinaliza10=0; //tomada 1 - ramal C

unsigned long temposinaliza11=0; //tomada 1 - ramal c
unsigned long temposinaliza12=0; //tomada 1 - ramal c
unsigned long temposinaliza13=0; //tomada 1 - ramal c
unsigned long temposinaliza14=0; //tomada 1 - ramal c

unsigned long temposinaliza15=0; //tomada 1 - ramal D
unsigned long temposinaliza16=0; //tomada 1 - ramal D
unsigned long temposinaliza17=0; //tomada 1 - ramal D

unsigned long temposinaliza18=0; //tomada 1 - ramal d
unsigned long temposinaliza19=0; //tomada 1 - ramal d
unsigned long temposinaliza20=0; //tomada 1 - ramal d
unsigned long temposinaliza21=0; //tomada 1 - ramal d


unsigned long temposinaliza22=0;  //tomada 2 - ramal G
unsigned long temposinaliza23=0;  //tomada 2 - ramal G
unsigned long temposinaliza24=0;  //tomada 2 - ramal G

unsigned long temposinaliza25=0;  //tomada 2 - ramal g
unsigned long temposinaliza26=0;  //tomada 2 - ramal g
unsigned long temposinaliza27=0;  //tomada 2 - ramal g
unsigned long temposinaliza28=0;  //tomada 2 - ramal g

unsigned long temposinaliza29=0;  //tomada 2 - ramal H
unsigned long temposinaliza30=0;  //tomada 2 - ramal H
unsigned long temposinaliza31=0;  //tomada 2 - ramal H

unsigned long temposinaliza32=0;  //tomada 2 - ramal h
unsigned long temposinaliza33=0;  //tomada 2 - ramal h
unsigned long temposinaliza34=0;  //tomada 2 - ramal h
unsigned long temposinaliza35=0;  //tomada 2 - ramal h

unsigned long temposinaliza36=0;  //tomada 2 - ramal I
unsigned long temposinaliza37=0;  //tomada 2 - ramal I
unsigned long temposinaliza38=0;  //tomada 2 - ramal I

unsigned long temposinaliza39=0;  //tomada 2 - ramal i
unsigned long temposinaliza40=0;  //tomada 2 - ramal i
unsigned long temposinaliza41=0;  //tomada 2 - ramal i
unsigned long temposinaliza42=0;  //tomada 2 - ramal i


unsigned long temposinaliza43=0;  //tomada 3 - ramal K
unsigned long temposinaliza44=0;  //tomada 3 - ramal K
unsigned long temposinaliza45=0;  //tomada 3 - ramal K

unsigned long temposinaliza46=0;  //tomada 3 - ramal k
unsigned long temposinaliza47=0;  //tomada 3 - ramal k
unsigned long temposinaliza48=0;  //tomada 3 - ramal k
unsigned long temposinaliza49=0;  //tomada 3 - ramal k

unsigned long temposinaliza50=0;  //tomada 3 - ramal L
unsigned long temposinaliza51=0;  //tomada 3 - ramal L
unsigned long temposinaliza52=0;  //tomada 3 - ramal L

unsigned long temposinaliza53=0;  //tomada 3 - ramal l
unsigned long temposinaliza54=0;  //tomada 3 - ramal l
unsigned long temposinaliza55=0;  //tomada 3 - ramal l
unsigned long temposinaliza56=0;  //tomada 3 - ramal l

unsigned long temposinaliza57=0;  //tomada 3 - ramal M
unsigned long temposinaliza58=0;  //tomada 3 - ramal M
unsigned long temposinaliza59=0;  //tomada 3 - ramal M

unsigned long temposinaliza60=0;  //tomada 3 - ramal m
unsigned long temposinaliza61=0;  //tomada 3 - ramal m
unsigned long temposinaliza62=0;  //tomada 3 - ramal m
unsigned long temposinaliza63=0;  //tomada 3 - ramal m


unsigned long temposinaliza64=0;  //tomada 4 - ramal O
unsigned long temposinaliza65=0;  //tomada 4 - ramal O
unsigned long temposinaliza66=0;  //tomada 4 - ramal O

unsigned long temposinaliza67=0;  //tomada 4 - ramal o
unsigned long temposinaliza68=0;  //tomada 4 - ramal o
unsigned long temposinaliza69=0;  //tomada 4 - ramal o
unsigned long temposinaliza70=0;  //tomada 4 - ramal o

unsigned long temposinaliza71=0;  //tomada 4 - ramal P
unsigned long temposinaliza72=0;  //tomada 4 - ramal P
unsigned long temposinaliza73=0;  //tomada 4 - ramal P

unsigned long temposinaliza74=0;  //tomada 4 - ramal p
unsigned long temposinaliza75=0;  //tomada 4 - ramal p
unsigned long temposinaliza76=0;  //tomada 4 - ramal p
unsigned long temposinaliza77=0;  //tomada 4 - ramal p

unsigned long temposinaliza78=0;  //tomada 4 - ramal Q
unsigned long temposinaliza79=0;  //tomada 4 - ramal Q
unsigned long temposinaliza80=0;  //tomada 4 - ramal Q

unsigned long temposinaliza81=0;  //tomada 4 - ramal q
unsigned long temposinaliza82=0;  //tomada 4 - ramal q
unsigned long temposinaliza83=0;  //tomada 4 - ramal q
unsigned long temposinaliza84=0;  //tomada 4 - ramal q

boolean bol=0;
boolean bol2=0;
boolean bol3=0;
boolean bol4=0;
boolean bol5=0;
boolean bol6=0;
boolean bol7=0;
boolean bol8=0;
unsigned long sinalizaprog=0;



char reset= 'z';



void setup()
{
   Serial.begin(9600);
  HC.begin(9600);
  pinMode (tomada1,OUTPUT);
  pinMode (tomada2,OUTPUT);
  pinMode (tomada3,OUTPUT);
  pinMode (tomada4,OUTPUT);

  pinMode (led1,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (led3,OUTPUT);
  pinMode (led4,OUTPUT);
 Serial.print(reset);
 
 digitalWrite(6, HIGH);
 delay ( 100);
digitalWrite(7, HIGH);
 delay ( 100);
 digitalWrite(9, HIGH);
 delay ( 100);
 digitalWrite(10, HIGH);
 delay ( 100);
 digitalWrite(10,LOW);
 delay(100);
 digitalWrite(9,LOW);
 delay(100);
 digitalWrite(7,LOW);
 delay(100);
 digitalWrite(6,LOW);
 delay(100);
 digitalWrite(6, HIGH);
 delay ( 100);
digitalWrite(7, HIGH);
 delay ( 100);
 digitalWrite(9, HIGH);
 delay ( 100);
 digitalWrite(10, HIGH);
 delay ( 100);
 digitalWrite(10,LOW);
 delay(100);
 digitalWrite(9,LOW);
 delay(100);
 digitalWrite(7,LOW);
 delay(100);
 digitalWrite(6,LOW);
 delay(100);
  
  

  }

void loop() {

     char caracter;
     unsigned long tempodomillis = millis();
     if(HC.available()) 
   
      { caracter = HC.read();
       Serial.print( caracter );} 



if (caracter=='S') //
{bol=1;
bol2=0;}
if(caracter=='s')
{bol=0;
bol2=1;
if(( statustomada1==LOW)&&(bol==0)&&(bol2==1))
{EstatoLed1
=LOW;}}
if((bol==1)&&(bol2==0))
{ sinalizaprog = 500;}
 if((tempodomillis - tempoinstante2 > sinalizaprog)&&(bol==1)&&(bol2==0))
 { tempoinstante2 =tempodomillis;  
    if (EstatoLed1 == LOW)
     EstatoLed1 = HIGH; 
    else
      EstatoLed1 = LOW;} //



 if(caracter=='A')
{ statustomada1= HIGH;
  EstatoLed1 = HIGH;
  bol=0;
bol2=1;} // Liga direto tomada1

if(caracter=='a')
{ statustomada1= LOW;
EstatoLed1= LOW;
bol=0;
bol2=1;} // Desliga direto tomada1

  
  if(( caracter =='B')&&(stsca2sL==0))
  { bol=0;
    bol2=1; 
    stsca2sL= 1;
   tempodelay1= 2000;
   tempoinstante1 = tempodomillis;
  
   tempoinstante2 = tempodomillis;
   temposinaliza1=200 ;
   temposinaliza2=400;
   temposinaliza3=600;
   EstatoLed1 = HIGH;}
if(( statustomada1==LOW) &&(stsca2sL==1))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza1)&&(EstatoLed1 == HIGH))
   { EstatoLed1= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza2)&&(EstatoLed1 == LOW))
   { EstatoLed1= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza3)&&(EstatoLed1 == HIGH))
   { EstatoLed1= LOW; }
    }
  
    if( (tempodomillis-tempoinstante1> tempodelay1)&&(stsca2sL==1))
  
    {statustomada1 = HIGH;
     EstatoLed1 = HIGH;
    stsca2sL=0;}                                                  // liga em 2
  



   
  
   
   

  if(( caracter =='b')&&(stsca2sD==0))
  {  
    bol=0;
    bol2=1;
    stsca2sD = 1;
   tempodelay2= 2000;
     tempoinstante1= tempodomillis;
      tempoinstante2 = tempodomillis;
   temposinaliza4=200 ;
   temposinaliza5=400;
   temposinaliza6=600;
   temposinaliza7=700;
   EstatoLed1 = HIGH;}
if(( statustomada1==HIGH) &&(stsca2sD==1 ))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza4)&&(EstatoLed1 == HIGH))
   { EstatoLed1= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza5)&&(EstatoLed1 == LOW))
   { EstatoLed1= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza6)&&(EstatoLed1 == HIGH))
   { EstatoLed1= LOW; }
    if(( tempodomillis-tempoinstante2>temposinaliza7)&&(EstatoLed1 == LOW))
   { EstatoLed1= HIGH; }
   }
 if( (tempodomillis-tempoinstante1> tempodelay2)&&(stsca2sD==1))
   
    {
      statustomada1 = LOW;
     EstatoLed1= LOW;
     stsca2sD=0;}                               // desliga em 2 seg





   if(( caracter =='C')&&(stsca5sL==0))
  { bol=0;
    bol2=1;
    stsca5sL = 1;
   tempodelay3= 5000;
   tempoinstante1 = tempodomillis;
  
   tempoinstante2 = tempodomillis;
   temposinaliza8=200 ;
   temposinaliza9=400;
   temposinaliza10=600;
   EstatoLed1 = HIGH;}

  
 if((statustomada1==LOW) &&(stsca5sL==1))  {
   if(( tempodomillis-tempoinstante2>temposinaliza8)&&(EstatoLed1 == HIGH))
   { EstatoLed1= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza9)&&(EstatoLed1 == LOW))
   { EstatoLed1= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza10)&&(EstatoLed1 == HIGH))
   { EstatoLed1= LOW; }
           }
   
    if( (tempodomillis-tempoinstante1> tempodelay3)&&(stsca5sL==1))
  
    {statustomada1 = HIGH;
     EstatoLed1 = HIGH;
    stsca5sL=0;}                                         // liga em 5 seg



  if(( caracter =='c')&&(stsca5sD==0))
  {  bol=0;
     bol2=1;
    stsca5sD = 1;
   tempodelay4= 5000;
     tempoinstante1= tempodomillis;
     
     tempoinstante2 = tempodomillis;
   temposinaliza11=200 ;
   temposinaliza12=400;
   temposinaliza13=600;
   temposinaliza14=700;
   EstatoLed1 = HIGH;}
if(( statustomada1==HIGH ) &&(stsca5sD==1))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza11)&&(EstatoLed1 == HIGH))
   { EstatoLed1= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza12)&&(EstatoLed1 == LOW))
   { EstatoLed1= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza13)&&(EstatoLed1 == HIGH))
   { EstatoLed1= LOW; }
    if(( tempodomillis-tempoinstante2>temposinaliza14)&&(EstatoLed1 == LOW))
   { EstatoLed1= HIGH; }}
 

  if( (tempodomillis-tempoinstante1> tempodelay4)&&(stsca5sD==1))
   
    {
      statustomada1 = LOW;
      EstatoLed1= LOW;
     stsca5sD=0;}                               // desliga em 5 seg




if(( caracter =='D')&&(stsca10sL==0))
  {  bol=0;
     bol2=1;
    stsca10sL = 1;
   tempodelay5= 10000;
   tempoinstante1= tempodomillis;
   tempoinstante2 = tempodomillis;
   temposinaliza15=200 ;
   temposinaliza16=400;
   temposinaliza17=600;
   EstatoLed1 = HIGH;}

  
 if(( statustomada1==LOW) &&(stsca10sL==1))  {
   if(( tempodomillis-tempoinstante2>temposinaliza15)&&(EstatoLed1 == HIGH))
   { EstatoLed1= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza16)&&(EstatoLed1 == LOW))
   { EstatoLed1= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza17)&&(EstatoLed1 == HIGH))
   { EstatoLed1= LOW; }
           }
   
    if( (tempodomillis-tempoinstante1> tempodelay5)&&(stsca10sL==1))
  
    {statustomada1 = HIGH;
     EstatoLed1 = HIGH;
    stsca10sL=0;}                                 

  if( (tempodomillis-tempoinstante1> tempodelay5)&&(stsca10sL==1))
  
    {statustomada1 = HIGH;
    EstatoLed1 = HIGH;
    stsca10sL=0;}                                          // liga em 10 seg

       if(( caracter =='d')&&(stsca10sD==0))
  {  bol=0;
     bol2=1;
    stsca10sD = 1;
   tempodelay6= 10000;
   tempoinstante1= tempodomillis; 
   tempoinstante2 = tempodomillis;
   temposinaliza18=200 ;
   temposinaliza19=400;
   temposinaliza20=600;
   temposinaliza21=700;
   EstatoLed1 = HIGH;}

  
 if((  statustomada1==HIGH) &&(stsca10sD==1))  {
   if(( tempodomillis-tempoinstante2>temposinaliza18)&&(EstatoLed1 == HIGH))
   { EstatoLed1= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza19)&&(EstatoLed1 == LOW))
   { EstatoLed1= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza20)&&(EstatoLed1 == HIGH))
   { EstatoLed1= LOW; }
    if(( tempodomillis-tempoinstante2>temposinaliza21)&&(EstatoLed1 == LOW))
   { EstatoLed1= HIGH;}
           }
   
    if( (tempodomillis-tempoinstante1> tempodelay6)&&(stsca10sD==1))
  
    {statustomada1 =LOW;
     EstatoLed1 = LOW;
    stsca10sD=0;}                                



  if( (tempodomillis-tempoinstante1> tempodelay6)&&(stsca10sD==1))
   
    {
      statustomada1 = LOW;
     EstatoLed1= LOW;
     stsca10sD=0;}                               // desliga em 10 seg


    


   


     

   digitalWrite(tomada1, statustomada1);
   digitalWrite(led1,EstatoLed1 );
                                                          //TOMADA1
   
   
    
                                                          //TOMADA2


  if (caracter=='T') //
{bol3=1;
bol4=0;}
if(caracter=='t')
{
bol3=0;          
bol4=1;
if(( Bstatustomada1==LOW)&&(bol3==0)&&(bol4==1))
{EstatoLed2
=LOW;}}
if((bol3==1)&&(bol4==0))
{ sinalizaprog = 500;}
 if((tempodomillis - tempoinstante2 > sinalizaprog)&&(bol3==1)&&(bol4==0))
 { tempoinstante2 =tempodomillis;  
    if (EstatoLed2 == LOW)
     EstatoLed2 = HIGH; 
    else
      EstatoLed2 = LOW;} //


   
if(caracter=='F')               
{ bol4=1;
bol3=0;
  Bstatustomada1= HIGH;
 EstatoLed2 = HIGH;
} // Liga direto tomada1

if(caracter=='f')
{ bol4=1;
bol3=0;
  Bstatustomada1= LOW;
 EstatoLed2 = LOW;} // Deslga direto tomada1

   if(( caracter =='G')&&(Bstsca2sL==0))
  { bol3=0;
bol4=1; 
    Bstsca2sL = 1;
   Btempodelay1= 2000;
     tempoinstante1= tempodomillis; 

           //mod01 - inicio
           
            tempoinstante2 = tempodomillis;

             temposinaliza22=200;
             temposinaliza23=400;
             temposinaliza24=600;
            
             EstatoLed2 = HIGH;}

             if(( Bstatustomada1==LOW) &&(Bstsca2sL==1))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza22)&&(EstatoLed2 == HIGH))
   { EstatoLed2= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza23)&&(EstatoLed2 == LOW))
   { EstatoLed2= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza24)&&(EstatoLed2 == HIGH))
   { EstatoLed2= LOW; }
    }
             
           //mod01 - fim
           

  if( (tempodomillis-tempoinstante1> Btempodelay1)&&(Bstsca2sL==1))
  
    {Bstatustomada1 = HIGH;
     EstatoLed2= HIGH;
    Bstsca2sL=0;}  // liga em 2 seg
   
   
   
   
if(( caracter =='g')&&(Bstsca2sD==0))
  { bol3=0;
bol4=1; 
    Bstsca2sD = 1;
   Btempodelay2= 2000;
     tempoinstante1= tempodomillis;

          //mod02 - inicio
          
           tempoinstante2 = tempodomillis;
           
           temposinaliza25=200;
           temposinaliza26=400;
           temposinaliza27=600;
           temposinaliza28=700;
           
           EstatoLed2 = HIGH;}
           
if(( Bstatustomada1==HIGH) &&(Bstsca2sD==1 ))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza25)&&(EstatoLed2 == HIGH))
   { EstatoLed2= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza26)&&(EstatoLed2 == LOW))
   { EstatoLed2= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza27)&&(EstatoLed2 == HIGH))
   { EstatoLed2= LOW; }
   
    if(( tempodomillis-tempoinstante2>temposinaliza28)&&(EstatoLed2 == LOW))
   { EstatoLed2= HIGH; }
   }
 if( (tempodomillis-tempoinstante1> Btempodelay2)&&(Bstsca2sD==1))
   
    {
      Bstatustomada1 = LOW;
     EstatoLed2= LOW;
     Bstsca2sD=0;}   
              
          //mod02 - fim

                               // desliga em 2 seg
   if(( caracter =='H')&&(Bstsca5sL==0))
  { bol3=0;
bol4=1; 
    Bstsca5sL = 1;
   Btempodelay3= 5000;
   tempoinstante1 = tempodomillis; 


        //mod03 - inicio

         tempoinstante2 = tempodomillis;

             temposinaliza29=200;
             temposinaliza30=400;
             temposinaliza31=600;
            
             EstatoLed2 = HIGH;}

             if(( Bstatustomada1==LOW) &&(Bstsca5sL==1)) {
   if(( tempodomillis-tempoinstante2>temposinaliza29)&&(EstatoLed2 == HIGH))
   { EstatoLed2= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza30)&&(EstatoLed2 == LOW))
   { EstatoLed2= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza31)&&(EstatoLed2 == HIGH))
   { EstatoLed2= LOW; }
    }
        
        
        //mod03 - fim

  if( (tempodomillis-tempoinstante1> Btempodelay3)&&(Bstsca5sL==1))
  
    {Bstatustomada1 = HIGH;
     EstatoLed2 = HIGH;
    Bstsca5sL=0;}              //Liga em 5

    
     if(( caracter =='h')&&(Bstsca5sD==0))
  {  bol3=0;
bol4=1; 
    Bstsca5sD = 1;
   Btempodelay4= 5000;
     tempoinstante1= tempodomillis;

       //mod04 - inicio

                tempoinstante2 = tempodomillis;
           
           temposinaliza32=200;
           temposinaliza33=400;
           temposinaliza34=600;
           temposinaliza35=700;
           
           EstatoLed2 = HIGH;}
           
if(( Bstatustomada1==HIGH) &&(Bstsca5sD==1 ))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza32)&&(EstatoLed2 == HIGH))
   { EstatoLed2= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza33)&&(EstatoLed2 == LOW))
   { EstatoLed2= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza34)&&(EstatoLed2 == HIGH))
   { EstatoLed2= LOW; }
   
    if(( tempodomillis-tempoinstante2>temposinaliza35)&&(EstatoLed2 == LOW))
   { EstatoLed2= HIGH; }
   }
 if( (tempodomillis-tempoinstante1> Btempodelay4)&&(Bstsca5sD==1))
   
    {
      Bstatustomada1 = LOW;
     EstatoLed2= LOW;
     Bstsca5sD=0;}   

          //mod04 - fim
     

             // desliga em 10 seg



if(( caracter =='I')&&(Bstsca10sL==0))
  {  bol3=0;
bol4=1; 
    Bstsca10sL = 1;
   Btempodelay5= 10000;
     tempoinstante1= tempodomillis;

     //mod05 - inicio
       tempoinstante2 = tempodomillis;

             temposinaliza36=200;
             temposinaliza37=400;
             temposinaliza38=600;
            
             EstatoLed2 = HIGH;}

             if(( Bstatustomada1==LOW) &&(Bstsca10sL==1)) {
   if(( tempodomillis-tempoinstante2>temposinaliza36)&&(EstatoLed2 == HIGH))
   { EstatoLed2= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza37)&&(EstatoLed2 == LOW))
   { EstatoLed2= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza38)&&(EstatoLed2 == HIGH))
   { EstatoLed2= LOW; }
    }
    
     //mod05 - fim
      
      

  if( (tempodomillis-tempoinstante1> Btempodelay5)&&(Bstsca10sL==1))
  
    {Bstatustomada1 = HIGH;
     EstatoLed2 = HIGH;
    Bstsca10sL=0;}  // liga em 10 seg

       if(( caracter =='i')&&(Bstsca10sD==0))
  { bol3=0;
    bol4=1; 
    Bstsca10sD = 1;
   Btempodelay6= 10000;
    tempoinstante1= tempodomillis;

    //mod06 - inicio
           tempoinstante2 = tempodomillis;
           
           temposinaliza39=200;
           temposinaliza40=400;
           temposinaliza41=600;
           temposinaliza42=700;
           
           EstatoLed2 = HIGH;}
           
if(( Bstatustomada1==HIGH) &&(Bstsca10sD==1 ))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza39)&&(EstatoLed2 == HIGH))
   { EstatoLed2= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza40)&&(EstatoLed2 == LOW))
   { EstatoLed2= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza41)&&(EstatoLed2 == HIGH))
   { EstatoLed2= LOW; }
   
    if(( tempodomillis-tempoinstante2>temposinaliza42)&&(EstatoLed2 == LOW))
   { EstatoLed2= HIGH; }
   }
 //mod06 - fim

  if( (tempodomillis-tempoinstante1> Btempodelay6)&&(Bstsca10sD==1))
   
    {
      Bstatustomada1 = LOW;
       EstatoLed2 = LOW;
    Bstsca10sD=0;}                               // desliga em 10 seg




   digitalWrite(tomada2, Bstatustomada1);
   digitalWrite(led2,  EstatoLed2);




                                                            //TOMADA3
   
if (caracter=='U') //
{bol5=1;
bol6=0;}
if(caracter=='u')
{
bol5=0;          
bol6=1;
if(( Cstatustomada1==LOW)&&(bol5==0)&&(bol6==1))
{EstatoLed3
=LOW;}}
if((bol5==1)&&(bol6==0))
{ sinalizaprog = 500;}
 if((tempodomillis - tempoinstante2 > sinalizaprog)&&(bol5==1)&&(bol6==0))
 { tempoinstante2 =tempodomillis;  
    if (EstatoLed3 == LOW)
     EstatoLed3 = HIGH; 
    else
      EstatoLed3 = LOW;} //



if(caracter=='J')               
{ bol5=0;          
bol6=1;
  Cstatustomada1= HIGH;
EstatoLed3 = HIGH;
} // Liga direto tomada1

if(caracter=='j')
{ bol5=0;          
bol6=1;
Cstatustomada1= LOW;
EstatoLed3 = LOW;
} // Deslga direto tomada1

  
  if(( caracter =='K')&&(Cstsca2sL==0))
  { bol5=0;          
bol6=1;
    Cstsca2sL = 1;
   Ctempodelay1= 2000;
     tempoinstante1= tempodomillis;

      //mod07 - inicio
      
      tempoinstante2 = tempodomillis;
      
   temposinaliza43=200;
   temposinaliza44=400;
   temposinaliza45=600;
   
   EstatoLed3 = HIGH;}
   
if(( Cstatustomada1==LOW) &&(Cstsca2sL==1))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza43)&&(EstatoLed3 == HIGH))
   { EstatoLed3= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza44)&&(EstatoLed3 == LOW))
   { EstatoLed3= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza45)&&(EstatoLed3 == HIGH))
   { EstatoLed3= LOW; }
    }
      
      //mod07 - fim

  if( (tempodomillis-tempoinstante1> Ctempodelay1)&&(Cstsca2sL==1))
  
    {Cstatustomada1 = HIGH;
    EstatoLed3 = HIGH;
    Cstsca2sL=0;}  // liga em 2 seg
   
   
   
   
if(( caracter =='k')&&(Cstsca2sD==0))
  { bol5=0;          
bol6=1; 
    Cstsca2sD = 1;
   Ctempodelay2= 2000;
     tempoinstante1= tempodomillis;

     //mod08 - inicio

      tempoinstante2 = tempodomillis;
      
   temposinaliza46=200;
   temposinaliza47=400;
   temposinaliza48=600;
   temposinaliza49=700;
   
   EstatoLed3 = HIGH;}
   
if(( Cstatustomada1==HIGH) &&(Cstsca2sD==1 ))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza46)&&(EstatoLed3 == HIGH))
   { EstatoLed3= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza47)&&(EstatoLed3 == LOW))
   { EstatoLed3= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza48)&&(EstatoLed3 == HIGH))
   { EstatoLed3= LOW; }

   
    if(( tempodomillis-tempoinstante2>temposinaliza49)&&(EstatoLed3 == LOW))
   { EstatoLed3= HIGH; }
   }
     
     //mod08 - fim

  if( (tempodomillis-tempoinstante1> Ctempodelay2)&&(Cstsca2sD==1))
   
    {
      Cstatustomada1 = LOW;
     EstatoLed3 = LOW;
     Cstsca2sD=0;}                               // desliga em 2 seg





   if(( caracter =='L')&&(Cstsca5sL==0))
  { bol5=0;          
bol6=1; 
    Cstsca5sL = 1;
   Ctempodelay3= 5000;
   tempoinstante1 = tempodomillis;

   //mod09- inicio
    tempoinstante2 = tempodomillis;
      
   temposinaliza50=200;
   temposinaliza51=400;
   temposinaliza52=600;
   
   EstatoLed3 = HIGH;}
   
if(( Cstatustomada1==LOW) &&(Cstsca5sL==1))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza50)&&(EstatoLed3 == HIGH))
   { EstatoLed3= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza51)&&(EstatoLed3 == LOW))
   { EstatoLed3= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza52)&&(EstatoLed3 == HIGH))
   { EstatoLed3= LOW; }
    } 

    //mod09 - fim

  if( (tempodomillis-tempoinstante1> Ctempodelay3)&&(Cstsca5sL==1))
  
    {Cstatustomada1 = HIGH;
    EstatoLed3 = HIGH;
    Cstsca5sL=0;}  // liga em 5 seg


     if(( caracter =='l')&&(Cstsca5sD==0))
  { bol5=0;          
bol6=1; 
    Cstsca5sD = 1;
   Ctempodelay4= 5000;
     tempoinstante1= tempodomillis;
     //Mod10 - inicio
           tempoinstante2 = tempodomillis;
      
   temposinaliza53=200;
   temposinaliza54=400;
   temposinaliza55=600;
   temposinaliza56=700;
   
   EstatoLed3 = HIGH;}
   
if(( Cstatustomada1==HIGH) &&(Cstsca5sD==1 ))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza53)&&(EstatoLed3 == HIGH))
   { EstatoLed3= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza54)&&(EstatoLed3 == LOW))
   { EstatoLed3= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza55)&&(EstatoLed3 == HIGH))
   { EstatoLed3= LOW; }

   
    if(( tempodomillis-tempoinstante2>temposinaliza56)&&(EstatoLed3 == LOW))
   { EstatoLed3= HIGH; }
   }
     //mod10 - fim

  if( (tempodomillis-tempoinstante1> Ctempodelay4)&&(Cstsca5sD==1))
   
    {
      Cstatustomada1 = LOW;
      EstatoLed3 = LOW;
     Cstsca5sD=0;}                               // desliga em 10 seg



if(( caracter =='M')&&(Cstsca10sL==0))
  { bol5=0;          
bol6=1; 
    Cstsca10sL = 1;
   Ctempodelay5= 10000;
     tempoinstante1= tempodomillis;

     //mod11 - inicio

       tempoinstante2 = tempodomillis;
      
   temposinaliza57=200;
   temposinaliza58=400;
   temposinaliza59=600;
   
   EstatoLed3 = HIGH;}
   
if(( Cstatustomada1==LOW) &&(Cstsca10sL==1))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza57)&&(EstatoLed3 == HIGH))
   { EstatoLed3= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza58)&&(EstatoLed3 == LOW))
   { EstatoLed3= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza59)&&(EstatoLed3 == HIGH))
   { EstatoLed3= LOW; }
    } 
     
     //mod11 - fim

  if( (tempodomillis-tempoinstante1> Ctempodelay5)&&(Cstsca10sL==1))
  
    {Cstatustomada1 = HIGH;
    EstatoLed3 = HIGH;
    Cstsca10sL=0;}  // liga em 10 seg

       if(( caracter =='m')&&(Cstsca10sD==0))
  { bol5=0;          
bol6=1;
    Cstsca10sD = 1;
   Ctempodelay6= 10000;
    tempoinstante1= tempodomillis;

    //mod12 - inicio
    tempoinstante2 = tempodomillis;
      
   temposinaliza60=200;
   temposinaliza61=400;
   temposinaliza62=600;
   temposinaliza63=700;
   
   EstatoLed3 = HIGH;}
   
if(( Cstatustomada1==HIGH) &&(Cstsca10sD==1 ))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza60)&&(EstatoLed3 == HIGH))
   { EstatoLed3= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza61)&&(EstatoLed3 == LOW))
   { EstatoLed3= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza62)&&(EstatoLed3 == HIGH))
   { EstatoLed3= LOW; }

   
    if(( tempodomillis-tempoinstante2>temposinaliza63)&&(EstatoLed3 == LOW))
   { EstatoLed3= HIGH; }
   }
    
    //mod12 - fim 

  if( (tempodomillis-tempoinstante1> Ctempodelay6)&&(Cstsca10sD==1))
   
    {
      Cstatustomada1 = LOW;
      EstatoLed3 = LOW;
    Cstsca10sD=0;}                               // desliga em 10 seg


    
     

   digitalWrite(tomada3, Cstatustomada1);
   digitalWrite(led3,EstatoLed3 );


                                                               //TOMADA4
   

 if (caracter=='V') //
{bol7=1;
bol8=0;}
if(caracter=='v')
{
bol7=0;          
bol8=1;
if(( Dstatustomada1==LOW)&&(bol7==0)&&(bol8==1))
{EstatoLed4
=LOW;}}
if((bol7==0)&&(bol8==0))
{ sinalizaprog = 500;}
 if((tempodomillis - tempoinstante2 > sinalizaprog)&&(bol7==1)&&(bol8==0))
 { tempoinstante2 =tempodomillis;  
    if (EstatoLed4 == LOW)
     EstatoLed4 = HIGH; 
    else
      EstatoLed4 = LOW;} //




if(caracter=='N')               
{ bol7=0;          
bol8=1;
Dstatustomada1= HIGH;
EstatoLed4=HIGH;
} // Liga direto tomada1

if(caracter=='n')
{ bol7=0;          
bol8=1;
Dstatustomada1= LOW;
EstatoLed4=LOW;
} // Deslga direto tomada1

  
  if(( caracter =='O')&&(Dstsca2sL==0))
  {  bol7=0;          
bol8=1;
    Dstsca2sL = 1;
   Dtempodelay1= 2000;
     tempoinstante1= tempodomillis;
     
          //mod13 - inicio

       tempoinstante2 = tempodomillis;
      
   temposinaliza64=200;
   temposinaliza65=400;
   temposinaliza66=600;
   
   EstatoLed4 = HIGH;}
   
if(( Dstatustomada1==LOW) &&(Dstsca2sL==1))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza64)&&(EstatoLed4 == HIGH))
   { EstatoLed4= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza65)&&(EstatoLed4 == LOW))
   { EstatoLed4= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza66)&&(EstatoLed4 == HIGH))
   { EstatoLed4= LOW; }
    } 
     
     //mod13 - fim

  if( (tempodomillis-tempoinstante1> Dtempodelay1)&&(Dstsca2sL==1))
  
    {Dstatustomada1 = HIGH;
    EstatoLed4=HIGH;
    Dstsca2sL=0;}  // liga em 2 seg
   
   
   
   
if(( caracter =='o')&&(Dstsca2sD==0))
  { bol7=0;          
bol8=1;
    Dstsca2sD = 1;
   Dtempodelay2= 2000;
     tempoinstante1= tempodomillis;

     
         //mod14 - inicio
    tempoinstante2 = tempodomillis;
      
   temposinaliza67=200;
   temposinaliza68=400;
   temposinaliza69=600;
   temposinaliza70=700;
   
   EstatoLed4 = HIGH;}
   
if(( Dstatustomada1==HIGH) &&(Dstsca2sD==1 ))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza67)&&(EstatoLed4 == HIGH))
   { EstatoLed4= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza68)&&(EstatoLed4 == LOW))
   { EstatoLed4= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza69)&&(EstatoLed4 == HIGH))
   { EstatoLed4= LOW; }

   
    if(( tempodomillis-tempoinstante2>temposinaliza70)&&(EstatoLed4 == LOW))
   { EstatoLed4= HIGH; }
   }
    
    //mod14 - fim 

  if( (tempodomillis-tempoinstante1> Dtempodelay2)&&(Dstsca2sD==1))
   
    {
      Dstatustomada1 = LOW;
      EstatoLed4=LOW;
     Dstsca2sD=0;}                               // desliga em 2 seg





   if(( caracter =='P')&&(Dstsca5sL==0))
  {  bol7=0;          
bol8=1;
    Dstsca5sL = 1;
   Dtempodelay3= 5000;
   tempoinstante1 = tempodomillis;
              //mod15 - inicio

       tempoinstante2 = tempodomillis;
      
   temposinaliza71=200;
   temposinaliza72=400;
   temposinaliza73=600;
   
   EstatoLed4 = HIGH;}
   
if(( Dstatustomada1==LOW) &&(Dstsca5sL==1))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza71)&&(EstatoLed4 == HIGH))
   { EstatoLed4= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza72)&&(EstatoLed4 == LOW))
   { EstatoLed4= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza73)&&(EstatoLed4 == HIGH))
   { EstatoLed4= LOW; }
    } 
     
     //mod15 - fim


  if( (tempodomillis-tempoinstante1> Dtempodelay3)&&(Dstsca5sL==1))
  
    {Dstatustomada1 = HIGH;
    EstatoLed4=HIGH;
    Dstsca5sL=0;}  // liga em 5 seg


     if(( caracter =='p')&&(Dstsca5sD==0))
  {  bol7=0;          
     bol8=1;
    Dstsca5sD = 1;
   Dtempodelay4= 5000;
     tempoinstante1= tempodomillis;
     
              //mod14 - inicio
    tempoinstante2 = tempodomillis;
      
   temposinaliza74=200;
   temposinaliza75=400;
   temposinaliza76=600;
   temposinaliza77=700;
   
   EstatoLed4 = HIGH;}
   
if(( Dstatustomada1==HIGH) &&(Dstsca5sD==1 ))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza74)&&(EstatoLed4 == HIGH))
   { EstatoLed4= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza75)&&(EstatoLed4 == LOW))
   { EstatoLed4= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza76)&&(EstatoLed4 == HIGH))
   { EstatoLed4= LOW; }

   
    if(( tempodomillis-tempoinstante2>temposinaliza77)&&(EstatoLed4 == LOW))
   { EstatoLed4= HIGH; }
   }
    
    //mod14 - fim 
     

  if( (tempodomillis-tempoinstante1> Dtempodelay4)&&(Dstsca5sD==1))
   
    {
      Dstatustomada1 = LOW;
      EstatoLed4=LOW;
     Dstsca5sD=0;}                               // desliga em 5 seg

if(( caracter =='Q')&&(Dstsca10sL==0))
  {  bol7=0;          
bol8=1;
    Dstsca10sL = 1;
   Dtempodelay5= 10000;
     tempoinstante1= tempodomillis;

                   //mod15 - inicio

       tempoinstante2 = tempodomillis;
      
   temposinaliza78=200;
   temposinaliza79=400;
   temposinaliza80=600;
   
   EstatoLed4 = HIGH;}
   
if(( Dstatustomada1==LOW) &&(Dstsca10sL==1))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza78)&&(EstatoLed4 == HIGH))
   { EstatoLed4= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza79)&&(EstatoLed4 == LOW))
   { EstatoLed4= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza80)&&(EstatoLed4 == HIGH))
   { EstatoLed4= LOW; }
    } 
     
     //mod15 - fim


  if( (tempodomillis-tempoinstante1> Dtempodelay5)&&(Dstsca10sL==1))
  
    {Dstatustomada1 = HIGH;
    EstatoLed4=HIGH;
    Dstsca10sL=0;}  // liga em 10 seg

       if(( caracter =='q')&&(Dstsca10sD==0))
  { bol7=0;          
    bol8=1;
    Dstsca10sD = 1;
   Dtempodelay6= 10000;
    tempoinstante1= tempodomillis;
    
                  //mod16 - inicio
    tempoinstante2 = tempodomillis;
      
   temposinaliza81=200;
   temposinaliza82=400;
   temposinaliza83=600;
   temposinaliza84=700;
   
   EstatoLed4 = HIGH;}
   
if(( Dstatustomada1==HIGH) &&(Dstsca10sD==1 ))
   {
   if(( tempodomillis-tempoinstante2>temposinaliza81)&&(EstatoLed4 == HIGH))
   { EstatoLed4= LOW;}

    if(( tempodomillis-tempoinstante2>temposinaliza82)&&(EstatoLed4 == LOW))
   { EstatoLed4= HIGH;}

    if(( tempodomillis-tempoinstante2>temposinaliza83)&&(EstatoLed4 == HIGH))
   { EstatoLed4= LOW; }

   
    if(( tempodomillis-tempoinstante2>temposinaliza84)&&(EstatoLed4 == LOW))
   { EstatoLed4= HIGH; }
   }
    
    //mod14 - fim 

  if( (tempodomillis-tempoinstante1> Dtempodelay6)&&(Dstsca10sD==1))
   
    {
      Dstatustomada1 = LOW;
      EstatoLed4=LOW;
    Dstsca10sD=0;}                               // desliga em 10 seg

    
     

   digitalWrite(tomada4, Dstatustomada1);
   digitalWrite(led4,EstatoLed4 ); 
   }
   
   
   
   
   
   
   

     
     
     

   
     
  
 





