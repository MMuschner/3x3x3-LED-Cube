
#include "Config.h"

void setup() {
	pinMode(P1, OUTPUT);
	pinMode(P2, OUTPUT);
	pinMode(P3, OUTPUT);
	pinMode(P4, OUTPUT);
	pinMode(P5, OUTPUT);
	pinMode(P6, OUTPUT);
	pinMode(P7, OUTPUT);
	pinMode(P8, OUTPUT);
	pinMode(P9, OUTPUT);

	pinMode(E1, OUTPUT);
	pinMode(E2, OUTPUT);
	pinMode(E3, OUTPUT);

	Serial.begin(9600);
	while (! Serial); // Wait untilSerial is ready
	Serial.println("Serial consle started");

    L[1] = {1, LOW, HIGH, HIGH};
  L[2] = {2, LOW, HIGH, HIGH};
  L[3] = {3, LOW, HIGH, HIGH};
  L[4] = {4, LOW, HIGH, HIGH};
  L[5] = {5, LOW, HIGH, HIGH};
  L[6] = {6, LOW, HIGH, HIGH};
  L[7] = {7, LOW, HIGH, HIGH};
  L[8] = {8, LOW, HIGH, HIGH};
  L[9] = {9, LOW, HIGH, HIGH};
  L[10] = {1, HIGH, LOW, HIGH};
  L[11] = {2, HIGH, LOW, HIGH};
  L[12] = {3, HIGH, LOW, HIGH};
  L[13] = {4, HIGH, LOW, HIGH};
  L[14] = {5, HIGH, LOW, HIGH};
  L[15] = {6, HIGH, LOW, HIGH};
  L[16] = {7, HIGH, LOW, HIGH};
  L[17] = {8, HIGH, LOW, HIGH};
  L[18] = {9, HIGH, LOW, HIGH};
  L[19] = {1, HIGH, HIGH, LOW};
  L[20] = {2, HIGH, HIGH, LOW};
  L[21] = {3, HIGH, HIGH, LOW};
  L[22] = {4, HIGH, HIGH, LOW};
  L[23] = {5, HIGH, HIGH, LOW};
  L[24] = {6, HIGH, HIGH, LOW};
  L[25] = {7, HIGH, HIGH, LOW};
  L[26] = {8, HIGH, HIGH, LOW};
  L[27] = {9, HIGH, HIGH, LOW};

  // Reneaming array elements
  Led L1 = L[1];
  Led L2 = L[2];
  Led L3 = L[3];
  Led L4 = L[4];
  Led L5 = L[5];
  Led L6 = L[6];
  Led L7 = L[7];
  Led L8 = L[8];
  Led L9 = L[9];
  Led L10 = L[10];
  Led L11 = L[11];
  Led L12 = L[12];
  Led L13 = L[13];
  Led L14 = L[14];
  Led L15 = L[15];
  Led L16 = L[16];
  Led L17 = L[17];
  Led L18 = L[18];
  Led L19 = L[19];
  Led L20 = L[20];
  Led L21 = L[21];
  Led L22 = L[22];
  Led L23 = L[23];
  Led L24 = L[24];
  Led L25 = L[25];
  Led L26 = L[26];
  Led L27 = L[27];
}

// Function to shutdown all Led's 

void LedOFF() {
	digitalWrite(P1, LOW);
	digitalWrite(P2, LOW);
	digitalWrite(P3, LOW);
	digitalWrite(P4, LOW);
	digitalWrite(P5, LOW);
	digitalWrite(P6, LOW);
	digitalWrite(P7, LOW);
	digitalWrite(P8, LOW);
	digitalWrite(P9, LOW);
	digitalWrite(E1, LOW);
	digitalWrite(E2, LOW);
	digitalWrite(E3, LOW);
}

