#include "ros/ros.h"
#include "std_msgs/String.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "KSG basic_publisher_node");
  ros::NodeHandle nh;

  ros::Publisher chatter_pub = nh.advertise<std_msgs::String>("chatter", 1000);

  ros::Rate loop_rate(60);

  std::string name;
  std::cout<<"이름을 입력하세요 : ";

  getline(std::cin, name);


  while (ros::ok())
  {

    std::string mesage;
    std::cout << "채팅을 입력하세요 : ";

    getline(std::cin,mesage);

    std_msgs::String msg;
    msg.data = name + " : " + mesage;

    chatter_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
  }

  return 0;
}
