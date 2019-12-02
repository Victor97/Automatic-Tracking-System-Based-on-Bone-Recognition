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
* 此处忽略了OpenPose的配置，需要自行去CMU发布的GitHub上学习。  


