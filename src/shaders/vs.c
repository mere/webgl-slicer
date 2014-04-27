varying vec2 vUv;

varying vec4 vertexPosition;

void main()

{
    vertexPosition = vec4(position, 1.0);

    vUv = uv;
    vec3 p = position;
    vec4 mvPosition = modelViewMatrix * vec4(p, 1.0 );
    gl_Position = projectionMatrix * mvPosition;

}


// uniform mat4 uModelM;
// uniform mat4 uViewProjectionM;
// attribute vec3 aPosition;
// varying vec3 vPosition;
// varying vec4 vertexPosition;
// void main() {
//   vec4 pos = uModelM * vec4(aPosition, 1.0);
//   gl_Position = uViewProjectionM * pos;
//   vPosition = pos.xyz / pos.w;
//   vertexPosition = vec4(position, 1.0);
// }