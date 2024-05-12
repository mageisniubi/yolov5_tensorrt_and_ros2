#ifndef YOLO_H_
#define YOLO_H_

#include "rclcpp/rclcpp.hpp"
#include <cv_bridge/cv_bridge.h>
#include <Eigen/Dense>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/eigen.hpp>
#include "opencv2/opencv.hpp"

#include <iostream>
#include <string>
#include <fstream>
#include <chrono>
#include <memory>

#define Z 0.5
#define C_to_D_W 0.41641
#define C_to_D_H 0.4152778

using PointCloud2 = sensor_msgs::msg::PointCloud2;
using namespace cv;
using namespace std;
using namespace Eigen;

class yolov5_ros2 : public rclcpp::Node
{
public:
    // 构造函数,有一个参数为节点名称
    yolov5_ros2(std::string name);
    void img_callback(const sensor_msgs::msg::Image::SharedPtr msg);

private:
    // 订阅者
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr img_subscribe;
};

#endif
