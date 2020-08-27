#include <stdio.h>
#include <string.h>
#include "c_parser.h"

int main(void)
{

  char src[450] = "";
  strcat(src, "HTTP/1.0 200 OK\r\n");
  strcat(src, "Server: Icecast 2.4.2\r\n");
  strcat(src, "Date: Wed, 26 Aug 2020 08:25:20 GMT\r\n");
  strcat(src, "Content-Type: audio/mpeg\r\n");
  strcat(src, "Cache-Control: no-cache\r\n");
  strcat(src, "Expires: Mon, 26 Jul 1997 05:00:00 GMT\r\n");
  strcat(src, "Pragma: no-cache\r\n");
  strcat(src, "Access-Control-Allow-Origin: *\r\n");
  strcat(src, "icy-br:128\r\n");
  strcat(src, "ice-audio-info: ice-samplerate=44100;ice-bitrate=128;ice-channels=2\r\n");
  strcat(src, "icy-br:128\r\n");
  strcat(src, "icy-genre:Pop\r\n");
  strcat(src, "icy-name:MARUSYA\r\n");// parse this line
  strcat(src, "icy-private:1\r\n");
  strcat(src, "icy-pub:0\r\n");
  strcat(src, "icy-metaint:16000\r\n");
  strcat(src, "\r\n");
  strcat(src, "hgsdgsdgsdgsdg");

  char ret[512] = ""; //buffer
  Parse("icy-name:", "\r\n", src, ret); // "icy-name:MARUSYA\r\n" -> MARUSYA
  printf("%s", ret, "\r\n");
  return 0;
}
