// Generated by gencpp from file openpose_ros_msgs/OpenPoseHumanList.msg
// DO NOT EDIT!


#ifndef OPENPOSE_ROS_MSGS_MESSAGE_OPENPOSEHUMANLIST_H
#define OPENPOSE_ROS_MSGS_MESSAGE_OPENPOSEHUMANLIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <std_msgs/Header.h>
#include <openpose_ros_msgs/OpenPoseHuman.h>

namespace openpose_ros_msgs
{
template <class ContainerAllocator>
struct OpenPoseHumanList_
{
  typedef OpenPoseHumanList_<ContainerAllocator> Type;

  OpenPoseHumanList_()
    : header()
    , image_header()
    , num_humans(0)
    , human_list()  {
    }
  OpenPoseHumanList_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , image_header(_alloc)
    , num_humans(0)
    , human_list(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::std_msgs::Header_<ContainerAllocator>  _image_header_type;
  _image_header_type image_header;

   typedef int32_t _num_humans_type;
  _num_humans_type num_humans;

   typedef std::vector< ::openpose_ros_msgs::OpenPoseHuman_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::openpose_ros_msgs::OpenPoseHuman_<ContainerAllocator> >::other >  _human_list_type;
  _human_list_type human_list;





  typedef boost::shared_ptr< ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator> const> ConstPtr;

}; // struct OpenPoseHumanList_

typedef ::openpose_ros_msgs::OpenPoseHumanList_<std::allocator<void> > OpenPoseHumanList;

typedef boost::shared_ptr< ::openpose_ros_msgs::OpenPoseHumanList > OpenPoseHumanListPtr;
typedef boost::shared_ptr< ::openpose_ros_msgs::OpenPoseHumanList const> OpenPoseHumanListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace openpose_ros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'openpose_ros_msgs': ['/home/nvidia/catkin_ws/src/openpose_ros/openpose_ros_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "254edc23cd4997f8bc3d6a249587f5f5";
  }

  static const char* value(const ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x254edc23cd4997f8ULL;
  static const uint64_t static_value2 = 0xbc3d6a249587f5f5ULL;
};

template<class ContainerAllocator>
struct DataType< ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "openpose_ros_msgs/OpenPoseHumanList";
  }

  static const char* value(const ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
Header image_header\n\
int32 num_humans\n\
OpenPoseHuman[] human_list\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: openpose_ros_msgs/OpenPoseHuman\n\
int32 person_id\n\
int32 num_body_key_points_with_non_zero_prob\n\
int32 num_face_key_points_with_non_zero_prob\n\
int32 num_right_hand_key_points_with_non_zero_prob\n\
int32 num_left_hand_key_points_with_non_zero_prob\n\
BoundingBox face_bounding_box\n\
PointWithProb[25] body_key_points_with_prob\n\
PointWithProb[70] face_key_points_with_prob\n\
PointWithProb[21] right_hand_key_points_with_prob\n\
PointWithProb[21] left_hand_key_points_with_prob\n\
\n\
================================================================================\n\
MSG: openpose_ros_msgs/BoundingBox\n\
float64 x\n\
float64 y\n\
float64 width\n\
float64 height\n\
================================================================================\n\
MSG: openpose_ros_msgs/PointWithProb\n\
float64 x\n\
float64 y\n\
float64 prob\n\
";
  }

  static const char* value(const ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.image_header);
      stream.next(m.num_humans);
      stream.next(m.human_list);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OpenPoseHumanList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::openpose_ros_msgs::OpenPoseHumanList_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "image_header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.image_header);
    s << indent << "num_humans: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_humans);
    s << indent << "human_list[]" << std::endl;
    for (size_t i = 0; i < v.human_list.size(); ++i)
    {
      s << indent << "  human_list[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::openpose_ros_msgs::OpenPoseHuman_<ContainerAllocator> >::stream(s, indent + "    ", v.human_list[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPENPOSE_ROS_MSGS_MESSAGE_OPENPOSEHUMANLIST_H
