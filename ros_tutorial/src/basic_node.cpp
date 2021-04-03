#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "basic_node");
  ros::NodeHandle nh;

  int number = 0;

  while (number < 10)
  {
    ROS_INFO("20703");
    number++;
  }
}
