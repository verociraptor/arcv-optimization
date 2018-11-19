NVCC=/usr/local/cuda-7.5/bin/nvcc
#NVCC=/usr/local/cuda-9.1/bin/nvcc


# GPU
gpu: filtersDemo.cpp
	${NVCC} filtersDemo.cpp src/ArcV/Math/Matrix.cpp src/ArcV/Processing/ImageColorspace.cpp src/ArcV/Processing/ImageDetector.cpp src/ArcV/Processing/ImageFilter.cpp src/ArcV/Processing/ImageFormat.cpp src/ArcV/Processing/ImageThreshold.cpp src/ArcV/Processing/Sobel.cpp src/ArcV/Utils/Webcam.cpp src/ArcV/Utils/Window.cpp  -o filtersDemo -std=c++11 

