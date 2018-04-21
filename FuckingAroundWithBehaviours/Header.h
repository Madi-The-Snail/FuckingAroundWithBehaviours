#pragma once
#include <string>
#include <iostream>

class SpeechBehaviour {
public:
   virtual std::string greet() = 0;
   virtual std::string farewell() = 0;
};

class AngryBehaviour : public SpeechBehaviour {
   std::string greet();
   std::string farewell();
};

class HappyBehaviour : public SpeechBehaviour {

   std::string greet();
   std::string farewell();
};
