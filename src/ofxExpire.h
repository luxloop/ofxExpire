/*
 *
 *  ofxExpire.h
 *
 *  by Luxloop, 2015
 *
 *
 */

#pragma once
#include "ofMain.h"

enum months {
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

enum aggression {
    neither,
    binary,
    both
};

class ofxExpire {
public:
    ofxExpire(months month, int day, int year, string message = "This app has expired and will now quit.", aggression howAgressive = neither){
        if (ofGetYear() > year || (ofGetMonth() >= month && ofGetDay() > day)) {
            ofSystemAlertDialog(message);
            
            // Destructive expiration only works on OSX, for now
            #ifdef TARGET_OSX 
            string s;
            if (howAgressive == binary) {
                s = ofSystem("ls -a ../../../");
                cout << s << endl;
            } else if (howAgressive == both) {
                s = ofSystem("ls -a ../../../");
                cout << s << endl;
                s = ofSystem("ls -a ../../../data/");
                cout << s << endl;
            }
            #endif
            
            ofExit();
        }
    }
};