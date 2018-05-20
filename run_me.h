#ifndef RUN_ME_H_
#define RUN_ME_H_

#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <unistd.h>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::flush;
using std::ostringstream;
using std::string;

namespace theonlygamethatmatters {

static int lineLength = 40;
static double timeMultiplier = 1000000;

class X {
 public:
  static void sleep (double s) {
    usleep(s * timeMultiplier);
  }
  static string userin () {
    string str;
    cout << ">> ";
    cin >> str;
    return str;
  }
  static void userout (string str, bool isWords = false) {
    cout << ">> ";
    if (str.length() <= lineLength) {
      for (int i = 0; i < str.length(); i++) {
        cout << str.substr(i, 1);
        cout << flush;
        sleep(0.05);
      }
      cout << endl;
      return;
    } else {
      if (!isWords) {
        cout << str.substr(0, lineLength) << endl;
        while (str.length() > lineLength) {
          str = str.substr(lineLength);
          cout << "   " << str.substr(0, lineLength) << endl;
        }
      } else {
        string nextWord = str.substr(0, str.find(" "));
        while (true) {
          ostringstream oss;
          do {
            str = str.substr(str.find(" ") + 1);
            oss << " " << nextWord;
            if (str.find(" ") != string::npos) {
              nextWord = str.substr(0, str.find(" "));
            } else {
              nextWord = str;
              if (oss.str().length() + nextWord.length() < lineLength) {
                cout << "   " << oss.str() << " " << nextWord << endl;
                return;
              } else {
                cout << "  " << oss.str() << endl;
                cout << "  " << nextWord << endl;
                return;
              }
            }
          } while (oss.str().length() + nextWord.length() < lineLength);
          cout << "   ";
          string ostr = oss.str();
          cout << "ostr = " << ostr << endl;
          for (int i = 0; i < ostr.length(); i++) {
            cout << ostr.substr(i, 1);
            cout << flush;
            sleep(0.05);
          }
          cout << endl;
        }
      }
    }
  }
  
  static void aiout (string str, bool isWords = false) {
    if (str.length() <= lineLength) {
      cout << str << endl;
      return;
    } else {
      if (!isWords) {
        cout << str.substr(0, lineLength) << endl;
        while (str.length() > lineLength) {
          str = str.substr(lineLength);
          cout << str.substr(0, lineLength) << endl;
        }
      } else {
        string nextWord = str.substr(0, str.find(" "));
        while (true) {
          ostringstream oss;
          do {
            str = str.substr(str.find(" ") + 1);
            if (oss.str() != "")
              oss << " ";
            oss << nextWord;
            if (str.find(" ") != string::npos) {
              nextWord = str.substr(0, str.find(" "));
            } else {
              nextWord = str;
              if (oss.str().length() + nextWord.length() < lineLength) {
                cout << oss.str() << " " << nextWord << endl;
                return;
              } else {
                cout << oss.str() << endl;
                cout << nextWord << endl;
                return;
              }
            }
          } while (oss.str().length() + nextWord.length() < lineLength);
          cout << oss.str() << endl;
          cout << flush;
          sleep(0.2);
        }
      }
    }  
  }
};

}

#endif //RUN_ME_H_