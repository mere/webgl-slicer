#ifdef GL_ES
precision highp float;
#endif

varying vec4 color;
uniform vec4 frontPlane, backPlane;
varying vec4 vertexPosition;
    void main(void) {
       if (dot(backPlane, vertexPosition) > 0.0) {
			gl_FragColor = color;//vec4(color.xyz,1);
		} else {
			discard;
		} 
	}