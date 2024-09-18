//Este codigo es para prender y apagar un foco led con un boton 
//Se simula la interaccion de un boton y un led

int btn = 14; // Aqui se declaran las variables con el pin al 
int led = 4;  //que estan conctados 

void setup() {
  //Configura el pin 14 (btn) como entrada para 
  //leer el estado del boton, si esta presioando o no
  pinMode(btn, INPUT); 
  //Configura el pin 4 (led) como salida
  // para que se pueda prender y apagar el foco
  pinMode(led, OUTPUT);
}

// Esta funcion se ejecuta continuamente 
void loop() {
  //Este lee el estado del boton, si esta presionado devuelve un 1, 
  // si no lo esta, devuelve un 0
  int edoBtn = digitalRead(btn);

  //Escribe el valor leido del boton en el pin del led.
  //Si el boton esta presionado, el led prende 
  digitalWrite(led, edoBtn);

  // Retardo de 500 milisegundos antes de repetir el ciclo. 
  //para evitar que el led cambie de estado demasiado rapido.
  delay(500);
}
