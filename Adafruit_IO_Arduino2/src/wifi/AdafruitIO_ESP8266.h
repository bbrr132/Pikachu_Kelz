/*!
 * @file AdafruitIO_ESP8266.h
 *
 * Adafruit invests time and resources providing this open source code.
 * Please support Adafruit and open source hardware by purchasing
 * products from Adafruit!
 *
 * Copyright (c) 2015-2016 Adafruit Industries
 * Authors: Tony DiCola, Todd Treece
 * Licensed under the MIT license.
 *
 * All text above must be included in any redistribution.
 */

#ifndef ADAFRUITIO_ESP8266_H
#define ADAFRUITIO_ESP8266_H

#ifdef ESP8266

#include "AdafruitIO.h"
#include "Adafruit_MQTT.h"
#include "Adafruit_MQTT_Client.h"
#include "Arduino.h"
#include "ESP8266WiFi.h"
#include "WiFiClientSecure.h"

class AdafruitIO_ESP8266 : public AdafruitIO {

public:
  AdafruitIO_ESP8266(const char *user, const char *key);
  ~AdafruitIO_ESP8266();

  aio_status_t networkStatus();
  const char *connectionType();

protected:
  void _connect();
  void _disconnect();

  /*
  const char *_ssid;
  const char *_pass;
  */
  WiFiClientSecure *_client;
};

#endif // ESP8266
#endif // ADAFRUITIO_ESP8266_H
