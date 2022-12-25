void setup()
  {
    Serial.begin(2000000); //baud
  }

void loop()
  {
    Serial.print("DEC");
    Serial.print("\t\t"); //udela dva tabulatory

    Serial.print("HEX");
    Serial.print("\t");

    Serial.print("OCT");
    Serial.print("\t");

    Serial.print("BIN");
    Serial.println();

    for (int x = 0; x >=0; x++)
      {
        Serial.print(x, DEC);
        Serial.print("\t\t");

        Serial.print(x, HEX);
        Serial.print("\t");

        Serial.print(x, OCT);
        Serial.print("\t");

        Serial.println(x, BIN);
      }
    Serial.println();
  }