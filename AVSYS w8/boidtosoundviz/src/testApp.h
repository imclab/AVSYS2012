#pragma once

#include "ofMain.h"
#include "Boid.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

        ofPoint mouse;
        vector<Boid> boids;
        
        //soundbox
        void audioReceived(float *input, int bufferSize, int nChannels);	
        
        float volume;
        float *inputBufferCopy;
};
