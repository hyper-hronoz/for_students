#pragma once 

#include "string"
#include "fstream"

using namespace std;

class Log {
 public:
  static std::string filename;

  static void writeLog(std::string info) {
		ofstream stream(Log::filename);

		stream << info << "\n";

		stream.close();
  };
};

