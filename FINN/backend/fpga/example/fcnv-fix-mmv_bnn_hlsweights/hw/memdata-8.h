/*
Weight and threshold memory initialization for Vivado HLS
PEs = 4, SIMD width = 1, threshold bits = 16
weight mem depth = 1536, thres mem depth = 3
layer sizes (neurons, synapses per neuron): 
(12, 512) 
padded neurons for each layer: 
2 
padded synapses for each layer: 
0 
*/

const unsigned int matrixH8[] = {12};
const unsigned int matrixW8[] = {512};
const unsigned int layerStartW8[] = {0};
const unsigned int layerStartT8[] = {0};

const ap_uint<1> weightMem8[4][1536] = {
{
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0
},{
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0
},{
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1
},{
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x0,
0x1,
0x1,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x1,
0x1,
0x0,
0x1,
0x0,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x0,
0x0,
0x0,
0x0,
0x1,
0x1,
0x1,
0x0,
0x0,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1,
0x1
}
};
const ap_uint<16> thresMem8[4][3] = {
{
307,
311,
307
},{
304,
304,
299
},{
313,
323,
65535
},{
309,
318,
65535
}
};