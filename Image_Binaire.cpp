#include <iostream>
#include<opencv2/highgui/highgui.hpp>
#include <ctime>
//#include <opencv2/gpu/gpu.hpp>


using namespace cv;
using namespace std;
int main()
{
	int start_s=clock();
	int stop_s;
	Mat img = imread("RGB.png",CV_LOAD_IMAGE_COLOR);
	Mat image_binaire = Mat::zeros(img.rows,img.cols,CV_8UC1);

	for(int i = 0; i < img.rows ; i++)
	{
		for(int j = 0; j <img.cols ; j++)
		{
			Vec3b color = img.at<Vec3b>(i,j);
			if(color[1]>127)
			{
				image_binaire.at<uchar>(i,j) = 255;
			}
			else
			{
				image_binaire.at<uchar>(i,j) = 0;				
			}
		}
	}
	stop_s=clock();
	cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	namedWindow("Lena", WINDOW_NORMAL);
    	imshow("Lena",image_binaire);
	imwrite("RGB-Binaire.png",image_binaire);
    	waitKey(0);

   	return 0;
}

