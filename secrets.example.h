// Copier ce fichier en "secrets.h" et remplir avec vos propres valeurs AWS IoT.
// secrets.h est ignoré par git : ne jamais le committer.
#include <pgmspace.h>

#define SECRET
#define THINGNAME "spooky"
const char* ssid = "text";
const char* passphrase = "text";

int8_t TIME_ZONE = -5; //NYC(USA): -5 UTC

const char MQTT_HOST[] = "xxxxxxxxxxxxxx-ats.iot.us-east-1.amazonaws.com";


// Amazon Root CA 1
static const char cacert[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
...
-----END CERTIFICATE-----
)EOF";


// Copy contents from XXXXXXXX-certificate.pem.crt here ▼
static const char client_cert[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----
...
-----END CERTIFICATE-----
)KEY";


// Copy contents from  XXXXXXXX-private.pem.key here ▼
static const char privkey[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----
...
-----END RSA PRIVATE KEY-----
)KEY";
