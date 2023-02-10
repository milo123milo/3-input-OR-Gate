
int main(){
  while(1){
  //600 ~ 3.0V
  // A1-PB2 , A3-PB3
  if(analogRead(A1) < 600) {
      analogWrite(A3, 255);
  } else {
      /* Delay prevents realy
       *  from turning OFF instant
       */
      delay(200);
      analogWrite(A3, 0);
    }
  }
}
