#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(0);
  ofSetFrameRate(2);
  
  panelONE = gui.addPanel("VARS");
  panelONE->setPosition(ofPoint(20,20));
  panelONE->add(n.set("n", 6, 0, 100));
  panelONE->add(d.set("d", 71, 0, 100));
  
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  ofPushMatrix();
  ofTranslate(ofGetWidth() * .5, ofGetHeight() * .5);
  ofNoFill();
  ofSetColor(255);
  
  n++;
  n = n % 100;
  
  ofBeginShape();
  
  for(unsigned int i = 0; i < 360; i++){
    float k = i * d;
    float r = 400 * sin(ofDegToRad(n*k));
    float x = r * cos(ofDegToRad(k));
    float y = r * sin(ofDegToRad(k));
    ofVertex(x, y);
  }
  
  ofEndShape(true);
  ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  std::cout << "Letter pressed: " << key << "\n";
  
  //  if(key == 'f' || key == 'F') FULLSCREEN = !FULLSCREEN;
  //  if(key == 's' || key == 'S') vidGrabber.videoSettings();
  
  //  midi->keyPressed(key);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
  
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
  
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
  
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
  
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
  
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
  
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
  
}
