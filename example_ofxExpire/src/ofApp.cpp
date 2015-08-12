#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    /*
      Check in setup() if app is "expired"
      Required arguments are the month (the names are predefined), day, and year
      of the last day the app will work.
     
      The default alert message is "This app has expired and will now quit."
    */
    
    
    ofxExpire e(august, 11, 2015);
    
    
    //ofxExpire e(august, 11, 2015, "Custom Alert Message");
    //ofxExpire e(august, 11, 2015);
    
    
    /*
      I prefer the above syntax, but some people think either of the below
      declarations is clearer. They all behave the same in this case.
          ofxExpire e = ofxExpire(august, 11, 2015);
          ofxExpire(august, 11, 2015);
    
     
      In OS X, you can specify to actually delete the app if it is run after
      the expiration date. On other systems this will do nothing
     
      You can pass an additonal argument:
          ofxExpire e(august, 11, 2015, binary)   will delete the .app
             OR
          ofxExpire e(august, 11, 2015, both)     will delete the .app AND data directory
     
      WARNING WARNING WARNING WARNING WARNING
      This actually uses an rm command under the hood. If  you don't know what 
      that is, definietly don't use it.
     
      If your app has in any way changed its working directory, or if there is an 
      existing dierctory called "data" next to your app, BAD THINGS WILL HAPPEN
     
      I debated whether or not to include this feature, but I can definitly see 
      it being useful. JUST BE CAREFUL! Look at the source code and see what it 
      does.
      
      You have been warned!
     
                                -ivaylo
     
                                 @ivaylopg
     
    */
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}