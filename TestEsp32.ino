
//GLOBALS
int a =0;
TaskHandle_t Task1;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);



xTaskCreatePinnedToCore(
      Task1code, /* Function to implement the task */
      "Task1", /* Name of the task */
      10000,  /* Stack size in words */
      NULL,  /* Task input parameter */
      0,  /* Priority of the task */
      &Task1,  /* Task handle. */
      0); /* Core where the task should run */
}



void loop() {
  Serial.print("print count: ");
  Serial.println(a);
  a++;
  delay(500);




}


void Task1code( void * pvParameters ){
  //Serial.println(xPortGetCoreID());

  for(;;){
    Serial.print("Task1 running on core 0\n");
    delay(3000);
  } 
}
