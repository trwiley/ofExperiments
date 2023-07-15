#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    speedx.resize(AMOUNT);
    speedy.resize(AMOUNT);
    ofSetBackgroundColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
    for (int i = 0; i < AMOUNT; i++){
        speedx[i] = ofRandom(0.001, 0.9);
        speedy[i] = ofRandom(0.001, 0.9);
        colorRandomizer[i] = ofRandom(0.001, 0.9);
        for (int j = 0; j < 3; j++){
            colors[i][j] = ofRandom(0, 255);
        }
    }

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float time = ofGetElapsedTimef();
    
    for(int i = 0; i < AMOUNT; i++){
        float x = ofGetWidth() * ofNoise(time * speedx[i]);
        float y = ofGetHeight() * ofNoise(time * speedy[i]);
        float random = ofNoise(time * colorRandomizer[i]);
        ofSetColor(colors[i][0] + random, colors[i][1] * random, colors[i][2] * random);
        ofDrawCircle(x, y, 32);
    
    }
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
