//C++ Code
//Author: Piyush Mishra

String ssid     = "Simulator Wifi";  // SSID to connect to
String password = ""; // virtual wifi has no password
String host     = "https://api.thingspeak.com";
const int httpPort   = 80;
//Write API Key
String uri     = "/update?api_key=FB20ATV9X5ODJS8S&field1=";


int setupESP8266(void) {
  // Start our ESP8266 Serial Communication
  Serial.begin(115200);   // Serial connection over USB to computer
  Serial.println("AT");   // Serial connection on Tx / Rx port to ESP8266
  delay(10);        // Wait a little for the ESP to respond
  if (!Serial.find("OK")) return 1;
    
  // Connect to 123D Circuits Simulator Wifi
  Serial.println("AT+CWJAP=\"" + ssid + "\",\"" + password + "\"");
  delay(10);        // Wait a little for the ESP to respond
  if (!Serial.find("OK")) return 2;
  
  // Open TCP connection to the host:
  Serial.println("AT+CIPSTART=\"TCP\",\"" + host + "\"," + httpPort);
  delay(50);        // Wait a little for the ESP to respond
  if (!Serial.find("OK")) return 3;
  return 0;
}

 void Temperatura_upload_ESP8266(void) {
  int temp = map(analogRead(A0),0,1023,0,100);
  Serial.println(temp);
  // Construct our HTTP call
  String httpPacket = "GET " + uri + String(temp) + " HTTP/1.1\r\nHost: " + host + "\r\n\r\n";
  int length = httpPacket.length();
  // Send our message length
  Serial.print("AT+CIPSEND=");
  Serial.println(length);
  delay(10); // Wait a little for the ESP to respond
  // Send our http request
  Serial.print(httpPacket);
  delay(10); // Wait a little for the ESP to respond
  if (!Serial.find("SEND OK\r\n")) return;
}


void setup() {
  setupESP8266();
}

void loop() {
  Temperatura_upload_ESP8266();
  delay(1000);
}