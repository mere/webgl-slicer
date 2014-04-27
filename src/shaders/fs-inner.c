#ifdef GL_ES
precision highp float;
#endif

uniform vec4 frontPlane, backPlane;
varying vec4 vertexPosition;

void main(void) {

	if ( dot(backPlane, vertexPosition) > 0.0) {
		gl_FragColor = vec4(1.0, 1.0, 1.0, 1.0);
	} else {
		discard;
		gl_FragColor = vec4(1.0, 0.0, 0.0, 0);
	}

}