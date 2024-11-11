#ifndef OBJECT
#define OBJECT

#define Object(type) struct ##type

#define TOTYPE(type) *(#type*)

#endif