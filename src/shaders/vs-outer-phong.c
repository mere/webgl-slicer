uniform vec3 diffuse_color;
 varying vec4 color;
 varying vec4 vertexPosition;     

 vec3 SpecularColor = vec3(1.0,1.0,1.0);
 void main(void) {
   vertexPosition = vec4(position, 1.0);
     vec3 toLight = normalize(vec3(0.0,0.0,1.0));
     
     vec3 normal_cal = normalMatrix * normal;
     float NDotL = max(dot(normal_cal, toLight), 0.0);
     
     vec3 eyeDir = vec3(0.0,1.0,1.0);
     float NDotH = 0.0;
     vec3 SpecularLight = vec3(0.0,0.0,0.0);
     if(NDotL > 0.0)
     {
         vec3 halfVector = normalize( toLight + eyeDir);
         float NDotH = max(dot(normal_cal, halfVector), 0.0);
         float specular = pow(NDotH,25.0);
         SpecularLight = specular * SpecularColor;
     }
     color = vec4((NDotL * diffuse_color.xyz) + (SpecularLight.xyz ), .9);
     vec4 mvPosition = modelViewMatrix * vec4(position.x, position.y, position.z, 1.0);
     gl_Position = projectionMatrix * mvPosition;

 }