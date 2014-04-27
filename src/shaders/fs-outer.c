// shaderName=outer;

#ifdef GL_ES
precision highp float;
#endif

uniform float delta;

uniform float alpha;

varying vec2 vUv;        
uniform vec4 frontPlane, backPlane;
varying vec4 vertexPosition;

void main(void)
{
	if (dot(backPlane, vertexPosition) > 0.0) {
		gl_FragColor = vec4(1.0, 0.4, 0.0, 1.0);
	} else {
		discard;
	}

}