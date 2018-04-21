#include "Header.h"

int main() {

   SpeechBehaviour* man = new AngryBehaviour();

   return 0;
}

std::string AngryBehaviour::greet() {

   std::string speech = "Fuck off!";
   return speech;
};

std::string AngryBehaviour::farewell() {

   std::string speech = "I'm gone!";
   return speech;
};

std::string HappyBehaviour::greet() {

   std::string speech = "Howdy!";
   return speech;
};

std::string HappyBehaviour::farewell() {

   std::string speech = "Goodbye!";
   return speech;
};

//Testing Shit