void LedALL() {
  digitalWrite(P1, HIGH);
  digitalWrite(P2, HIGH);
  digitalWrite(P3, HIGH);
  digitalWrite(P4, HIGH);
  digitalWrite(P5, HIGH);
  digitalWrite(P6, HIGH);
  digitalWrite(P7, HIGH);
  digitalWrite(P8, HIGH);
  digitalWrite(P9, HIGH);
  digitalWrite(E1, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(E3, LOW);
}

// Function prototype executeLedArrays: eLA(PATTERN, NUMBER OF ELEMENTS, TTL LED, TTL PATTERN) 
void eLA(Led Pattern[], int elements, int LedTTL, int PatternTTL);

void loop() {

	// Patterns

  int randomColumn = random(1,10);
  int randomRow = random(1, 4);

	Led All[] = {L1,L2, L3, L4, L5, L6, L7, L8, L9, L10, L11, L12, L13, L14, L15, L16, L17, L18, L19, L20, L21, L22, L23, L24, L25, L26, L27};
	Led Row1[] = {L1,L2, L3, L4, L5, L6, L7, L8, L9,}; 
	Led Row2[] = {L10, L11, L12, L13, L14, L15, L16, L17, L18}; 
	Led Row3[] = {L19, L20, L21, L22, L23, L24, L25, L26, L27}; 
	Led DFLC[] = {L1, L2, L4, L5, L10, L11, L14, L13};
	Led DFRC[] = {L2, L3, L5, L6, L11, L12, L14, L15};
	Led DBLC[] = {L4, L5, L7, L8, L14, L13, L17, L16};
	Led DBRC[] = {L5, L6, L8, L9, L18, L17, L15, L14};

	Led UFLC[] = {L19, L20, L22, L23, L10, L11, L14, L13};
	Led UFRC[] = {L20, L21, L23, L24, L11, L12, L14, L15};
	Led UBLC[] = {L22, L23, L25, L26, L14, L13, L17, L16};
	Led UBRC[] = {L23, L24, L26, L27, L18, L17, L15, L14};

  Led DIAG1[] = {L1, L14, L27};  

  //eLA(DIAG1, 8, 50, 50);

/*
	eLA(DFLC, 8, 10, 10);
	eLA(DFRC, 8, 10, 10);
	eLA(DBLC, 8, 10, 10);
	eLA(DBRC, 8, 10, 10);
	eLA(UFLC, 8, 10, 10);
	eLA(UFRC, 8, 10, 10);
	eLA(UBLC, 8, 10, 10);
	eLA(UBRC, 8, 10, 10);
*/

for (int d = 69; d > 0; d--) {
  glow();
}

for (int b = 420; b > 0; b--) {
  eRA();
}


//eRA();

//glow();
}


void glow() {
  int t = 0;
  int i = 1999;
  for (t; t <= 1999; t++) {
   LedALL();
   delayMicroseconds(t * 2);
   LedOFF();
   delayMicroseconds(t * 2);
   delay(12);
   t = t + 10;
  }
  for (i; i >= 0; i--) {
   LedALL();
   delayMicroseconds(i * 2);
   LedOFF();
   delayMicroseconds(i * 2);
   delay(12);
   i = i - 10;
  }

}
  

void eRA () {
  int Col = random(1,10);
  int Row = random(1, 4);
  int t = 20;
  int addCol = Col -1;
  int addRow = Row + 2;
  while(t > 0) {
  // while(true) {
  switch (Col) {
        case 1:
          LedOFF();
          digitalWrite(P1, HIGH);
          break;
        case 2:
          LedOFF();
          digitalWrite(P2, HIGH);
          break;
        case 3:
          LedOFF();
          digitalWrite(P3, HIGH);
          break;
        case 4:
          LedOFF();
          digitalWrite(P4, HIGH);
          break;
        case 5:
          LedOFF();
          digitalWrite(P5, HIGH);
          break;
        case 6:
          LedOFF();
          digitalWrite(P6, HIGH);
          break;
        case 7:
          LedOFF();
          digitalWrite(P7, HIGH);
          break;
        case 8:
          LedOFF();
          digitalWrite(P8, HIGH);
          break;
        case 9:
          LedOFF();
          digitalWrite(P9, HIGH);
          break;
      }

      switch (Row) {
        case 1:
          digitalWrite(E1, LOW); digitalWrite(E2, HIGH); digitalWrite(E3, HIGH);
          break;
          //delay(2);
        case 2:
          digitalWrite(E1, HIGH); digitalWrite(E2, LOW); digitalWrite(E3, HIGH);
          //delay(2);
          break;
        case 3:
          digitalWrite(E1, HIGH); digitalWrite(E2, HIGH); digitalWrite(E3, LOW);
          //delay(2);
       break;
      }
      Serial.println(Col);
      Serial.println(Row);
      t = t -1;

      
  }
  
}

void eLA(Led Pattern[], int elements, int LedTTL, int PatternTTL) {

	// While loop functions as a timer
	while(PatternTTL > 0) {
		Serial.println("Original PatternTTL");
		Serial.println(PatternTTL);
		for (int i = 0; i < elements; i++) {
			switch (Pattern[i].C) {
				case 1:
					LedOFF();
					digitalWrite(P1, HIGH);
					break;
				case 2:
					LedOFF();
					digitalWrite(P2, HIGH);
					break;
				case 3:
					LedOFF();
					digitalWrite(P3, HIGH);
					break;
				case 4:
					LedOFF();
					digitalWrite(P4, HIGH);
					break;
				case 5:
					LedOFF();
					digitalWrite(P5, HIGH);
					break;
				case 6:
					LedOFF();
					digitalWrite(P6, HIGH);
					break;
				case 7:
					LedOFF();
					digitalWrite(P7, HIGH);
					break;
				case 8:
					LedOFF();
					digitalWrite(P8, HIGH);
					break;
				case 9:
					LedOFF();
					digitalWrite(P9, HIGH);
					break;
			}

			switch (Pattern[i].R1) {
				case HIGH:
					digitalWrite(E1, HIGH); digitalWrite(E2, HIGH); digitalWrite(E3, HIGH);
					break;
				case LOW:
					digitalWrite(E1, LOW); digitalWrite(E2, HIGH); digitalWrite(E3, HIGH);
					 delay(LedTTL);
					break;
			}

			switch (Pattern[i].R2) {
				case HIGH:
					digitalWrite(E1, HIGH); digitalWrite(E2, HIGH); digitalWrite(E3, HIGH);
					break;
				case LOW:
					digitalWrite(E1, HIGH); digitalWrite(E2, LOW); digitalWrite(E3, HIGH);
					 delay(LedTTL);
					break;
			}
			switch (Pattern[i].R3) {
				case HIGH:
					digitalWrite(E1, HIGH); digitalWrite(E2, HIGH); digitalWrite(E3, HIGH);
					break;
				case LOW:
					digitalWrite(E1, HIGH); digitalWrite(E2, HIGH); digitalWrite(E3, LOW);
					delay(LedTTL);
					break;
			}  }
		// Subtract the time to live (frequency) from the TTL of the Pattern
		PatternTTL -=LedTTL;
		// Subtract one ms because the execution takes time aswell (this is a really bad workaround i know)
		PatternTTL--;
		Serial.println(PatternTTL);
	}
}
