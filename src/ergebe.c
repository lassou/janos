int redPin = 1;
int greenPin = 0;
int bluePin = 4;
int buttonPin = 2;

int t = 0;
int g = 0; //Green
int b = 0; //Blue
int r = 0; //Red
int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;
void setup() {
	//Serial.begin(9600);
	pinMode(buttonPin, INPUT);
}

void loop() {
	buttonState = digitalRead(buttonPin);
	if (buttonState != lastButtonState) {
		if (buttonState == HIGH) {
			buttonPushCounter == 0;
			buttonPushCounter++;
		}
	}
	lastButtonState = buttonState;
//   Serial.println(buttonPushCounter);
   
	switch(buttonPushCounter){

		case 0:
			while(buttonPushCounter == 0){
				for(t = 0; t < 255; t++){//green 0,255,0
					if(g == 255){break;}
					g++;
					setColor(r, g, b); delay(100);
					buttonState = digitalRead(buttonPin);
					if (buttonState != lastButtonState) {
						if (buttonState == HIGH) {
							buttonPushCounter++;
						}
					}
					lastButtonState = buttonState;
					if( buttonPushCounter != 0){goto label; }
				}

				for(t = 0; t < 255; t++){//blue 0,0,255
					g--; b++;
					setColor(r, g, b); delay(100);
					buttonState = digitalRead(buttonPin);
					if (buttonState != lastButtonState) {
						if (buttonState == HIGH) {
							buttonPushCounter++;
						}
					}
					lastButtonState = buttonState;
					if( buttonPushCounter != 0){goto label; }
				}

				for(t = 0; t < 255; t++){//red  255,0,0
					r++; b--;
					setColor(r, g, b); delay(100);
					buttonState = digitalRead(buttonPin);
					if (buttonState != lastButtonState) {
						if (buttonState == HIGH) {
						buttonPushCounter++;
						}
					}
					lastButtonState = buttonState;
					if( buttonPushCounter != 0){goto label; }
				}
 
				for(t = 0; t < 255; t++){//yellow 255,255,0
					g++; 
					setColor(r, g, b); delay(100);
					buttonState = digitalRead(buttonPin);
					if (buttonState != lastButtonState) {
						if (buttonState == HIGH) {
							buttonPushCounter++;
						}
					}
					lastButtonState = buttonState;
					if( buttonPushCounter != 0){goto label; }
				}

				for(t = 0; t < 255; t++){//purple  102,0,155
					if(r == 102){r = 102;}else{r--;}
					if(b == 155){b = 155;}else{b++;}
					g--; 
					setColor(r, g, b); delay(100);
					buttonState = digitalRead(buttonPin);
					if (buttonState != lastButtonState) {
						if (buttonState == HIGH) {
							buttonPushCounter++;
						}
					}
					lastButtonState = buttonState;
					if( buttonPushCounter != 0){goto label; }  
				}

				for(t = 0; t < 255; t++){//pink  234,139,171
					if(r == 234){r = 234;}else{r++;}
					if(g == 0){g = 0;}
				    if(b == 30){b = 30;}else{b--;}
					setColor(r, g, b); delay(100);
				  
					buttonState = digitalRead(buttonPin);
					if (buttonState != lastButtonState) {
						if (buttonState == HIGH) {
							buttonPushCounter++;
						}
					}
					lastButtonState = buttonState;
					if( buttonPushCounter != 0){goto label; }}
  
					for(t = 0; t < 255; t++){//whote  255,255,255
						if(r == 254){r = 254;}else{r++;}
						if(g == 254){g = 254;}else{g++;}
						if(b == 254){b = 254;}else{b++;}
						setColor(r, g, b); delay(100);
						buttonState = digitalRead(buttonPin);
						if (buttonState != lastButtonState) {
							if (buttonState == HIGH) {
								buttonPushCounter++;
							}
						}
						lastButtonState = buttonState;
						if( buttonPushCounter != 0){goto label; }
					}
  
					for(t = 0; t < 255; t++){// 0,255,0
						if(r == 0){r = 0;}else{r--;}
						if(g == 254){g = 254;}
						if(b == 0){b = 0;}else{b--;}
						setColor(r, g, b); delay(100);

						buttonState = digitalRead(buttonPin);
						if (buttonState != lastButtonState) {
							if (buttonState == HIGH) {
							buttonPushCounter++;
							}
						}
						lastButtonState = buttonState;
						if( buttonPushCounter != 0){goto label; }
					}

			}
label:
	case 1:
		while(buttonPushCounter == 1){
			setColor(0, 255, 0);
			//      Serial.println("case1");
			buttonState = digitalRead(buttonPin);
			if (buttonState != lastButtonState) {
				if (buttonState == HIGH) {
					buttonPushCounter++;
				}
			}
			lastButtonState = buttonState;
		}
     
	case 2:  
		while(buttonPushCounter == 2){
			setColor(0, 0, 255);
			//  Serial.println("case2");
			buttonState = digitalRead(buttonPin);
			if (buttonState != lastButtonState) {
				if (buttonState == HIGH) {
					buttonPushCounter++;
				}
			}
			lastButtonState = buttonState;
		}    
         
	case 3:
		while(buttonPushCounter == 3){
			setColor(255, 0, 0);
			//     Serial.println("case3");
			buttonState = digitalRead(buttonPin);
			if (buttonState != lastButtonState) {
				if (buttonState == HIGH) {
					buttonPushCounter++;
				}
			}
			lastButtonState = buttonState;
		}




	case 4:
		while(buttonPushCounter == 4){
			setColor(255, 255, 0);
			//      Serial.println("case4");
			buttonState = digitalRead(buttonPin);
			if (buttonState != lastButtonState) {
				if (buttonState == HIGH) {
					buttonPushCounter++;
				}
			}
			lastButtonState = buttonState;
		}

	case 5:           
		while(buttonPushCounter == 5){
			setColor(80, 0, 80);
			//Serial.println("case5");
			buttonState = digitalRead(buttonPin);
			if (buttonState != lastButtonState) {
				if (buttonState == HIGH) {
					buttonPushCounter++;
				}
			}
			lastButtonState = buttonState;
		}
		
	case 6:
		while(buttonPushCounter == 6){
			setColor(234,139,171);
			//      Serial.println("case6");
			buttonState = digitalRead(buttonPin);
			if (buttonState != lastButtonState) {
				if (buttonState == HIGH) {
					buttonPushCounter++;
				}
			}
			lastButtonState = buttonState;
		}
		
	case 7:
		while(buttonPushCounter == 7){
		setColor(255, 255, 255); 
		//      Serial.println("case7");
		buttonState = digitalRead(buttonPin);
		if (buttonState != lastButtonState) {
			if (buttonState == HIGH) {
				buttonPushCounter++;
			}
		}
			lastButtonState = buttonState;
		}
		
	case 8:
		while(buttonPushCounter == 8){
			setColor(0, 0, 0); 
			//      Serial.println("case7");
			buttonState = digitalRead(buttonPin);
			if (buttonState != lastButtonState) {
				if (buttonState == HIGH) {
					buttonPushCounter++;
				}
			}
			lastButtonState = buttonState;
		}
	}
	buttonPushCounter = 0;
}

void setColor(int red, int green, int blue)
{
	#ifdef COMMON_ANODE
	red = 255 - red;
	green = 255 - green;
	blue = 255 - blue;
	#endif
	analogWrite(redPin, red);
	analogWrite(greenPin, green);
	analogWrite(bluePin, blue);
}





  



