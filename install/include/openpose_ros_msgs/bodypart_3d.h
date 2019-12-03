// Generated by gencpp from file openpose_ros_msgs/bodypart_3d.msg
// DO NOT EDIT!


#ifndef OPENPOSE_ROS_MSGS_MESSAGE_BODYPART_3D_H
#define OPENPOSE_ROS_MSGS_MESSAGE_BODYPART_3D_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace openpose_ros_msgs
{
template <class ContainerAllocator>
struct bodypart_3d_
{
  typedef bodypart_3d_<ContainerAllocator> Type;

  bodypart_3d_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , confidence(0.0)  {
    }
  bodypart_3d_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , confidence(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef double _confidence_type;
  _confidence_type confidence;





  typedef boost::shared_ptr< ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator> const> ConstPtr;

}; // struct bodypart_3d_

typedef ::openpose_ros_msgs::bodypart_3d_<std::allocator<void> > bodypart_3d;

typedef boost::shared_ptr< ::openpose_ros_msgs::bodypart_3d > bodypart_3dPtr;
typedef boost::shared_ptr< ::openpose_ros_msgs::bodypart_3d const> bodypart_3dConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace openpose_ros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'openpose_ros_msgs': ['/home/nvidia/catkin_ws/src/openpose_ros/openpose_ros_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5b22696805db01f2f8a3f062ba847d53";
  }

  static const char* value(const ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5b22696805db01f2ULL;
  static const uint64_t static_value2 = 0xf8a3f062ba847d53ULL;
};

template<class ContainerAllocator>
struct DataType< ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "openpose_ros_msgs/bodypart_3d";
  }

  static const char* value(const ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n\
float64 y\n\
float64 z\n\
float64 confidence\n\
";
  }

  static const char* value(const ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.confidence);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct bodypart_3d_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::openpose_ros_msgs::bodypart_3d_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "confidence: ";
    Printer<double>::stream(s, indent + "  ", v.confidence);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPENPOSE_ROS_MSGS_MESSAGE_BODYPART_3D_H
