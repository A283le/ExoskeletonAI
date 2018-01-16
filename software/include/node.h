#include <iostream>

using namespace std;

#ifndef NODE_H
#define NODE_H

class Node 
{
    private:
        Node **inputs;
        Node **outputs;
        float output_func;
        float *weights_input;
        float bias;
        int node_id;
    protected:
        void set_nodeid(int);
    public:
        Node();
        ~Node();

        void out_func(Node **, float *, float);

        int get_nodeid();

        float get_outputfunc();
        void set_outputfunc(float);

        void add_input(Node *);
        void add_output(Node *);
};
#endif