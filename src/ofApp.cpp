#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	file.open(ofToDataPath("hostname.txt"), ofFile::ReadWrite, false);
	if (file) {
		buff = file.readToBuffer();
		hostname = buff.getText();
	} else {
		hostname += "_" + ofGetTimestampString("%y-%m-%d-%H-%M-%S-%i");
		ofStringReplace(hostname, "-", "");
		ofStringReplace(hostname, "\n", "");
		ofStringReplace(hostname, "\r", "");
		buff.set(hostname.c_str(), hostname.size());
		ofBufferToFile("hostname.txt", buff);
	}
	cout << hostname;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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
