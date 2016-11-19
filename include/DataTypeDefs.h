#ifndef __DATATYPEDEFS_H__
#define __DATATYPEDEFS_H__

#include <string>
#include <vector>
#include <opencv2\opencv.hpp>

namespace yolo
{
	struct stDirParam
	{
		std::string workDir;
		std::string trainSample;
		std::string testSample;
	};

	struct stGeneralParam
	{
		int batch;
		int subdivisions;
		cv::Size imgSize;
		int channels;
		float momentum;
		float decay;
		float learning_rate;

		std::vector<int> vSteps;
		std::vector<float> vScales;
		int max_batches;
	};

	struct stCropParam
	{
		int filters;
		int size;
		int stride;
		int pad;
		int activation;
	};

	struct stDetParam 
	{
		int classNum;
		int coords;
		int rescore;
		int side;
		int num;
		int softmax;
		int sqrt;
		float jitter;

		float object_scale;
		float noobject_scale;

		int class_scale;
		int coord_scale;
	};
}

namespace conv2
{
	enum ACTIVATION_TYPE
	{
		LEAKY,
		LINEAR
	};

	struct stConvParam 
	{
		/// <summary>convolutional layer parameters</summary>
		int filters;
		int size;
		int stride;
		int pad;
		int activation;
	};

	struct stMaxpoolParam
	{
		/// <summary>maxpooling parameters</summary>
		int size;
		int stride;
	};

	struct stConnectedParam
	{
		/// <summary>connected parameters</summary>
		int output;
		int activation;
	};

	struct stLayerParam 
	{
		std::string layerName;

		stConvParam st_conv_param;

		stMaxpoolParam st_maxpool_param;

		stConnectedParam st_connected_param;

		float dropout;
	};
}

#endif // __DATATYPEDEFS_H__
