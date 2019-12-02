Automatic-Tracking-System-Based-on-Bone-Recognition  
================

NOTICE:  
个人毕业设计内容，用于分享学习。  
因为已经工作，所以可能不会有下一步的更新。  


本设计基于开源OPENPOSE骨骼识别库，在ROS框架下开发。  
具体硬件参数如下：  
上位机：NVIDIA JETSON TX2  
下位机：Arduino UNO官方核心板  
摄像头：ZED双目视觉摄像机  
被控对象：电动轮椅平台

以下将简单引导一下环境的配置。

ROS配置
-----------------
按照此教程配置应该是没问题的：https://www.cnblogs.com/saneri/p/10105422.html  
ROS系统的学习可以参考《ROS机器人开发实践》，或者参考https://www.ncnynl.com/archives/201608/496.html .  

OPENPOSE_ROS包
-----------------
ROS wrapper for OpenPose ( https://github.com/CMU-Perceptual-Computing-Lab/openpose ) allows the estimation of 2d multi-person pose from a single RGB camera (see commit number a1e0a5f4136e702b5731a268c2993fb75ca4753c ). Based on https://github.com/stevenjj/openpose_ros .  
这个主要是在ROS下使用的OpenPose包，是GitHub上大神制作的一个包，作为工程文件放在catkin_workspace文件夹下。这边主要有一个OpenPose（Real-time multi-person keypoint detection library for body, face, hands, and foot estimation）库，这也是本次工程的技术核心.  
* 值得注意的是，我们需要使用上面提到的a1e0a5f4136e702b5731a268c2993fb75ca4753c版本的库，否则本次工程无法运行。
* OpenPose的源码配置请不要放在工作区内编译，会导致编译不通过。
* 注意这个是旧版的OpenPose_ros包，另外需要结合https://github.com/firephinx/openpose_ros 的代码结合，此处工作量较大，需要排查的代码问题很多，我写的   工程已经完全解决，可以直接使用，感兴趣的可以自行查看两ROS包的代码区别。  

ZED_ROS_WRAPPER包
------------------
此包为ROS下的ZED驱动包，可以提供众多API节点供我们使用。  
开启节点：  
```c++
$ roslaunch zed_wrapped zed.launch
```
我们可以订阅到很多2D,3D的图像主题：  
* Depth and point cloud  
```
/zed/zed_node/depth/depth_registered: Depth map image registered on left image
/zed/zed_node/depth/camera_info: Depth camera calibration data
/zed/zed_node/point_cloud/cloud_registered: Registered color point cloud
/zed/zed_node/confidence/confidence_image: Confidence image
/zed/zed_node/confidence/confidence_map: Confidence image 
/zed/zed_node/disparity/disparity_image: Disparity image
```
* Tracking
```
/zed/zed_node/odom: Absolute 3D position and orientation relative to the Odometry frame 
/zed/zed_node/pose: Absolute 3D position and orientation relative to the Map frame (Sensor Fusion algorithm + SLAM)
/zed/zed_node/pose_with_covariance: Camera pose referred to Map frame with covariance
/zed/zed_node/path_odom: Sequence of camera odometry poses in Map frame
/zed/zed_node/path_map: Sequence of camera poses in Map frame
```
