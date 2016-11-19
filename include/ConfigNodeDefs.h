#ifndef __CONFIGNODEDEFS_H__
#define __CONFIGNODEDEFS_H__

#define DIRECTORY										"directory"
#define WORKDIR											"workDir"
#define TRAINSAMPLE										"trainSample"
#define TESTSAMPLE										"testSample"


#define GENERALPARAMETERS								"generalParameters"
#define BATCH											"batch"
#define SUBDIVISIONS									"subdivisions"
#define HEIGHT											"height"
#define WIDTH											"width"
#define CHANNELS										"channels"
#define MOMENTUM										"momentum"
#define DECAY											"decay"
#define LEARNING_RATE									"learning_rate"
#define POLICY											"policy"
#define STEPS											"steps"
#define SCALES											"scales"
#define MAX_BATCHES										"max_batches"


#define CROPPARAMETERS									"cropParameters"
#define FILTERS											"filters"
#define SIZE											"size"
#define STRIDE											"stride"
#define PAD												"pad"
#define ACTIVATION										"activation"


#define DETECTIONPARAMETERS								"detectionParameters"
#define CLASS_NUM										"class_num"
#define COORDS											"coords"
#define RESCORE											"rescore"
#define SIDE											"side"
#define NUM												"num"
#define SOFTMAX											"softmax"
#define SQRT											"sqrt"
#define JITTER											"jitter"
#define OBJECT_SCALE									"object_scale"
#define NOOBJECT_SCALE									"noobject_scale"
#define CLASS_SCALE										"class_scale"
#define COORD_SCALE										"coord_scale"


#define CONVNET											"convNet"
#define CONVNET_CONV2									"conv2"
#define CONVNET_CONV2_FILTERS							"filters"
#define	CONVNET_CONV2_SIZE								"size"
#define CONVNET_CONV2_STRIDE							"stride"
#define CONVNET_CONV2_PAD								"pad"
#define CONVNET_CONV2_ACTIVATION						"activation"

#define CONVNET_MAXPOOL									"maxpool"
#define CONVNET_MAXPOOL_SIZE							"size"
#define CONVNET_MAXPOOL_STRIDE							"stride"

#define CONVNET_CONNECTED								"connected"
#define CONVNET_CONNECTED_OUTPUT						"output"
#define	CONVNET_CONNECTED_ACTIVATION					"activation"

#define DROPOUT											"dropout"

#endif // __CONFIGNODEDEFS_H__
