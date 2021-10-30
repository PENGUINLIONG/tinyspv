#version 450

layout(location=0) in vec4 vPos;
layout(location=1) in vec2 vUv;

layout(location=0) out mediump vec4 color;

layout(binding=0) uniform sampler2D mainTex;


void main() {
    color = texture(mainTex, vUv) * vPos.z;
}
