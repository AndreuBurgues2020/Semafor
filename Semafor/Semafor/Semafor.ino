
/****************************************************************
**                           TÍTOL:                            **
**                           SEMAFOR                           **
**                                                             **
**  NOM:Andreu Burgués Chiva                  DATA: 17/01/2020 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
unsigned int Delay = 500; //Delay entre sequencies

//Semafor 1
int M1 = 2; // M1 = LED Vermell 1
int G1 = 3; // G1 = LED Groc 1
int V1 = 4; // V1 = LED Verd 1

//Semafor 2
int M2 = 5; // M2 = LED Vermell 2
int G2 = 6; // G2 = LED Groc 2
int V2 = 7; // V2 = LED Verd 2

//************************* SETUP *******************************
void setup() {              // configura el final de sortida     
  //Posar els LEDs com a sortides
  pinMode(M1, OUTPUT);
  pinMode(G1, OUTPUT);
  pinMode(V1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(G2, OUTPUT);
  pinMode(V2, OUTPUT);
}

//************************** LOOP *******************************
void loop() {                // inicia el bucle del programa     

  //Sequencia 1
  //Semafor A
  digitalWrite (M1, HIGH);
  digitalWrite (G1, LOW);
  digitalWrite (V1, LOW);
  //Semafor B
  digitalWrite (M2, HIGH);
  digitalWrite (G2, LOW);
  digitalWrite (V2, LOW);
  delay(Delay);
  
  //Sequencia 2,3,4,5
  //Semafor A
  digitalWrite (M1, HIGH);
  digitalWrite (G1, LOW);
  digitalWrite (V1, LOW);
  //Semafor B
  digitalWrite (M2, LOW);
  digitalWrite (G2, LOW);
  digitalWrite (V2, HIGH);
  delay(4*Delay);
  
  //Sequencia 6
  //Semafor A
  digitalWrite (M1, HIGH);
  digitalWrite (G1, LOW);
  digitalWrite (V1, LOW);
  //Semafor B
  digitalWrite (M2, LOW);
  digitalWrite (G2, HIGH);
  digitalWrite (V2, LOW);
  delay(Delay);
  
  //Sequencia 7
  //Semafor A
  digitalWrite (M1, HIGH);
  digitalWrite (G1, LOW);
  digitalWrite (V1, LOW);
  //Semafor B
  digitalWrite (M2, HIGH);
  digitalWrite (G2, LOW);
  digitalWrite (V2, LOW);
  delay(Delay);
  
  //Sequencia 8,9,10,11
  //Semafor A
  digitalWrite (M1, LOW);
  digitalWrite (G1, LOW);
  digitalWrite (V1, HIGH);
  //Semafor B
  digitalWrite (M2, HIGH);
  digitalWrite (G2, LOW);
  digitalWrite (V2, LOW);
  delay(4*Delay);

  //Sequencia 12
  //Semafor A
  digitalWrite (M1, LOW);
  digitalWrite (G1, HIGH);
  digitalWrite (V1, LOW);
  //Semafor B
  digitalWrite (M2, HIGH);
  digitalWrite (G2, LOW);
  digitalWrite (V2, LOW);
  delay(Delay);
  
  //Sequencia 13
  //Semafor A
  digitalWrite (M1, HIGH);
  digitalWrite (G1, LOW);
  digitalWrite (V1, LOW);
  //Semafor B
  digitalWrite (M2, HIGH);
  digitalWrite (G2, LOW);
  digitalWrite (V2, LOW);
  delay(Delay);
}

//************************* FUNCIONS ****************************
